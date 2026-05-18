/*
 * XREFs of sub_1800FD950 @ 0x1800FD950
 * Callers:
 *     sub_18004E6B8 @ 0x18004E6B8 (sub_18004E6B8.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_180022F90 @ 0x180022F90 (sub_180022F90.c)
 *     sub_18009187C @ 0x18009187C (sub_18009187C.c)
 *     sub_18009BC24 @ 0x18009BC24 (sub_18009BC24.c)
 *     sub_1800FC800 @ 0x1800FC800 (sub_1800FC800.c)
 *     sub_1800FC9DC @ 0x1800FC9DC (sub_1800FC9DC.c)
 *     sub_1800FD184 @ 0x1800FD184 (sub_1800FD184.c)
 *     sub_1800FE7A0 @ 0x1800FE7A0 (sub_1800FE7A0.c)
 *     sub_1800FE9AC @ 0x1800FE9AC (sub_1800FE9AC.c)
 *     sub_1800FEA64 @ 0x1800FEA64 (sub_1800FEA64.c)
 *     sub_1800FEB1C @ 0x1800FEB1C (sub_1800FEB1C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall sub_1800FD950(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3,
        unsigned int a4,
        __int64 *a5,
        unsigned int a6,
        char a7,
        unsigned int a8,
        char a9,
        __int64 a10,
        __int64 a11,
        _QWORD *a12)
{
  __int64 v12; // rsi
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 *v18; // rcx
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  void *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rdi
  __int64 v27; // r15
  __int64 v28; // r12
  __int64 *v29; // r14
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  const char *v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int128 v36; // [rsp+50h] [rbp-78h] BYREF
  const Spectre::Framework::GeometryProcessingException *v37; // [rsp+60h] [rbp-68h] BYREF
  __int128 v38; // [rsp+68h] [rbp-60h] BYREF
  _QWORD pExceptionObject[2]; // [rsp+78h] [rbp-50h] BYREF
  char *v40; // [rsp+88h] [rbp-40h] BYREF
  __int64 v41; // [rsp+98h] [rbp-30h]

  v12 = a4;
  if ( !(unsigned __int8)sub_1800FEB1C(a4, "ComputeTangents") )
  {
    v36 = 0LL;
    a11 = 0LL;
    v16 = a10;
    v17 = *(_QWORD *)(a10 + 56);
    if ( !v17 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v17 + 16LL))(v17, &v36, &a11);
    sub_180010910((__int64)&v36);
    sub_180010910((__int64)a1);
    sub_180010910((__int64)a2);
    sub_180010910((__int64)a3);
    v18 = a5;
    goto LABEL_5;
  }
  v22 = (void *)o__aligned_malloc(16 * v12, 16LL);
  v38 = 0LL;
  v23 = sub_18001D684();
  if ( v23 )
  {
    *(_DWORD *)(v23 + 8) = 1;
    *(_DWORD *)(v23 + 12) = 1;
    *(_QWORD *)v23 = &std::_Ref_count_resource<Spectre::Utils::Math::Vector4 *,_lambda_dc718d396f0c2d0078465762313bdcf6_>::`vftable';
    *(_QWORD *)(v23 + 16) = v22;
  }
  *(_QWORD *)&v38 = v22;
  *((_QWORD *)&v38 + 1) = v23;
  if ( !v22 )
  {
    sub_180022F90(pExceptionObject);
    throw (stdext::bad_alloc *)pExceptionObject;
  }
  memset(v22, 0, 16 * v12);
  sub_18009BC24((__int64 *)&v40, (unsigned int)(2 * v12));
  v24 = sub_18009187C((__int64)v40);
  try
  {
    v25 = v24;
    v26 = v24 + 12 * v12;
    a11 = v26;
    v27 = *a1;
    v28 = *a2;
    *(_QWORD *)&v36 = *a3;
    if ( a7 )
    {
      v29 = a5;
      if ( !*a5 )
      {
        sub_1800FEA64((unsigned int)v12, a8);
        sub_1800FD184(v27, v12, v28, a8, a12, v25, v26);
        goto LABEL_44;
      }
      sub_1800FE9AC(a6, a8);
      sub_1800FC9DC(v27, v12, *a5, a6, v28, a8, a12, v25, a11);
    }
    else
    {
      sub_1800FE9AC(a6, a8);
      v29 = a5;
      sub_1800FC800(v27, v12, *a5, a6, v28, a8, a12, v25, a11);
    }
    v26 = a11;
  }
  catch ( Spectre::Utils::CancelledException )
  {
    throw;
  }
  catch ( const Spectre::Framework::GeometryProcessingException *v37 )
  {
    v33 = (char *)v37 + 16;
    if ( *((_QWORD *)v37 + 5) >= 0x10uLL )
      v33 = *(const char **)v33;
    sub_18001F2B4(&stru_1801EA648, 3, v33);
    v36 = 0LL;
    a11 = 0LL;
    v34 = *(_QWORD *)(a10 + 56);
    if ( !v34 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v34 + 16LL))(v34, &v36, &a11);
    sub_180010910((__int64)&v36);
    if ( v40 )
      sub_180010884(v40, 4 * ((v41 - (__int64)v40) >> 2));
    sub_180010910((__int64)&v38);
    sub_180010910((__int64)a1);
    sub_180010910((__int64)a2);
    sub_180010910((__int64)a3);
    result = sub_180010910((__int64)a5);
    v16 = a10;
    goto LABEL_6;
  }
  catch ( ... )
  {
    sub_18001F2B4(&stru_1801EA648, 3, "ComputeTangents threw exception");
    v36 = 0LL;
    a11 = 0LL;
    v35 = *(_QWORD *)(a10 + 56);
    if ( !v35 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v35 + 16LL))(v35, &v36, &a11);
    sub_180010910((__int64)&v36);
    if ( v40 )
      sub_180010884(v40, 4 * ((v41 - (__int64)v40) >> 2));
    sub_180010910((__int64)&v38);
    sub_180010910((__int64)a1);
    sub_180010910((__int64)a2);
    sub_180010910((__int64)a3);
    result = sub_180010910((__int64)a5);
    v16 = a10;
    v32 = *(_QWORD *)(a10 + 56);
    if ( v32 )
    {
      LOBYTE(v31) = v32 != a10;
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 32LL))(v32, v31);
LABEL_30:
      *(_QWORD *)(v16 + 56) = 0LL;
    }
    return result;
  }
LABEL_44:
  sub_1800FE7A0(v38, v12, v36, v25, v26, a9);
  a11 = 0LL;
  v16 = a10;
  v30 = *(_QWORD *)(a10 + 56);
  if ( !v30 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v30 + 16LL))(v30, &v38, &a11);
  if ( v40 )
    sub_180010884(v40, 4 * ((v41 - (__int64)v40) >> 2));
  sub_180010910((__int64)&v38);
  sub_180010910((__int64)a1);
  sub_180010910((__int64)a2);
  sub_180010910((__int64)a3);
  v18 = v29;
LABEL_5:
  result = sub_180010910((__int64)v18);
LABEL_6:
  v21 = *(_QWORD *)(v16 + 56);
  if ( !v21 )
    return result;
  LOBYTE(v20) = v21 != v16;
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 32LL))(v21, v20);
  goto LABEL_30;
}
