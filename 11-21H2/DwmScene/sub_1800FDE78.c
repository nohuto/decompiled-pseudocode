/*
 * XREFs of sub_1800FDE78 @ 0x1800FDE78
 * Callers:
 *     sub_18004E370 @ 0x18004E370 (sub_18004E370.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_180022F90 @ 0x180022F90 (sub_180022F90.c)
 *     sub_18009187C @ 0x18009187C (sub_18009187C.c)
 *     sub_18009BC24 @ 0x18009BC24 (sub_18009BC24.c)
 *     sub_1800FCBB0 @ 0x1800FCBB0 (sub_1800FCBB0.c)
 *     sub_1800FCDCC @ 0x1800FCDCC (sub_1800FCDCC.c)
 *     sub_1800FD2A0 @ 0x1800FD2A0 (sub_1800FD2A0.c)
 *     sub_1800FE7A0 @ 0x1800FE7A0 (sub_1800FE7A0.c)
 *     sub_1800FE9AC @ 0x1800FE9AC (sub_1800FE9AC.c)
 *     sub_1800FEA64 @ 0x1800FEA64 (sub_1800FEA64.c)
 *     sub_1800FEB1C @ 0x1800FEB1C (sub_1800FEB1C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
__int64 sub_1800FDE78(
        __int64 *a1,
        __int64 *a2,
        unsigned int a3,
        __int64 *a4,
        unsigned int a5,
        char a6,
        unsigned int a7,
        char a8,
        __int64 a9,
        ...)
{
  __int64 v10; // rdi
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  void *v19; // r14
  __int64 v20; // rax
  __int64 v21; // r13
  void *v22; // r14
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 *v25; // r12
  __int64 v26; // r14
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  const char *v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int128 v33; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v34; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v35; // [rsp+70h] [rbp-98h] BYREF
  __int128 v36; // [rsp+80h] [rbp-88h] BYREF
  char *v37; // [rsp+90h] [rbp-78h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-68h]
  const Spectre::Framework::GeometryProcessingException *v39; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD pExceptionObject[2]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v41[9]; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v45; // [rsp+158h] [rbp+50h] BYREF
  va_list va; // [rsp+158h] [rbp+50h]
  _QWORD *v47; // [rsp+160h] [rbp+58h]
  va_list va1; // [rsp+168h] [rbp+60h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v45 = va_arg(va1, _QWORD);
  v47 = va_arg(va1, _QWORD *);
  v10 = a3;
  if ( !(unsigned __int8)sub_1800FEB1C(a3, "ComputeTangentsAndNormals") )
  {
    v35 = 0LL;
    v34 = 0LL;
    v45 = 0LL;
    v13 = a9;
    v14 = *(_QWORD *)(a9 + 56);
    if ( !v14 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int64 *))(*(_QWORD *)v14 + 16LL))(
      v14,
      &v34,
      &v35,
      (__int64 *)va);
    sub_180010910((__int64)&v34);
    sub_180010910((__int64)&v35);
    sub_180010910((__int64)a1);
    v15 = (__int64)a2;
    goto LABEL_5;
  }
  v19 = (void *)o__aligned_malloc(16 * v10, 16LL);
  v36 = 0LL;
  v20 = sub_18001D684();
  if ( v20 )
  {
    *(_DWORD *)(v20 + 8) = 1;
    *(_DWORD *)(v20 + 12) = 1;
    *(_QWORD *)v20 = &std::_Ref_count_resource<Spectre::Utils::Math::Vector4 *,_lambda_96ffd31a4081c2af17eae963fb5dd7cc_>::`vftable';
    *(_QWORD *)(v20 + 16) = v19;
  }
  else
  {
    v20 = 0LL;
  }
  *(_QWORD *)&v36 = v19;
  *((_QWORD *)&v36 + 1) = v20;
  if ( !v19 )
  {
    sub_180022F90(pExceptionObject);
    throw (stdext::bad_alloc *)pExceptionObject;
  }
  memset(v19, 0, 16 * v10);
  sub_18009BC24((__int64 *)&v37, (unsigned int)(2 * v10));
  v21 = sub_18009187C((__int64)v37);
  v45 = 12 * v10;
  v22 = (void *)o__aligned_malloc(12 * v10, 16LL);
  v33 = 0LL;
  v23 = sub_18001D684();
  if ( v23 )
  {
    *(_DWORD *)(v23 + 8) = 1;
    *(_DWORD *)(v23 + 12) = 1;
    *(_QWORD *)v23 = &std::_Ref_count_resource<Spectre::Utils::Math::Vector3 *,_lambda_fdb7222a856e1b31897eb021985012a7_>::`vftable';
    *(_QWORD *)(v23 + 16) = v22;
  }
  else
  {
    v23 = 0LL;
  }
  *(_QWORD *)&v33 = v22;
  *((_QWORD *)&v33 + 1) = v23;
  if ( !v22 )
  {
    sub_180022F90(v41);
    throw (stdext::bad_alloc *)v41;
  }
  memset(v22, 0, 12 * v10);
  try
  {
    v24 = *a1;
    v25 = a2;
    v26 = *a2;
    if ( a6 )
    {
      if ( !*a4 )
      {
        sub_1800FEA64((unsigned int)v10, a7);
        sub_1800FD2A0(v24, v10, v26, a7, v47, v33, v21, v21 + v45);
        goto LABEL_50;
      }
      sub_1800FE9AC(a5, a7);
      sub_1800FCDCC(v24, v10, *a4, a5, v26, a7, v47, v33, v21, v21 + v45);
    }
    else
    {
      sub_1800FE9AC(a5, a7);
      sub_1800FCBB0(v24, v10, *a4, a5, v26, a7, v47, v33, v21, v21 + v45);
    }
    v25 = a2;
  }
  catch ( Spectre::Utils::CancelledException )
  {
    throw;
  }
  catch ( const Spectre::Framework::GeometryProcessingException *v39 )
  {
    v30 = (char *)v39 + 16;
    if ( *((_QWORD *)v39 + 5) >= 0x10uLL )
      v30 = *(const char **)v30;
    sub_18001F2B4(&stru_1801EA648, 3, v30);
    v34 = 0LL;
    v35 = 0LL;
    v45 = 0LL;
    v31 = *(_QWORD *)(a9 + 56);
    if ( !v31 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int64 *))(*(_QWORD *)v31 + 16LL))(
      v31,
      &v35,
      &v34,
      (__int64 *)va);
    sub_180010910((__int64)&v35);
    sub_180010910((__int64)&v34);
    sub_180010910((__int64)&v33);
    if ( v37 )
      sub_180010884(v37, 4 * ((v38 - (__int64)v37) >> 2));
    sub_180010910((__int64)&v36);
    sub_180010910((__int64)a1);
    sub_180010910((__int64)a2);
    result = sub_180010910((__int64)a4);
    v13 = a9;
    goto LABEL_6;
  }
  catch ( ... )
  {
    sub_18001F2B4(&stru_1801EA648, 3, "ComputeTangentsAndNormals threw exception");
    v34 = 0LL;
    v35 = 0LL;
    v45 = 0LL;
    v32 = *(_QWORD *)(a9 + 56);
    if ( !v32 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int64 *))(*(_QWORD *)v32 + 16LL))(
      v32,
      &v35,
      &v34,
      (__int64 *)va);
    sub_180010910((__int64)&v35);
    sub_180010910((__int64)&v34);
    sub_180010910((__int64)&v33);
    if ( v37 )
      sub_180010884(v37, 4 * ((v38 - (__int64)v37) >> 2));
    sub_180010910((__int64)&v36);
    sub_180010910((__int64)a1);
    sub_180010910((__int64)a2);
    result = sub_180010910((__int64)a4);
    v13 = a9;
    v29 = *(_QWORD *)(a9 + 56);
    if ( v29 )
    {
      LOBYTE(v28) = v29 != a9;
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 32LL))(v29, v28);
LABEL_35:
      *(_QWORD *)(v13 + 56) = 0LL;
    }
    return result;
  }
LABEL_50:
  sub_1800FE7A0(v36, v10, v33, v21, v21 + v45, a8);
  v45 = 0LL;
  v13 = a9;
  v27 = *(_QWORD *)(a9 + 56);
  if ( !v27 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int64 *))(*(_QWORD *)v27 + 16LL))(
    v27,
    &v36,
    &v33,
    (__int64 *)va);
  sub_180010910((__int64)&v33);
  if ( v37 )
    sub_180010884(v37, 4 * ((v38 - (__int64)v37) >> 2));
  sub_180010910((__int64)&v36);
  sub_180010910((__int64)a1);
  v15 = (__int64)v25;
LABEL_5:
  sub_180010910(v15);
  result = sub_180010910((__int64)a4);
LABEL_6:
  v18 = *(_QWORD *)(v13 + 56);
  if ( !v18 )
    return result;
  LOBYTE(v17) = v18 != v13;
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 32LL))(v18, v17);
  goto LABEL_35;
}
