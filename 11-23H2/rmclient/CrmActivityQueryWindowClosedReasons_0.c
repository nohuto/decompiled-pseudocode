/*
 * XREFs of CrmActivityQueryWindowClosedReasons_0 @ 0x1800094EC
 * Callers:
 *     CrmActivityQueryWindowClosedReasons @ 0x1800094E0 (CrmActivityQueryWindowClosedReasons.c)
 * Callees:
 *     sub_1800153DC @ 0x1800153DC (sub_1800153DC.c)
 */

CLIENT_CALL_RETURN __fastcall CrmActivityQueryWindowClosedReasons_0(__int64 a1, PVOID *a2, _DWORD *a3)
{
  __int64 v6; // r14
  CLIENT_CALL_RETURN result; // rax
  unsigned int Pointer; // [rsp+40h] [rbp-38h]
  int v9; // [rsp+80h] [rbp+8h] BYREF
  PVOID *v10; // [rsp+88h] [rbp+10h]
  _DWORD *v11; // [rsp+90h] [rbp+18h]
  PVOID P; // [rsp+98h] [rbp+20h] BYREF

  v11 = a3;
  v10 = a2;
  P = 0LL;
  v9 = 0;
  v6 = *(_QWORD *)(a1 + 16);
  if ( (unsigned int)sub_1800153DC(v6) )
    result.Pointer = NdrClientCall3(
                       (MIDL_STUBLESS_PROXY_INFO *)&stru_1800209B0,
                       3u,
                       0LL,
                       *(_QWORD *)(a1 + 8),
                       *(_QWORD *)(v6 + 8),
                       &P,
                       &v9).Pointer;
  else
    result.Simple = CrmpInProcActivityQueryWindowClosedReasons(*(_QWORD *)(a1 + 8), *(_QWORD *)(v6 + 16), &P, &v9);
  Pointer = (unsigned int)result.Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    *a2 = P;
    *a3 = v9;
    P = 0LL;
    result.Simple = 0LL;
    Pointer = 0;
  }
  if ( P )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    return (CLIENT_CALL_RETURN)Pointer;
  }
  return result;
}
