/*
 * XREFs of sub_1800D875C @ 0x1800D875C
 * Callers:
 *     sub_1800D3820 @ 0x1800D3820 (sub_1800D3820.c)
 *     sub_1800D84E0 @ 0x1800D84E0 (sub_1800D84E0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _o__invalid_parameter_noinfo @ 0x18000BF9A (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x18000C0BC (memset.c)
 *     memcpy @ 0x18000CA61 (memcpy.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180025AEC @ 0x180025AEC (sub_180025AEC.c)
 *     sub_180051000 @ 0x180051000 (sub_180051000.c)
 *     sub_1800C589C @ 0x1800C589C (sub_1800C589C.c)
 *     sub_1800C58DC @ 0x1800C58DC (sub_1800C58DC.c)
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 *     sub_1800D7C38 @ 0x1800D7C38 (sub_1800D7C38.c)
 *     sub_1800D8574 @ 0x1800D8574 (sub_1800D8574.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall sub_1800D875C(_QWORD *a1, __int64 *a2, __int64 *a3, unsigned int a4)
{
  size_t v4; // r14
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, _DWORD *, _QWORD, __int64 *); // rdi
  int v10; // eax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  ULONG_PTR v13; // rbx
  void *v14; // rdx
  void *v15; // rcx
  _QWORD *v16; // rax
  void *v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21[3]; // [rsp+58h] [rbp-A8h] BYREF
  void *Src; // [rsp+70h] [rbp-90h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v24[6]; // [rsp+120h] [rbp+20h] BYREF
  void *retaddr; // [rsp+178h] [rbp+78h]

  v4 = a4;
  v21[0] = (__int64)a1;
  v21[2] = (__int64)a3;
  v7 = sub_1800D7C38(*a2);
  sub_1800C589C(v7, &v20);
  v24[5] = 0;
  v24[0] = v4;
  v24[1] = 3;
  v24[3] = 0x20000;
  v24[2] = 0;
  v24[4] = 0;
  v19 = 0LL;
  v8 = v20;
  v9 = *(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, __int64 *))(*(_QWORD *)v20 + 24LL);
  sub_18000E72C(&v19);
  v10 = v9(v8, v24, 0LL, &v19);
  sub_1800C7750(v7, v10);
  v11 = sub_1800C58DC(v7, &v18);
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v11 + 376LL))(*v11, v19, *a3);
  sub_18000E72C((__int64 *)&v18);
  v12 = sub_1800C58DC(v7, &v18);
  v13 = (*(int (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)*v12 + 112LL))(
          *v12,
          v19,
          0LL,
          1LL,
          0,
          &Src);
  sub_18000E72C((__int64 *)&v18);
  if ( (v13 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v13;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  sub_180051000(&v18, v4);
  v14 = Src;
  if ( (_DWORD)v4 )
  {
    v15 = v18;
    if ( v18 )
    {
      if ( Src )
      {
        memcpy(v18, Src, v4);
        goto LABEL_9;
      }
      memset(v18, 0, v4);
    }
    *(_DWORD *)o__errno(v15, v14) = 22;
    o__invalid_parameter_noinfo();
  }
LABEL_9:
  v16 = sub_1800C58DC(v7, v21);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v16 + 120LL))(*v16, v19, 0LL);
  sub_18000E72C(v21);
  sub_1800D8574(a1, (__int64 *)&v18);
  sub_180025AEC(&v18);
  sub_18000E72C(&v19);
  sub_18000E72C(&v20);
  sub_18000E72C(a3);
  return a1;
}
