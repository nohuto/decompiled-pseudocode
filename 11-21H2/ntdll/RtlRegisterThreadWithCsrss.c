/*
 * XREFs of RtlRegisterThreadWithCsrss @ 0x180014E30
 * Callers:
 *     TppWorkerThread @ 0x180016A00 (TppWorkerThread.c)
 * Callees:
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

NTSTATUS RtlRegisterThreadWithCsrss(void)
{
  NTSTATUS v0; // ecx
  _CLIENT_ID ClientId; // xmm0
  _QWORD v3[6]; // [rsp+20h] [rbp-3D8h] BYREF
  int v4; // [rsp+50h] [rbp-3A8h]
  __int64 v5; // [rsp+60h] [rbp-398h]
  _CLIENT_ID v6; // [rsp+68h] [rbp-390h]

  v0 = 0;
  if ( CsrClientProcess || !CsrInitOnceDone || !CsrServerApiRoutine )
    return v0;
  if ( !LdrpIsSecureProcess )
  {
    v5 = 0LL;
    ClientId = NtCurrentTeb()->ClientId;
    v3[0] = 5767216LL;
    v3[5] = 0LL;
    v6 = ClientId;
    v4 = 65561;
    return ((__int64 (__fastcall *)(_QWORD *, _QWORD *))CsrServerApiRoutine)(v3, v3);
  }
  return -1073741637;
}
