/*
 * XREFs of ??$_Emplace_reallocate@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180012788
 * Callers:
 *     ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_ActivatableEntityPrincipal_Stub@2345@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAVBamoActivatableEntityPrincipal@@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IPEAVBamoActivatableEntityPrincipal@@@Z @ 0x180012680 (-InsertWorker@-$ListPrincipalSimpleCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamo.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18007FD24 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800804A0 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180080E10 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18008D37C (--$_Uninitialized_move@PEAV-$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::vector<wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>>(
        __int64 **a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // r15
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  __int64 v10; // r14
  char *v11; // rdi
  char *v12; // r12
  __int64 v13; // rax
  __int64 *v14; // r8
  __int64 *v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // rax
  char *v18; // rbx
  __int64 *v19; // r15
  unsigned __int64 v20; // rdx
  __int64 v22; // [rsp+20h] [rbp-48h]
  unsigned __int64 v23; // [rsp+70h] [rbp+8h] BYREF
  void *v24; // [rsp+78h] [rbp+10h] BYREF
  _QWORD *v25; // [rsp+80h] [rbp+18h]
  char *v26; // [rsp+88h] [rbp+20h]

  v25 = a3;
  v5 = a2 - *a1;
  v6 = a1[1] - *a1;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v22 = v6 + 1;
  v7 = a1[2] - *a1;
  v8 = v7 >> 1;
  if ( v7 > 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
  {
    v23 = 0x1FFFFFFFFFFFFFFFLL;
    v10 = -8LL;
LABEL_27:
    v11 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v10);
    a3 = v25;
    goto LABEL_10;
  }
  v9 = v6 + 1;
  if ( v8 + v7 >= v6 + 1 )
    v9 = v8 + v7;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v10 = 8 * v9;
  v23 = v9;
  if ( 8 * v9 >= 0x1000 )
    goto LABEL_27;
  if ( v10 )
  {
    v11 = (char *)operator new(8 * v9);
    a3 = v25;
  }
  else
  {
    v11 = 0LL;
  }
  v23 = v9;
LABEL_10:
  v24 = v11;
  v12 = &v11[8 * v5];
  v13 = *a3;
  *a3 = 0LL;
  *(_QWORD *)v12 = v13;
  v26 = v12;
  v14 = a1[1];
  v15 = *a1;
  if ( a2 == v14 )
  {
    v16 = v11;
    while ( v15 != v14 )
    {
      v17 = *v15;
      *v15 = 0LL;
      *v16++ = v17;
      ++v15;
    }
  }
  else
  {
    std::_Uninitialized_move<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>>(
      v15,
      a2,
      v11);
    v26 = v11;
    std::_Uninitialized_move<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>>(
      a2,
      a1[1],
      v12 + 8);
  }
  v18 = (char *)*a1;
  if ( *a1 )
  {
    v19 = a1[1];
    if ( v18 != (char *)v19 )
    {
      do
      {
        if ( *(_QWORD *)v18 )
          (*(void (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)v18 + 8LL))(*(_QWORD *)v18, v16);
        v18 += 8;
      }
      while ( v18 != (char *)v19 );
      v18 = (char *)*a1;
    }
    v20 = ((char *)a1[2] - v18) & 0xFFFFFFFFFFFFFFF8uLL;
    v23 = v20;
    v24 = v18;
    if ( v20 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v24, &v23);
      v20 = v23;
      v18 = (char *)v24;
    }
    operator delete(v18, v20);
  }
  *a1 = (__int64 *)v11;
  a1[1] = (__int64 *)&v11[8 * v22];
  a1[2] = (__int64 *)&v11[v10];
  return v12;
}
