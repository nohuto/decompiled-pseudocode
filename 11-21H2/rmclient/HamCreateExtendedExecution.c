/*
 * XREFs of HamCreateExtendedExecution @ 0x18001CAE0
 * Callers:
 *     <none>
 * Callees:
 *     HampConnectionObjectCreate @ 0x180001C08 (HampConnectionObjectCreate.c)
 *     HamIpcChannelAddCallback @ 0x180002750 (HamIpcChannelAddCallback.c)
 */

__int64 __fastcall HamCreateExtendedExecution(_QWORD *a1, __int64 a2, int a3, __int64 a4, _QWORD *a5)
{
  __int64 result; // rax
  PVOID v9; // rcx
  int v10; // [rsp+20h] [rbp-48h]
  unsigned int v11; // [rsp+40h] [rbp-28h]
  _QWORD v12[3]; // [rsp+48h] [rbp-20h] BYREF
  PVOID P; // [rsp+70h] [rbp+8h] BYREF

  P = 0LL;
  v12[0] = -1LL;
  result = HampConnectionObjectCreate(a2, (__int64)a1, &P);
  v11 = result;
  if ( (int)result >= 0 )
  {
    v10 = a3;
    result = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180021B10, 3u, 0LL, *a1, v10, a4, v12).Simple;
    v12[1] = result;
    v11 = result;
    if ( (int)result >= 0 )
    {
      v9 = P;
      *((_QWORD *)P + 6) = v12[0];
      HamIpcChannelAddCallback((__int64)v9);
      P = 0LL;
      *a5 = v12[0];
      result = 0LL;
      v11 = 0;
    }
  }
  if ( P )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    return v11;
  }
  return result;
}
