/*
 * XREFs of sub_1800E2990 @ 0x1800E2990
 * Callers:
 *     sub_180048240 @ 0x180048240 (sub_180048240.c)
 * Callees:
 *     memset @ 0x18000C0BC (memset.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_180085D94 @ 0x180085D94 (sub_180085D94.c)
 *     sub_18008CDA8 @ 0x18008CDA8 (sub_18008CDA8.c)
 *     sub_1800E16A4 @ 0x1800E16A4 (sub_1800E16A4.c)
 *     sub_1800E18C0 @ 0x1800E18C0 (sub_1800E18C0.c)
 *     sub_1800E1B28 @ 0x1800E1B28 (sub_1800E1B28.c)
 *     sub_1800E1B98 @ 0x1800E1B98 (sub_1800E1B98.c)
 *     sub_1800E1E10 @ 0x1800E1E10 (sub_1800E1E10.c)
 *     sub_1800E3290 @ 0x1800E3290 (sub_1800E3290.c)
 *     sub_1800E349C @ 0x1800E349C (sub_1800E349C.c)
 *     sub_1800E3554 @ 0x1800E3554 (sub_1800E3554.c)
 *     sub_1800E360C @ 0x1800E360C (sub_1800E360C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
__int64 sub_1800E2990(
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
  __int64 result; // rax
  __int64 v15; // rdx
  void *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  void *v21; // r15
  _DWORD *v22; // rax
  void *v23; // r15
  _DWORD *v24; // rax
  __int64 v25; // rsi
  __int64 v26; // r15
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  const char *v35; // r8
  size_t Size[2]; // [rsp+50h] [rbp-E8h] BYREF
  void *v37[2]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v38; // [rsp+70h] [rbp-C8h]
  size_t v39[2]; // [rsp+78h] [rbp-C0h] BYREF
  char v40; // [rsp+88h] [rbp-B0h]
  void *v41[2]; // [rsp+90h] [rbp-A8h] BYREF
  _QWORD v42[3]; // [rsp+A0h] [rbp-98h] BYREF
  _QWORD pExceptionObject[2]; // [rsp+B8h] [rbp-80h] BYREF
  _QWORD v44[2]; // [rsp+C8h] [rbp-70h] BYREF
  _QWORD v45[2]; // [rsp+D8h] [rbp-60h] BYREF
  char v46; // [rsp+E8h] [rbp-50h]
  const Spectre::Framework::GeometryProcessingException *v47; // [rsp+F0h] [rbp-48h] BYREF
  __int64 v51; // [rsp+188h] [rbp+50h] BYREF
  va_list va; // [rsp+188h] [rbp+50h]
  _QWORD *v53; // [rsp+190h] [rbp+58h]
  va_list va1; // [rsp+198h] [rbp+60h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v51 = va_arg(va1, _QWORD);
  v53 = va_arg(va1, _QWORD *);
  v10 = a3;
  if ( (unsigned __int8)sub_1800E360C(a3, "ComputeTangentsAndNormals") )
  {
    Size[0] = 16 * v10;
    v21 = (void *)o__aligned_malloc(16 * v10, 16LL);
    *(_OWORD *)v41 = 0LL;
    LOBYTE(v51) = 0;
    v39[0] = (size_t)v21;
    va_copy((va_list)&v39[1], va);
    v22 = (_DWORD *)sub_18001C190();
    if ( v22 )
    {
      v22[2] = 1;
      v22[3] = 1;
      *(_QWORD *)v22 = &std::_Ref_count_resource<Spectre::Utils::Math::Vector4 *,_lambda_96ffd31a4081c2af17eae963fb5dd7cc_>::`vftable';
      *((_QWORD *)v22 + 2) = v21;
    }
    else
    {
      v22 = 0LL;
    }
    v41[0] = v21;
    v41[1] = v22;
    v40 = 0;
    sub_1800E1B28((__int64)v39);
    if ( !v41[0] )
    {
      pExceptionObject[1] = "bad allocation";
      pExceptionObject[0] = &stdext::bad_alloc::`vftable';
      throw (stdext::bad_alloc *)pExceptionObject;
    }
    memset(v41[0], 0, Size[0]);
    sub_18008CDA8(v42, (unsigned int)(2 * v10));
    Size[0] = v42[0];
    v39[0] = 12 * v10;
    v38 = 12 * v10 + v42[0];
    v23 = (void *)o__aligned_malloc(12 * v10, 16LL);
    *(_OWORD *)v37 = 0LL;
    LOBYTE(v51) = 0;
    v45[0] = v23;
    va_copy((va_list)&v45[1], va);
    v24 = (_DWORD *)sub_18001C190();
    if ( v24 )
    {
      v24[2] = 1;
      v24[3] = 1;
      *(_QWORD *)v24 = &std::_Ref_count_resource<Spectre::Utils::Math::Vector3 *,_lambda_fdb7222a856e1b31897eb021985012a7_>::`vftable';
      *((_QWORD *)v24 + 2) = v23;
    }
    else
    {
      v24 = 0LL;
    }
    v37[0] = v23;
    v37[1] = v24;
    v46 = 0;
    sub_1800E1B28((__int64)v45);
    if ( !v23 )
    {
      v44[1] = "bad allocation";
      v44[0] = &stdext::bad_alloc::`vftable';
      throw (stdext::bad_alloc *)v44;
    }
    memset(v23, 0, v39[0]);
    v25 = *a1;
    v26 = *a2;
    try
    {
      if ( a6 )
      {
        if ( *a4 )
        {
          sub_1800E349C(a5, a7);
          sub_1800E18C0(v25, v10, *a4, a5, v26, a7, v53, (__int64)v37[0], Size[0], v38);
        }
        else
        {
          sub_1800E3554((unsigned int)v10, a7);
          sub_1800E1E10(v25, v10, v26, a7, v53, (__int64)v37[0], Size[0], v38);
        }
      }
      else
      {
        sub_1800E349C(a5, a7);
        sub_1800E16A4(v25, v10, *a4, a5, v26, a7, v53, (__int64)v37[0], Size[0], v38);
      }
    }
    catch ( Spectre::Utils::CancelledException )
    {
      throw;
    }
    catch ( const Spectre::Framework::GeometryProcessingException *v47 )
    {
      v35 = (char *)v47 + 16;
      if ( *((_QWORD *)v47 + 5) >= 0x10uLL )
        v35 = *(const char **)v35;
      sub_18001DB68(&stru_1801C8648, 3, v35);
      *(_OWORD *)Size = 0LL;
      *(_OWORD *)v39 = 0LL;
      sub_1800E1B98(a9, (__int64)v39, (__int64)Size);
      if ( v39[1] )
        sub_180010530(v39[1]);
      if ( Size[1] )
        sub_180010530(Size[1]);
      if ( v37[1] )
        sub_180010530((__int64)v37[1]);
      sub_180085D94((__int64)v42);
      if ( v41[1] )
        sub_180010530((__int64)v41[1]);
      v27 = a1[1];
      if ( v27 )
        sub_180010530(v27);
      v28 = a2[1];
      if ( v28 )
        sub_180010530(v28);
      result = (__int64)a4;
      v29 = a4[1];
      if ( v29 )
        result = sub_180010530(v29);
      v13 = a9;
      goto LABEL_13;
    }
    catch ( ... )
    {
      sub_18001DB68(&stru_1801C8648, 3, "ComputeTangentsAndNormals threw exception");
      *(_OWORD *)Size = 0LL;
      *(_OWORD *)v39 = 0LL;
      sub_1800E1B98(a9, (__int64)v39, (__int64)Size);
      if ( v39[1] )
        sub_180010530(v39[1]);
      if ( Size[1] )
        sub_180010530(Size[1]);
      if ( v37[1] )
        sub_180010530((__int64)v37[1]);
      sub_180085D94((__int64)v42);
      if ( v41[1] )
        sub_180010530((__int64)v41[1]);
      v31 = a1[1];
      if ( v31 )
        sub_180010530(v31);
      v32 = a2[1];
      if ( v32 )
        sub_180010530(v32);
      result = (__int64)a4;
      v33 = a4[1];
      if ( v33 )
        result = sub_180010530(v33);
      v13 = a9;
      v34 = *(_QWORD *)(a9 + 56);
      if ( v34 )
      {
        LOBYTE(v30) = v34 != a9;
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 32LL))(v34, v30);
LABEL_57:
        *(_QWORD *)(v13 + 56) = 0LL;
      }
      return result;
    }
    sub_1800E3290(v41[0], v10, v37[0], Size[0], v38, a8);
    v13 = a9;
    sub_1800E1B98(a9, (__int64)v41, (__int64)v37);
    if ( v37[1] )
      sub_180010530((__int64)v37[1]);
    result = sub_180085D94((__int64)v42);
    v16 = v41[1];
  }
  else
  {
    *(_OWORD *)Size = 0LL;
    *(_OWORD *)v39 = 0LL;
    v13 = a9;
    result = sub_1800E1B98(a9, (__int64)v39, (__int64)Size);
    if ( v39[1] )
      result = sub_180010530(v39[1]);
    v16 = (void *)Size[1];
  }
  if ( v16 )
    result = sub_180010530((__int64)v16);
  v17 = a1[1];
  if ( v17 )
    result = sub_180010530(v17);
  v18 = a2[1];
  if ( v18 )
    result = sub_180010530(v18);
  v19 = a4[1];
  if ( v19 )
    result = sub_180010530(v19);
LABEL_13:
  v20 = *(_QWORD *)(v13 + 56);
  if ( !v20 )
    return result;
  LOBYTE(v15) = v20 != v13;
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 32LL))(v20, v15);
  goto LABEL_57;
}
