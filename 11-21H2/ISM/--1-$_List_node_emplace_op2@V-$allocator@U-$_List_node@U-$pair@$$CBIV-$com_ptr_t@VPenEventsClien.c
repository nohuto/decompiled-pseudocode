/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18018FCEC
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_int_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy__std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy______1___::emplace_unsigned_int_&_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy__&__::_1_::dtor$0 @ 0x180056B67 (_std--_Hash_std--_Umap_traits_unsigned_int_wil--com_ptr_t_PenEventsClientCustomProxy_wil--err_ex.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VBamoManualDragAreaClientProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180087394 (--1-$com_ptr_t@VBamoManualDragAreaClientProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    wil::com_ptr_t<BamoManualDragAreaClientProxy,wil::err_returncode_policy>::~com_ptr_t<BamoManualDragAreaClientProxy,wil::err_returncode_policy>((__int64 *)(v2 + 24));
    v3 = *(void **)(a1 + 8);
    if ( v3 )
      std::_Deallocate<16,0>(v3, 0x20uLL);
  }
}
