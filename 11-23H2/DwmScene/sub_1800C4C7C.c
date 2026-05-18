/*
 * XREFs of sub_1800C4C7C @ 0x1800C4C7C
 * Callers:
 *     sub_1800C5C2C @ 0x1800C5C2C (sub_1800C5C2C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_1800C589C @ 0x1800C589C (sub_1800C589C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall sub_1800C4C7C(__int64 a1)
{
  _QWORD *v1; // rax
  ULONG_PTR v2; // rbx
  int v4; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v5; // [rsp+28h] [rbp-C0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+30h] [rbp-B8h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]

  v4 = 0;
  v1 = (_QWORD *)sub_1800C589C(a1, &v5);
  v2 = (*(int (__fastcall **)(_QWORD, __int64, int *))(*(_QWORD *)*v1 + 232LL))(*v1, 87LL, &v4);
  sub_18000E72C(&v5);
  if ( (v2 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v2;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  return (v4 & 0x240000) == 2359296;
}
