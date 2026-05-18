/*
 * XREFs of sub_1800D9A3C @ 0x1800D9A3C
 * Callers:
 *     sub_1800DADE0 @ 0x1800DADE0 (sub_1800DADE0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_1800DA968 @ 0x1800DA968 (sub_1800DA968.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall sub_1800D9A3C(__int64 a1)
{
  _QWORD *v1; // rax
  ULONG_PTR v2; // rbx
  __int64 v3; // rcx
  int v5; // [rsp+20h] [rbp-69h] BYREF
  __int64 v6; // [rsp+28h] [rbp-61h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+30h] [rbp-59h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+5Fh]

  v5 = 0;
  v1 = (_QWORD *)sub_1800DA968(a1, &v6);
  v2 = (*(int (__fastcall **)(_QWORD, __int64, int *))(*(_QWORD *)*v1 + 232LL))(*v1, 87LL, &v5);
  v3 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( (v2 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v2;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  return (v5 & 0x240000) == 2359296;
}
