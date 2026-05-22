/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800B9918
 * Callers:
 *     _NonBamoInputDeliveryServer::OnAppThreadMessage_::_1_::dtor$0 @ 0x18007FB23 (_NonBamoInputDeliveryServer--OnAppThreadMessage_--_1_--dtor$0.c)
 *     _std::map_unsigned_int_std::function_void___cdecl(bool)__std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__std::function_void___cdecl(bool)_______::_Try_emplace_unsigned_int_const_&__::_1_::dtor$6 @ 0x1800833D8 (_std--map_unsigned_int_std--function_void___cdecl(bool)__std--less_unsigned_int__std--allocator_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x68uLL);
}
