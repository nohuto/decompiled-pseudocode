/*
 * XREFs of sub_1800C5950 @ 0x1800C5950
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_1800C3064 @ 0x1800C3064 (sub_1800C3064.c)
 *     sub_1800C589C @ 0x1800C589C (sub_1800C589C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C5950(__int64 a1)
{
  _QWORD *v1; // rax
  int v2; // eax
  ULONG_PTR v3; // rbx
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-79h] BYREF
  __int64 v7; // [rsp+28h] [rbp-71h] BYREF
  __int64 v8[2]; // [rsp+30h] [rbp-69h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+40h] [rbp-59h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+5Fh]

  v6 = -1;
  v7 = 0LL;
  v1 = sub_1800C589C(a1, v8);
  sub_1800C3064((__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v1, &v7);
  sub_18000E72C(v8);
  if ( v7 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 104LL))(v7, &v6);
    v3 = v2;
    if ( v2 < 0 )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v3;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
  }
  v4 = v6;
  sub_18000E72C(&v7);
  return v4;
}
