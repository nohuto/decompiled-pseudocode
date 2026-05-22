/*
 * XREFs of ??$_Emplace_reallocate@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x18001BF98
 * Callers:
 *     ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_ActivatableEntityPrincipal_Stub@2345@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAVBamoActivatableEntityPrincipal@@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IPEAVBamoActivatableEntityPrincipal@@@Z @ 0x18001BD10 (-InsertWorker@-$ListPrincipalSimpleCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamo.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180096C5C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800981B4 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x1800A402C (--$_Uninitialized_move@PEAV-$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::vector<wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>>(
        __int64 **a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rax
  char *v14; // rsi
  _QWORD *v15; // r15
  __int64 v16; // rcx
  __int64 *v17; // r8
  __int64 *v18; // rcx
  _QWORD *v19; // rdx
  __int64 v20; // rax
  __int64 *v21; // rdi
  __int64 *v22; // r14
  _QWORD *v23; // rcx
  unsigned __int64 v24; // rdx
  void *v26; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp+10h] BYREF
  __int64 v28; // [rsp+88h] [rbp+20h]

  v6 = a2 - *a1;
  v7 = a1[1] - *a1;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v7 + 1;
  v28 = v7 + 1;
  v9 = a1[2] - *a1;
  if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = 0x1FFFFFFFFFFFFFFFLL;
    v27 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else
  {
    v10 = (v9 >> 1) + v9;
    v11 = v8;
    if ( v10 >= v8 )
      v11 = v10;
    v27 = v11;
    if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
  }
  v12 = 8 * v11;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(8 * v11);
  v14 = (char *)v13;
  v15 = (_QWORD *)(v13 + 8 * v6);
  v16 = *a3;
  *a3 = 0LL;
  *v15 = v16;
  v26 = v15;
  v17 = a1[1];
  v18 = *a1;
  if ( a2 == v17 )
  {
    v19 = (_QWORD *)v13;
    while ( v18 != v17 )
    {
      v20 = *v18;
      *v18 = 0LL;
      *v19++ = v20;
      ++v18;
    }
  }
  else
  {
    std::_Uninitialized_move<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>>(
      v18,
      a2,
      v13);
    v26 = v14;
    std::_Uninitialized_move<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>>(
      a2,
      a1[1],
      v15 + 1);
  }
  v21 = *a1;
  if ( *a1 )
  {
    v22 = a1[1];
    while ( v21 != v22 )
    {
      if ( *v21 )
        (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)*v21 + 8LL))(*v21, v19);
      ++v21;
    }
    v23 = *a1;
    v24 = ((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFF8uLL;
    v27 = v24;
    v26 = v23;
    if ( v24 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v26, &v27);
      v23 = v26;
      v24 = v27;
    }
    operator delete(v23, v24);
  }
  *a1 = (__int64 *)v14;
  a1[1] = (__int64 *)&v14[8 * v28];
  a1[2] = (__int64 *)&v14[v12];
  return v15;
}
