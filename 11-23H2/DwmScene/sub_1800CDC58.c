/*
 * XREFs of sub_1800CDC58 @ 0x1800CDC58
 * Callers:
 *     sub_1800CD298 @ 0x1800CD298 (sub_1800CD298.c)
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
__int64 *__fastcall sub_1800CDC58(__int64 a1, __int64 *a2, __int64 a3, __int16 a4, int a5)
{
  unsigned int v9; // eax
  int v10; // eax
  int v11; // ecx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64, unsigned int *, __int64 *); // rdi
  int v14; // eax
  ULONG_PTR v15; // rbx
  const char *v16; // rax
  __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v19; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h]
  unsigned int v21; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+4Ch] [rbp-B4h]
  int v23; // [rsp+50h] [rbp-B0h]
  int v24; // [rsp+54h] [rbp-ACh]
  __int64 v25; // [rsp+58h] [rbp-A8h]
  __int64 v26; // [rsp+68h] [rbp-98h] BYREF
  __int64 v27; // [rsp+70h] [rbp-90h]
  EXCEPTION_RECORD pExceptionRecord; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v29[16]; // [rsp+120h] [rbp+20h] BYREF
  unsigned int v30; // [rsp+130h] [rbp+30h]
  unsigned int v31; // [rsp+134h] [rbp+34h]
  _QWORD v32[4]; // [rsp+150h] [rbp+50h] BYREF
  void *retaddr; // [rsp+1A8h] [rbp+A8h]

  v19 = a2;
  if ( (a4 & 1) != 0 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a3 + 80LL))(a3, v29);
    v9 = v30;
    if ( v30 == 44 )
    {
      v9 = (a4 & 0x400 | 0xB800u) >> 10;
    }
    else if ( v30 == 39 )
    {
      v9 = 41;
    }
    v21 = v9;
    v10 = 4;
    if ( v31 > 1 )
      v10 = 6;
    v23 = 0;
    v11 = -1;
    v22 = 9;
    if ( (a4 & 0x10) == 0 )
      v22 = v10;
    if ( a5 )
      v11 = a5;
    v24 = v11;
    v18 = 0LL;
    sub_180011C50(a1 + 72, &v19);
    sub_18001FC84(&v26, (__int64 *)&v19);
    if ( v20 )
      sub_180010530(v20);
    sub_1800C589C(v26, &v19);
    v12 = (__int64)v19;
    v13 = *(__int64 (__fastcall **)(__int64, __int64, unsigned int *, __int64 *))(*v19 + 56);
    sub_18000E72C(&v18);
    v14 = v13(v12, a3, &v21, &v18);
    v15 = v14;
    sub_1800C7750(v26, v14);
    if ( (v15 & 0x80000000) != 0LL )
    {
      memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -532265403;
      pExceptionRecord.ExceptionAddress = retaddr;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionInformation[0] = v15;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
    v16 = (const char *)sub_18002963C(a1, v32);
    if ( *((_QWORD *)v16 + 3) >= 0x10uLL )
      v16 = *(const char **)v16;
    sub_18001145C(v18, v16);
    sub_180011B24((__int64)v32);
    sub_18000E72C((__int64 *)&v19);
    if ( v27 )
      sub_180010530(v27);
    *a2 = 0LL;
    if ( a2 != &v18 )
    {
      *a2 = v18;
      v18 = 0LL;
    }
    sub_18000E72C(&v18);
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
