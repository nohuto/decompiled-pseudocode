/*
 * XREFs of sub_1800CDE90 @ 0x1800CDE90
 * Callers:
 *     sub_1800CD8AC @ 0x1800CD8AC (sub_1800CD8AC.c)
 *     sub_1800CE0A0 @ 0x1800CE0A0 (sub_1800CE0A0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001145C @ 0x18001145C (sub_18001145C.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18001FC84 @ 0x18001FC84 (sub_18001FC84.c)
 *     sub_18002963C @ 0x18002963C (sub_18002963C.c)
 *     sub_1800C589C @ 0x1800C589C (sub_1800C589C.c)
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall sub_1800CDE90(__int64 a1, __int64 *a2, __int64 a3, char a4, int a5)
{
  int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64, _DWORD *, __int64 *); // rdi
  int v11; // eax
  ULONG_PTR v12; // rbx
  const char *v13; // rax
  __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v16; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h]
  _DWORD v18[4]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+58h] [rbp-A8h]
  __int64 v20; // [rsp+68h] [rbp-98h] BYREF
  __int64 v21; // [rsp+70h] [rbp-90h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v23[4]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v24[16]; // [rsp+140h] [rbp+40h] BYREF
  int v25; // [rsp+150h] [rbp+50h]
  void *retaddr; // [rsp+198h] [rbp+98h]

  v16 = a2;
  if ( (a4 & 1) != 0 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a3 + 80LL))(a3, v24);
    v8 = v25;
    if ( v25 == 44 )
    {
      v18[0] = 46;
    }
    else
    {
      if ( v25 == 39 )
        v8 = 41;
      v18[0] = v8;
    }
    v18[1] = 8;
    v18[3] = a5;
    v18[2] = 0;
    v15 = 0LL;
    sub_180011C50(a1 + 72, &v16);
    sub_18001FC84(&v20, (__int64 *)&v16);
    if ( v17 )
      sub_180010530(v17);
    sub_1800C589C(v20, &v16);
    v9 = (__int64)v16;
    v10 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *, __int64 *))(*v16 + 56);
    sub_18000E72C(&v15);
    v11 = v10(v9, a3, v18, &v15);
    v12 = v11;
    sub_1800C7750(v20, v11);
    if ( (v12 & 0x80000000) != 0LL )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v12;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v13 = (const char *)sub_18002963C(a1, v23);
    if ( *((_QWORD *)v13 + 3) >= 0x10uLL )
      v13 = *(const char **)v13;
    sub_18001145C(v15, v13);
    sub_180011B24((__int64)v23);
    sub_18000E72C((__int64 *)&v16);
    if ( v21 )
      sub_180010530(v21);
    *a2 = 0LL;
    if ( a2 != &v15 )
    {
      *a2 = v15;
      v15 = 0LL;
    }
    sub_18000E72C(&v15);
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
