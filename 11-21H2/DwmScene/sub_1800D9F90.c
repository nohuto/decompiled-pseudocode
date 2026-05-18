/*
 * XREFs of sub_1800D9F90 @ 0x1800D9F90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset @ 0x18000C0CC (memset.c)
 *     memcpy @ 0x18000CA6D (memcpy.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180018704 @ 0x180018704 (sub_180018704.c)
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_180029030 @ 0x180029030 (sub_180029030.c)
 *     sub_18005E244 @ 0x18005E244 (sub_18005E244.c)
 *     sub_18005E29C @ 0x18005E29C (sub_18005E29C.c)
 *     sub_1800E6288 @ 0x1800E6288 (sub_1800E6288.c)
 *     sub_1800E77D8 @ 0x1800E77D8 (sub_1800E77D8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
char __fastcall sub_1800D9F90(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // r9
  unsigned int v13; // eax
  __int64 v14; // rbx
  void (__fastcall *v15)(__int64, _QWORD, __int64); // rsi
  __int64 v16; // rdi
  __int64 v17; // r15
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int (__fastcall *v21)(__int64, _QWORD, _QWORD, __int64, _DWORD, void **); // rdi
  _QWORD *v22; // rax
  ULONG_PTR v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rcx
  float *v26; // rax
  float v27; // xmm1_4
  float v28; // xmm2_4
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rsi
  size_t v33; // rdi
  __int64 v34; // r12
  char *v35; // r15
  char *i; // r14
  void (__fastcall *v37)(__int64, _QWORD, _QWORD); // rdi
  _QWORD *v38; // rax
  __int64 v39; // rcx
  __int64 v41; // [rsp+40h] [rbp-C0h]
  __int64 v42; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v45[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v46; // [rsp+70h] [rbp-90h] BYREF
  __int64 v47; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v48[2]; // [rsp+80h] [rbp-80h] BYREF
  void *Src; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v50; // [rsp+98h] [rbp-68h]
  _QWORD v51[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v52[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v53[2]; // [rsp+C0h] [rbp-40h] BYREF
  _Mtx_t v54[2]; // [rsp+D0h] [rbp-30h] BYREF
  _Mtx_t v55; // [rsp+E0h] [rbp-20h] BYREF
  char v56; // [rsp+E8h] [rbp-18h]
  __int64 v57; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v58; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v59[3]; // [rsp+108h] [rbp+8h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+120h] [rbp+20h] BYREF
  void *retaddr; // [rsp+218h] [rbp+118h]

  (*(void (__fastcall **)(__int64, _Mtx_t *))(*(_QWORD *)a3 + 320LL))(a3, &v55);
  v7 = *(_QWORD *)(a1 + 280);
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  sub_180018704((__int64)v54);
  sub_1800E77D8(v54[0], &v47);
  v8 = a4[18];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a4[18];
  }
  v48[0] = a4[17];
  v48[1] = v8;
  v9 = a4[20];
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v9 = a4[20];
  }
  v53[0] = a4[19];
  v10 = v53[0];
  v53[1] = v9;
  v11 = sub_180028544(a1);
  sub_18005E29C(v12, &v58, v11);
  sub_180018704((__int64)v52);
  v13 = sub_180028544(a1);
  sub_18005E29C(v10, v59, v13);
  sub_180018704((__int64)v51);
  v14 = v47;
  v15 = *(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v47 + 376LL);
  v16 = *(_QWORD *)sub_1800E6288(v52[0], &v43);
  v17 = v51[0];
  v41 = v51[0];
  v18 = (_QWORD *)sub_1800E6288(v51[0], &v42);
  v15(v14, *v18, v16);
  v19 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = *(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)v14 + 112LL);
  v22 = (_QWORD *)sub_1800E6288(v17, &v44);
  v23 = v21(v14, *v22, 0LL, 1LL, 0, &Src);
  v24 = v44;
  if ( v44 )
  {
    v44 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  if ( (v23 & 0x80000000) != 0LL )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v23;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  v25 = a4[17];
  if ( v25 )
  {
    v26 = (float *)sub_18005E244(v25, &v57);
  }
  else
  {
    v45[0] = 0;
    v45[1] = 0;
    v26 = (float *)v45;
  }
  v27 = *v26;
  v28 = v26[1];
  v29 = 0LL;
  if ( v27 >= 9.223372e18 )
  {
    v27 = v27 - 9.223372e18;
    if ( v27 < 9.223372e18 )
      v29 = 0x8000000000000000uLL;
  }
  v30 = v29 + (unsigned int)(int)v27;
  v31 = 0LL;
  if ( v28 >= 9.223372e18 )
  {
    v28 = v28 - 9.223372e18;
    if ( v28 < 9.223372e18 )
      v31 = 0x8000000000000000uLL;
  }
  v32 = v31 + (unsigned int)(int)v28;
  v33 = 16 * v30;
  v34 = v50;
  v35 = (char *)Src;
  for ( i = (char *)sub_180029030(0x8000000000000000uLL, a2, (__int64)a4, v32 * v33); v32; --v32 )
  {
    memcpy(i, v35, v33);
    v35 += v34;
    i += v33;
  }
  *(_DWORD *)(a2 + 20) = 1;
  v37 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 120LL);
  v38 = (_QWORD *)sub_1800E6288(v41, &v46);
  v37(v14, *v38, 0LL);
  v39 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  }
  sub_180010910((__int64)v51);
  sub_180010910((__int64)v52);
  sub_180010910((__int64)v53);
  sub_180010910((__int64)v48);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  sub_180010910((__int64)v54);
  if ( v56 )
    Mtx_unlock(v55);
  return 1;
}
