/*
 * XREFs of sub_1800C4D60 @ 0x1800C4D60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0BC (memset.c)
 *     memcpy @ 0x18000CA61 (memcpy.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180017600 @ 0x180017600 (sub_180017600.c)
 *     sub_18002650C @ 0x18002650C (sub_18002650C.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180026B04 @ 0x180026B04 (sub_180026B04.c)
 *     sub_180026F80 @ 0x180026F80 (sub_180026F80.c)
 *     sub_18002A070 @ 0x18002A070 (sub_18002A070.c)
 *     sub_18002B8E0 @ 0x18002B8E0 (sub_18002B8E0.c)
 *     sub_1800566F0 @ 0x1800566F0 (sub_1800566F0.c)
 *     sub_1800C412C @ 0x1800C412C (sub_1800C412C.c)
 *     sub_1800C5ADC @ 0x1800C5ADC (sub_1800C5ADC.c)
 *     sub_1800CF0C8 @ 0x1800CF0C8 (sub_1800CF0C8.c)
 *     sub_1800D048C @ 0x1800D048C (sub_1800D048C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
char __fastcall sub_1800C4D60(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  int v7; // eax
  __int64 v8; // rbx
  void (__fastcall *v9)(__int64, _QWORD, __int64); // rsi
  __int64 v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rdi
  int v13; // eax
  ULONG_PTR v14; // rsi
  unsigned __int64 v15; // r9
  float v16; // xmm1_4
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  float v19; // xmm1_4
  unsigned __int64 v20; // rsi
  size_t v21; // r12
  __int64 v22; // r13
  char *v23; // r14
  char *i; // r15
  __int64 v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h]
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h]
  __int64 v33; // [rsp+80h] [rbp-80h] BYREF
  __int64 v34; // [rsp+88h] [rbp-78h]
  __int64 v35; // [rsp+90h] [rbp-70h] BYREF
  __int64 v36; // [rsp+98h] [rbp-68h]
  void *Src; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v38; // [rsp+A8h] [rbp-58h]
  __int64 v39; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v40; // [rsp+B8h] [rbp-48h]
  __int64 v41; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v42; // [rsp+C8h] [rbp-38h]
  _BYTE v43[16]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v44[16]; // [rsp+E0h] [rbp-20h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+F0h] [rbp-10h] BYREF
  void *retaddr; // [rsp+1D8h] [rbp+D8h]

  sub_18002A070(a1 + 24, (__int64)v44);
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a3 + 320LL))(a3, v43);
  sub_18001246C(&v33, (_QWORD *)(a1 + 272));
  sub_1800C412C((__int64)&v41);
  sub_1800D048C(v41, &v28);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 32LL))(a3, &v29);
  sub_180026B04(v29, &v33);
  v6 = sub_180026650(a1);
  sub_1800566F0(v33, &v31, v6);
  sub_180017600((__int64)&v39);
  sub_1800C5ADC(v29, &v31);
  v7 = sub_180026650(a1);
  sub_1800566F0(v31, v27, v7);
  sub_180017600((__int64)&v35);
  v8 = v28;
  v9 = *(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v28 + 376LL);
  v10 = *(_QWORD *)sub_1800CF0C8(v39, &v26);
  v11 = (_QWORD *)sub_1800CF0C8(v35, v27);
  v9(v8, *v11, v10);
  sub_18000E72C(v27);
  sub_18000E72C(&v26);
  sub_1800CF0C8(v35, v27);
  v12 = v27[0];
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)v8 + 112LL))(
          v8,
          v27[0],
          0LL,
          1LL,
          0,
          &Src);
  v14 = v13;
  if ( v13 < 0 )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v14;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  sub_18002650C(v29, &v26);
  v15 = 0LL;
  v16 = *(float *)&v26;
  if ( *(float *)&v26 >= 9.223372e18 )
  {
    v16 = *(float *)&v26 - 9.223372e18;
    if ( (float)(*(float *)&v26 - 9.223372e18) < 9.223372e18 )
      v15 = 0x8000000000000000uLL;
  }
  v17 = v15 + (unsigned int)(int)v16;
  v18 = 0LL;
  v19 = *((float *)&v26 + 1);
  if ( *((float *)&v26 + 1) >= 9.223372e18 )
  {
    v19 = *((float *)&v26 + 1) - 9.223372e18;
    if ( (float)(*((float *)&v26 + 1) - 9.223372e18) < 9.223372e18 )
      v18 = 0x8000000000000000uLL;
  }
  v20 = v18 + (unsigned int)(int)v19;
  v21 = 4 * v17;
  v22 = v38;
  v23 = (char *)Src;
  for ( i = (char *)sub_180026F80(v17, a2, v29, (int)v20 * 4 * (int)v17); v20; --v20 )
  {
    memcpy(i, v23, v21);
    v23 += v22;
    i += v21;
  }
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v8 + 120LL))(v8, v12, 0LL);
  sub_18000E72C(v27);
  if ( v36 )
    sub_180010530(v36);
  if ( v32 )
    sub_180010530(v32);
  if ( v40 )
    sub_180010530(v40);
  if ( v34 )
    sub_180010530(v34);
  if ( v30 )
    sub_180010530(v30);
  sub_18000E72C(&v28);
  if ( v42 )
    sub_180010530(v42);
  sub_18002B8E0((__int64)v43);
  sub_180010F54((__int64)v44);
  return 1;
}
