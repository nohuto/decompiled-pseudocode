/*
 * XREFs of sub_1800D9B40 @ 0x1800D9B40
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
 *     sub_18002C3FC @ 0x18002C3FC (sub_18002C3FC.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_18005E244 @ 0x18005E244 (sub_18005E244.c)
 *     sub_18005E29C @ 0x18005E29C (sub_18005E29C.c)
 *     sub_1800E6288 @ 0x1800E6288 (sub_1800E6288.c)
 *     sub_1800E77D8 @ 0x1800E77D8 (sub_1800E77D8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
char __fastcall sub_1800D9B40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v10; // r9
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned int v13; // eax
  __int64 v14; // r9
  __int64 v15; // rdi
  void (__fastcall *v16)(__int64, _QWORD, __int64); // rsi
  __int64 v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rbx
  int v22; // eax
  ULONG_PTR v23; // rsi
  __int64 v24; // r8
  __int64 v25; // rcx
  float *v26; // rax
  float v27; // xmm1_4
  float v28; // xmm2_4
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rsi
  size_t v33; // r12
  __int64 v34; // r13
  char *v35; // r14
  char *i; // r15
  __int64 v38; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v40[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v42[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v43[4]; // [rsp+70h] [rbp-90h] BYREF
  void *v44[2]; // [rsp+90h] [rbp-70h] BYREF
  void *Src; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v46; // [rsp+A8h] [rbp-58h]
  _QWORD v47[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v48[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v49[2]; // [rsp+D0h] [rbp-30h] BYREF
  _Mtx_t v50[2]; // [rsp+E0h] [rbp-20h] BYREF
  _Mtx_t v51; // [rsp+F0h] [rbp-10h] BYREF
  char v52; // [rsp+F8h] [rbp-8h]
  __int64 v53; // [rsp+100h] [rbp+0h] BYREF
  char v54; // [rsp+108h] [rbp+8h]
  __int64 v55; // [rsp+110h] [rbp+10h] BYREF
  __int64 v56; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v57[3]; // [rsp+128h] [rbp+28h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+140h] [rbp+40h] BYREF
  void *retaddr; // [rsp+228h] [rbp+128h]

  sub_18002C3FC(a1 + 24, (__int64)&v53);
  (*(void (__fastcall **)(__int64, _Mtx_t *))(*(_QWORD *)a3 + 320LL))(a3, &v51);
  v6 = *(_QWORD *)(a1 + 280);
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v6 = *(_QWORD *)(a1 + 280);
  }
  v43[2] = *(_QWORD *)(a1 + 272);
  v43[3] = v6;
  sub_180018704((__int64)v50);
  sub_1800E77D8(v50[0], v43);
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a3 + 32LL))(a3, v42);
  v7 = v42[0];
  v8 = *(_QWORD *)(v42[0] + 144LL);
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = *(_QWORD *)(v7 + 144);
  }
  v49[0] = *(_QWORD *)(v7 + 136);
  v49[1] = v8;
  v9 = sub_180028544(a1);
  sub_18005E29C(v10, &v56, v9);
  sub_180018704((__int64)v48);
  v11 = v42[0];
  v12 = *(_QWORD *)(v42[0] + 160LL);
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v12 = *(_QWORD *)(v11 + 160);
  }
  v47[0] = *(_QWORD *)(v11 + 152);
  v47[1] = v12;
  v13 = sub_180028544(a1);
  sub_18005E29C(v14, v57, v13);
  sub_180018704((__int64)v44);
  v15 = v43[0];
  v16 = *(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v43[0] + 376LL);
  v17 = *(_QWORD *)sub_1800E6288(v48[0], &v39);
  v18 = (_QWORD *)sub_1800E6288(v44[0], &v38);
  v16(v15, *v18, v17);
  v19 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  sub_1800E6288(v44[0], &v41);
  v21 = v41;
  v22 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, void **))(*(_QWORD *)v15 + 112LL))(
          v15,
          v41,
          0LL,
          1LL,
          0,
          &Src);
  v23 = v22;
  if ( v22 < 0 )
  {
    memset(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v23;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  v24 = v42[0];
  v25 = *(_QWORD *)(v42[0] + 136LL);
  if ( v25 )
  {
    v26 = (float *)sub_18005E244(v25, &v55);
  }
  else
  {
    v40[0] = 0;
    v40[1] = 0;
    v26 = (float *)v40;
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
  v33 = 4 * v30;
  v34 = v46;
  v35 = (char *)Src;
  for ( i = (char *)sub_180029030(0x8000000000000000uLL, a2, v24, v32 * v33); v32; --v32 )
  {
    memcpy(i, v35, v33);
    v35 += v34;
    i += v33;
  }
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v15 + 120LL))(v15, v21, 0LL);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  sub_180010910((__int64)v44);
  sub_180010910((__int64)v47);
  sub_180010910((__int64)v48);
  sub_180010910((__int64)v49);
  sub_180010910((__int64)v42);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  sub_180010910((__int64)v50);
  if ( v52 )
    Mtx_unlock(v51);
  if ( v54 )
    j_LanguageEnumProc(v53);
  return 1;
}
