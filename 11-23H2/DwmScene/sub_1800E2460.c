/*
 * XREFs of sub_1800E2460 @ 0x1800E2460
 * Callers:
 *     sub_180048594 @ 0x180048594 (sub_180048594.c)
 * Callees:
 *     memset @ 0x18000C0BC (memset.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_180085D94 @ 0x180085D94 (sub_180085D94.c)
 *     sub_18008CDA8 @ 0x18008CDA8 (sub_18008CDA8.c)
 *     sub_1800E12F4 @ 0x1800E12F4 (sub_1800E12F4.c)
 *     sub_1800E14D0 @ 0x1800E14D0 (sub_1800E14D0.c)
 *     sub_1800E1B28 @ 0x1800E1B28 (sub_1800E1B28.c)
 *     sub_1800E1B50 @ 0x1800E1B50 (sub_1800E1B50.c)
 *     sub_1800E1CF4 @ 0x1800E1CF4 (sub_1800E1CF4.c)
 *     sub_1800E3290 @ 0x1800E3290 (sub_1800E3290.c)
 *     sub_1800E349C @ 0x1800E349C (sub_1800E349C.c)
 *     sub_1800E3554 @ 0x1800E3554 (sub_1800E3554.c)
 *     sub_1800E360C @ 0x1800E360C (sub_1800E360C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 *__fastcall sub_1800E2460(
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
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 *result; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  void *v24; // rdi
  _DWORD *v25; // rax
  __int64 v26; // rdi
  __int64 *v27; // r14
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  const char *v41; // r8
  __int64 v42; // [rsp+50h] [rbp-98h]
  __int128 v43; // [rsp+58h] [rbp-90h] BYREF
  char v44; // [rsp+68h] [rbp-80h]
  void *v45[2]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v46; // [rsp+80h] [rbp-68h]
  __int64 v47; // [rsp+88h] [rbp-60h]
  _QWORD v48[3]; // [rsp+90h] [rbp-58h] BYREF
  _QWORD pExceptionObject[2]; // [rsp+A8h] [rbp-40h] BYREF
  const Spectre::Framework::GeometryProcessingException *v50; // [rsp+B8h] [rbp-30h] BYREF

  v12 = a4;
  if ( (unsigned __int8)sub_1800E360C(a4, "ComputeTangents") )
  {
    v24 = (void *)o__aligned_malloc(16 * v12, 16LL);
    *(_OWORD *)v45 = 0LL;
    LOBYTE(a11) = 0;
    *(_QWORD *)&v43 = v24;
    *((_QWORD *)&v43 + 1) = &a11;
    v25 = (_DWORD *)sub_18001C190();
    if ( v25 )
    {
      v25[2] = 1;
      v25[3] = 1;
      *(_QWORD *)v25 = &std::_Ref_count_resource<Spectre::Utils::Math::Vector4 *,_lambda_dc718d396f0c2d0078465762313bdcf6_>::`vftable';
      *((_QWORD *)v25 + 2) = v24;
    }
    v45[0] = v24;
    v45[1] = v25;
    v44 = 0;
    sub_1800E1B28((__int64)&v43);
    if ( !v45[0] )
    {
      pExceptionObject[1] = "bad allocation";
      pExceptionObject[0] = &stdext::bad_alloc::`vftable';
      throw (stdext::bad_alloc *)pExceptionObject;
    }
    memset(v45[0], 0, 16 * v12);
    sub_18008CDA8(v48, (unsigned int)(2 * v12));
    v42 = v48[0];
    a11 = v48[0] + 12 * v12;
    v26 = *a1;
    v47 = *a1;
    v46 = *a2;
    *(_QWORD *)&v43 = *a3;
    if ( a7 )
    {
      v27 = a5;
      if ( *a5 )
      {
        sub_1800E349C(a6, a8);
        sub_1800E14D0(v47, v12, *a5, a6, v46, a8, a12, v42, a11);
      }
      else
      {
        sub_1800E3554((unsigned int)v12, a8);
        sub_1800E1CF4(v26, v12, v46, a8, a12, v42, a11);
      }
    }
    else
    {
      try
      {
        sub_1800E349C(a6, a8);
        v27 = a5;
        sub_1800E12F4(v47, v12, *a5, a6, v46, a8, a12, v42, a11);
      }
      catch ( Spectre::Utils::CancelledException )
      {
        throw;
      }
      catch ( const Spectre::Framework::GeometryProcessingException *v50 )
      {
        v41 = (char *)v50 + 16;
        if ( *((_QWORD *)v50 + 5) >= 0x10uLL )
          v41 = *(const char **)v41;
        sub_18001DB68(&stru_1801C8648, 3, v41);
        v43 = 0LL;
        sub_1800E1B50(a10, (__int64)&v43);
        if ( *((_QWORD *)&v43 + 1) )
          sub_180010530(*((__int64 *)&v43 + 1));
        sub_180085D94((__int64)v48);
        if ( v45[1] )
          sub_180010530((__int64)v45[1]);
        v31 = a1[1];
        if ( v31 )
          sub_180010530(v31);
        v32 = a2[1];
        if ( v32 )
          sub_180010530(v32);
        v33 = a3[1];
        if ( v33 )
          sub_180010530(v33);
        result = a5;
        v34 = a5[1];
        if ( v34 )
          result = (__int64 *)sub_180010530(v34);
        v16 = a10;
        goto LABEL_13;
      }
      catch ( ... )
      {
        sub_18001DB68(&stru_1801C8648, 3, "ComputeTangents threw exception");
        v43 = 0LL;
        sub_1800E1B50(a10, (__int64)&v43);
        if ( *((_QWORD *)&v43 + 1) )
          sub_180010530(*((__int64 *)&v43 + 1));
        sub_180085D94((__int64)v48);
        if ( v45[1] )
          sub_180010530((__int64)v45[1]);
        v36 = a1[1];
        if ( v36 )
          sub_180010530(v36);
        v37 = a2[1];
        if ( v37 )
          sub_180010530(v37);
        v38 = a3[1];
        if ( v38 )
          sub_180010530(v38);
        result = a5;
        v39 = a5[1];
        if ( v39 )
          result = (__int64 *)sub_180010530(v39);
        v16 = a10;
        v40 = *(_QWORD *)(a10 + 56);
        if ( v40 )
        {
          LOBYTE(v35) = v40 != a10;
          result = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 32LL))(v40, v35);
LABEL_56:
          *(_QWORD *)(v16 + 56) = 0LL;
        }
        return result;
      }
    }
    sub_1800E3290(v45[0], v12, v43, v42, a11, a9);
    v16 = a10;
    sub_1800E1B50(a10, (__int64)v45);
    result = (__int64 *)sub_180085D94((__int64)v48);
    if ( v45[1] )
      result = (__int64 *)sub_180010530((__int64)v45[1]);
    v28 = a1[1];
    if ( v28 )
      result = (__int64 *)sub_180010530(v28);
    v29 = a2[1];
    if ( v29 )
      result = (__int64 *)sub_180010530(v29);
    v30 = a3[1];
    if ( v30 )
      result = (__int64 *)sub_180010530(v30);
    v22 = v27[1];
  }
  else
  {
    v43 = 0LL;
    v16 = a10;
    sub_1800E1B50(a10, (__int64)&v43);
    if ( *((_QWORD *)&v43 + 1) )
      sub_180010530(*((__int64 *)&v43 + 1));
    v18 = a1[1];
    if ( v18 )
      sub_180010530(v18);
    v19 = a2[1];
    if ( v19 )
      sub_180010530(v19);
    v20 = a3[1];
    if ( v20 )
      sub_180010530(v20);
    result = a5;
    v22 = a5[1];
  }
  if ( v22 )
    result = (__int64 *)sub_180010530(v22);
LABEL_13:
  v23 = *(_QWORD *)(v16 + 56);
  if ( !v23 )
    return result;
  LOBYTE(v17) = v23 != v16;
  result = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 32LL))(v23, v17);
  goto LABEL_56;
}
