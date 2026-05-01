/*
 * XREFs of HamCreateExtendedExecution @ 0x18001D4B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800026E8 @ 0x1800026E8 (sub_1800026E8.c)
 *     sub_180007DE0 @ 0x180007DE0 (sub_180007DE0.c)
 */

__int64 __fastcall HamCreateExtendedExecution(_QWORD *a1, __int64 a2, int a3, __int64 a4, _QWORD *a5)
{
  __int64 result; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  int v11; // [rsp+20h] [rbp-48h]
  unsigned int v12; // [rsp+40h] [rbp-28h]
  _QWORD v13[3]; // [rsp+48h] [rbp-20h] BYREF
  PVOID P; // [rsp+70h] [rbp+8h] BYREF

  P = 0LL;
  v13[0] = -1LL;
  result = sub_1800026E8(a2, (__int64)a1, &P);
  v12 = result;
  if ( (int)result >= 0 )
  {
    v11 = a3;
    result = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180020B88, 3u, 0LL, *a1, v11, a4, v13).Simple;
    v13[1] = result;
    v12 = result;
    if ( (int)result >= 0 )
    {
      v9 = P;
      *((_QWORD *)P + 6) = v13[0];
      v10 = v9[5];
      RtlAcquireSRWLockExclusive(v10 + 8);
      *(_DWORD *)(v10 + 16) = GetCurrentThreadId();
      sub_180007DE0((__int64)v9);
      *(_DWORD *)(v10 + 16) = 0;
      RtlReleaseSRWLockExclusive(v10 + 8);
      P = 0LL;
      *a5 = v13[0];
      result = 0LL;
      v12 = 0;
    }
  }
  if ( P )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    return v12;
  }
  return result;
}
