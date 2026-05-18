/*
 * XREFs of sub_1800E20F0 @ 0x1800E20F0
 * Callers:
 *     sub_18004806C @ 0x18004806C (sub_18004806C.c)
 * Callees:
 *     memset @ 0x18000C0BC (memset.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18003CFA0 @ 0x18003CFA0 (sub_18003CFA0.c)
 *     sub_1800E0FB4 @ 0x1800E0FB4 (sub_1800E0FB4.c)
 *     sub_1800E1154 @ 0x1800E1154 (sub_1800E1154.c)
 *     sub_1800E1B28 @ 0x1800E1B28 (sub_1800E1B28.c)
 *     sub_1800E1B50 @ 0x1800E1B50 (sub_1800E1B50.c)
 *     sub_1800E1C18 @ 0x1800E1C18 (sub_1800E1C18.c)
 *     sub_1800E349C @ 0x1800E349C (sub_1800E349C.c)
 *     sub_1800E3554 @ 0x1800E3554 (sub_1800E3554.c)
 *     sub_1800E360C @ 0x1800E360C (sub_1800E360C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800E20F0(
        __int64 *a1,
        unsigned int a2,
        __int64 *a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        __int64 a7,
        char a8,
        _QWORD *a9)
{
  __int64 v11; // rdi
  __int64 v13; // rdi
  __int64 result; // rax
  __int64 v15; // rdx
  void *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  void *v20; // r15
  _DWORD *v21; // rax
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  const char *v32; // r8
  __int128 v33; // [rsp+40h] [rbp-78h] BYREF
  const Spectre::Framework::GeometryProcessingException *v34; // [rsp+50h] [rbp-68h] BYREF
  void *v35[2]; // [rsp+58h] [rbp-60h] BYREF
  _QWORD pExceptionObject[2]; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v37[2]; // [rsp+78h] [rbp-40h] BYREF
  char v38; // [rsp+88h] [rbp-30h]

  v11 = a2;
  if ( (unsigned __int8)sub_1800E360C(a2, "ComputeNormals") )
  {
    *(_QWORD *)&v33 = v11;
    v20 = (void *)o__aligned_malloc(12 * v11, 16LL);
    *(_OWORD *)v35 = 0LL;
    a8 = 0;
    v37[0] = v20;
    v37[1] = &a8;
    v21 = (_DWORD *)sub_18001C190();
    if ( v21 )
    {
      v21[2] = 1;
      v21[3] = 1;
      *(_QWORD *)v21 = &std::_Ref_count_resource<Spectre::Utils::Math::Vector3 *,_lambda_eee906239c744569acc5ea6e5be29b09_>::`vftable';
      *((_QWORD *)v21 + 2) = v20;
    }
    v35[0] = v20;
    v35[1] = v21;
    v38 = 0;
    sub_1800E1B28((__int64)v37);
    if ( !v20 )
    {
      pExceptionObject[1] = "bad allocation";
      pExceptionObject[0] = &stdext::bad_alloc::`vftable';
      throw (stdext::bad_alloc *)pExceptionObject;
    }
    memset(v20, 0, 12 * v11);
    try
    {
      v22 = *a1;
      if ( a5 )
      {
        if ( *a3 )
        {
          sub_1800E349C(a4, a6);
          sub_1800E1154(v22, v11, *a3, a4, a6, a9, (__int64)v35[0]);
        }
        else
        {
          sub_1800E3554((unsigned int)v11, a6);
          sub_1800E1C18(v22, v11, a6, a9, (__int64)v35[0]);
        }
      }
      else
      {
        sub_1800E349C(a4, a6);
        sub_1800E0FB4(v22, v11, *a3, a4, a6, a9, (__int64)v35[0]);
      }
    }
    catch ( Spectre::Utils::CancelledException )
    {
      throw;
    }
    catch ( const Spectre::Framework::GeometryProcessingException *v34 )
    {
      v32 = (char *)v34 + 16;
      if ( *((_QWORD *)v34 + 5) >= 0x10uLL )
        v32 = *(const char **)v32;
      sub_18001DB68(&stru_1801C8648, 3, v32);
      v33 = 0LL;
      sub_1800E1B50(a7, (__int64)&v33);
      if ( *((_QWORD *)&v33 + 1) )
        sub_180010530(*((__int64 *)&v33 + 1));
      if ( v35[1] )
        sub_180010530((__int64)v35[1]);
      v26 = a1[1];
      if ( v26 )
        sub_180010530(v26);
      result = (__int64)a3;
      v27 = a3[1];
      if ( v27 )
        result = sub_180010530(v27);
      v13 = a7;
      goto LABEL_9;
    }
    catch ( ... )
    {
      sub_18001DB68(&stru_1801C8648, 3, "ComputeNormals threw unexpected exception");
      v33 = 0LL;
      sub_1800E1B50(a7, (__int64)&v33);
      if ( *((_QWORD *)&v33 + 1) )
        sub_180010530(*((__int64 *)&v33 + 1));
      if ( v35[1] )
        sub_180010530((__int64)v35[1]);
      v29 = a1[1];
      if ( v29 )
        sub_180010530(v29);
      result = (__int64)a3;
      v30 = a3[1];
      if ( v30 )
        result = sub_180010530(v30);
      v13 = a7;
      v31 = *(_QWORD *)(a7 + 56);
      if ( v31 )
      {
        LOBYTE(v28) = v31 != a7;
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 32LL))(v31, v28);
LABEL_40:
        *(_QWORD *)(v13 + 56) = 0LL;
      }
      return result;
    }
    if ( (_DWORD)v11 )
    {
      v23 = 0LL;
      do
      {
        sub_18003CFA0((unsigned __int64 *)((char *)v35[0] + v23));
        v23 = v24 + 12;
      }
      while ( v25 != 1 );
    }
    v13 = a7;
    result = sub_1800E1B50(a7, (__int64)v35);
    v16 = v35[1];
  }
  else
  {
    v33 = 0LL;
    v13 = a7;
    result = sub_1800E1B50(a7, (__int64)&v33);
    v16 = (void *)*((_QWORD *)&v33 + 1);
  }
  if ( v16 )
    result = sub_180010530((__int64)v16);
  v17 = a1[1];
  if ( v17 )
    result = sub_180010530(v17);
  v18 = a3[1];
  if ( v18 )
    result = sub_180010530(v18);
LABEL_9:
  v19 = *(_QWORD *)(v13 + 56);
  if ( !v19 )
    return result;
  LOBYTE(v15) = v19 != v13;
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 32LL))(v19, v15);
  goto LABEL_40;
}
