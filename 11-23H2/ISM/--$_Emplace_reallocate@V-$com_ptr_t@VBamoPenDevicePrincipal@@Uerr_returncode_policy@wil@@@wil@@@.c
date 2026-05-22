/*
 * XREFs of ??$_Emplace_reallocate@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800B9730
 * Callers:
 *     ??$emplace_back@V?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_T$$QEAV?$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800B9880 (--$emplace_back@V-$com_ptr_t@VBamoPrincipal@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@@-.c)
 *     ??$emplace@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@1@$$QEAV?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801A47C4 (--$emplace@V-$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@-$vector@V-$.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18003E448 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x1800A402C (--$_Uninitialized_move@PEAV-$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x1800B991C (-_Change_array@-$vector@V-$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@.c)
 */

_QWORD *__fastcall std::vector<wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<BamoPenDevicePrincipal,wil::err_returncode_policy>>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  _QWORD *v14; // r14
  __int64 v15; // rcx
  __int64 *v16; // rdx
  _QWORD *v17; // r8
  __int64 *v18; // rcx
  _QWORD *result; // rax
  _QWORD *v20; // [rsp+20h] [rbp-48h]
  void *v21; // [rsp+20h] [rbp-48h]
  __int64 v22; // [rsp+70h] [rbp+8h]

  v5 = a2 - *a1;
  v6 = a1[1] - *a1;
  v7 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = a1[2] - *a1;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v7);
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = v12;
  v20 = v12;
  v14 = &v12[v5];
  try
  {
    v15 = *a3;
    *a3 = 0LL;
    *v14 = v15;
    v22 = (__int64)v14;
    v16 = a1[1];
    v17 = v12;
    v18 = *a1;
    if ( a2 != v16 )
    {
      std::_Uninitialized_move<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>>(
        v18,
        a2,
        v12);
      v22 = (__int64)v13;
      v17 = v14 + 1;
      v16 = a1[1];
      v18 = a2;
    }
    std::_Uninitialized_move<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>>(
      v18,
      v16,
      v17);
    std::vector<wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>>::_Change_array(
      a1,
      v13,
      v8,
      v7,
      v20);
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>>(
      v22,
      (__int64)(v14 + 1));
    std::_Deallocate<16,0>(v21, 8 * v7);
    throw;
  }
  return result;
}
