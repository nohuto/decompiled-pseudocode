/*
 * XREFs of sub_1800C5100 @ 0x1800C5100
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0BC (memset.c)
 *     memcpy @ 0x18000CA61 (memcpy.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180017600 @ 0x180017600 (sub_180017600.c)
 *     sub_18002650C @ 0x18002650C (sub_18002650C.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180026B04 @ 0x180026B04 (sub_180026B04.c)
 *     sub_180026F80 @ 0x180026F80 (sub_180026F80.c)
 *     sub_18002B8E0 @ 0x18002B8E0 (sub_18002B8E0.c)
 *     sub_1800566F0 @ 0x1800566F0 (sub_1800566F0.c)
 *     sub_1800C412C @ 0x1800C412C (sub_1800C412C.c)
 *     sub_1800C5ADC @ 0x1800C5ADC (sub_1800C5ADC.c)
 *     sub_1800CF0C8 @ 0x1800CF0C8 (sub_1800CF0C8.c)
 *     sub_1800D048C @ 0x1800D048C (sub_1800D048C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
char __fastcall sub_1800C5100(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // eax
  int v8; // eax
  __int64 v9; // rbx
  void (__fastcall *v10)(__int64, _QWORD, __int64); // rsi
  __int64 v11; // rdi
  __int64 v12; // r14
  _QWORD *v13; // rax
  int (__fastcall *v14)(__int64, _QWORD, _QWORD, __int64, _DWORD, void **); // rdi
  _QWORD *v15; // rax
  ULONG_PTR v16; // rdi
  unsigned __int64 v17; // r9
  float v18; // xmm1_4
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rax
  float v21; // xmm1_4
  unsigned __int64 v22; // rsi
  size_t v23; // rdi
  __int64 v24; // r12
  char *v25; // r14
  char *i; // r15
  void (__fastcall *v27)(__int64, _QWORD, _QWORD); // rdi
  _QWORD *v28; // rax
  __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  __int64 v35; // [rsp+70h] [rbp-90h]
  __int64 v36; // [rsp+78h] [rbp-88h] BYREF
  __int64 v37; // [rsp+80h] [rbp-80h]
  void *Src; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v39; // [rsp+90h] [rbp-70h]
  __int64 v40; // [rsp+98h] [rbp-68h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v45; // [rsp+C0h] [rbp-40h]
  _BYTE v46[24]; // [rsp+C8h] [rbp-38h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+E0h] [rbp-20h] BYREF
  void *retaddr; // [rsp+1D8h] [rbp+D8h]

  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a3 + 320LL))(a3, v46);
  sub_18001246C(&v36, (_QWORD *)(a1 + 272));
  sub_1800C412C((__int64)&v44);
  sub_1800D048C(v44, &v33);
  sub_180026B04(a4, &v36);
  sub_1800C5ADC(a4, &v42);
  v7 = sub_180026650(a1);
  sub_1800566F0(v36, &v34, v7);
  sub_180017600((__int64)&v40);
  v8 = sub_180026650(a1);
  sub_1800566F0(v42, &v32, v8);
  sub_180017600((__int64)&v34);
  v9 = v33;
  v10 = *(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v33 + 376LL);
  v11 = *(_QWORD *)sub_1800CF0C8(v40, &v30);
  v12 = v34;
  v32 = v34;
  v13 = (_QWORD *)sub_1800CF0C8(v34, &v31);
  v10(v9, *v13, v11);
  sub_18000E72C(&v31);
  sub_18000E72C(&v30);
  v14 = *(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)v9 + 112LL);
  v15 = (_QWORD *)sub_1800CF0C8(v12, &v30);
  v16 = v14(v9, *v15, 0LL, 1LL, 0, &Src);
  sub_18000E72C(&v30);
  if ( (v16 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v16;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  sub_18002650C(a4, &v31);
  v17 = 0LL;
  v18 = *(float *)&v31;
  if ( *(float *)&v31 >= 9.223372e18 )
  {
    v18 = *(float *)&v31 - 9.223372e18;
    if ( (float)(*(float *)&v31 - 9.223372e18) < 9.223372e18 )
      v17 = 0x8000000000000000uLL;
  }
  v19 = v17 + (unsigned int)(int)v18;
  v20 = 0LL;
  v21 = *((float *)&v31 + 1);
  if ( *((float *)&v31 + 1) >= 9.223372e18 )
  {
    v21 = *((float *)&v31 + 1) - 9.223372e18;
    if ( (float)(*((float *)&v31 + 1) - 9.223372e18) < 9.223372e18 )
      v20 = 0x8000000000000000uLL;
  }
  v22 = v20 + (unsigned int)(int)v21;
  v23 = 16 * v19;
  v24 = v39;
  v25 = (char *)Src;
  for ( i = (char *)sub_180026F80(0x8000000000000000uLL, a2, a4, (int)v22 * (int)v23); v22; --v22 )
  {
    memcpy(i, v25, v23);
    v25 += v24;
    i += v23;
  }
  *(_DWORD *)(a2 + 20) = 1;
  v27 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 120LL);
  v28 = (_QWORD *)sub_1800CF0C8(v32, &v30);
  v27(v9, *v28, 0LL);
  sub_18000E72C(&v30);
  if ( v35 )
    sub_180010530(v35);
  if ( v41 )
    sub_180010530(v41);
  if ( v43 )
    sub_180010530(v43);
  if ( v37 )
    sub_180010530(v37);
  sub_18000E72C(&v33);
  if ( v45 )
    sub_180010530(v45);
  sub_18002B8E0((__int64)v46);
  return 1;
}
