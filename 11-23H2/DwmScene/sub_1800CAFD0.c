/*
 * XREFs of sub_1800CAFD0 @ 0x1800CAFD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 *     sub_1800C9E00 @ 0x1800C9E00 (sub_1800C9E00.c)
 *     sub_1800C9E5C @ 0x1800C9E5C (sub_1800C9E5C.c)
 *     sub_1800C9FBC @ 0x1800C9FBC (sub_1800C9FBC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_1800CAFD0(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rdi
  int (__fastcall *v6)(__int64, _DWORD *, _QWORD, __int64 *); // rbx
  ULONG_PTR v7; // rbx
  __int64 *v8; // rax
  __int64 v10; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+40h] [rbp-C0h]
  __int64 *v12; // [rsp+48h] [rbp-B8h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v14[12]; // [rsp+F0h] [rbp-10h] BYREF
  void *retaddr; // [rsp+158h] [rbp+58h]

  v12 = a2;
  v14[9] = 0;
  v14[3] = 1;
  v14[8] = 32;
  v14[4] = sub_1800C9E5C(a1);
  v14[0] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
  v14[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
  v14[2] = 1;
  v14[5] = 1;
  v14[6] = 0;
  v14[10] = 512;
  v14[7] = 0;
  *a2 = 0LL;
  v4 = sub_1800C9E00(a1, &v10);
  v5 = *v4;
  v6 = *(int (__fastcall **)(__int64, _DWORD *, _QWORD, __int64 *))(*(_QWORD *)*v4 + 40LL);
  sub_18000E72C(a2);
  v7 = v6(v5, v14, 0LL, a2);
  sub_18000E72C(&v10);
  v8 = sub_1800C9FBC(a1, &v10);
  sub_1800C7750(*v8, v7);
  if ( v11 )
    sub_180010530(v11);
  if ( (v7 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v7;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  return a2;
}
