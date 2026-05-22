/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800DFD5C
 * Callers:
 *     _std::_Hash_std::_Umap_traits_tagMsgRoutingInfo_IInputTarget___std::_Uhash_compare_tagMsgRoutingInfo_RoutingInfoHash_std::equal_to_tagMsgRoutingInfo____std::allocator_std::pair_tagMsgRoutingInfo_const__IInputTarget______0___::_Try_emplace_tagMsgRoutingInfo_const_&__::_1_::dtor$0 @ 0x18006BD10 (_std--_Hash_std--_Umap_traits_tagMsgRoutingInfo_IInputTarget___std--_Uhash_compare_tagMsgRouting.c)
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__std::array_unsigned_short_20____void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__std::array_unsigned_short_20____void________unsigned_long_const_&_std::array_unsigned_short_20____::_1_::dtor$0 @ 0x1800DFB66 (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--pair_unsigned_long_const__std--.c)
 *     _std::unordered_map_unsigned_long_std::array_unsigned_short_20__std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_std::pair_unsigned_long_const__std::array_unsigned_short_20_______::_Insert_or_assign_unsigned_long_const_&_std::array_unsigned_short_20____::_1_::dtor$0 @ 0x1800DFD4A (_std--unordered_map_unsigned_long_std--array_unsigned_short_20__std--hash_unsigned_long__std--eq.c)
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__ResizeProcessor::MessageInfo__void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned_long_const__ResizeProcessor::MessageInfo__void________std::piecewise_construct_t_const_&_std::tuple_unsigned_long_const_&__std::tuple_____::_1_::dtor$0 @ 0x1801629AB (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--pair_unsigned_long_ea_1801629AB.c)
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_DockInputIdentity_const__unsigned___int64__void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair_DockInputIdentity_const__unsigned___int64__void________DockInputIdentity_const_&_unsigned___int64_&__::_1_::dtor$1 @ 0x1801A1CD8 (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair_DockInputIdentity_const__unsigned.c)
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_tagMsgRoutingInfo_const__Microsoft::WRL::ComPtr_IRemoteViewHitTestClient____void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_tagMsgRoutingInfo_const__Microsoft::WRL::ComPtr_IRemoteViewHitTestClient____void________std::piecewise_construct_t_const_&_std::tuple_tagMsgRoutingInfo_const_&__std::tuple_____::_1_::dtor$0 @ 0x1801B6F78 (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--pair_tagMsgRoutingInfo_const__M.c)
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__GUID_const__std::list_VirtualHotKeyTracker::KeyEventData_std::allocator_VirtualHotKeyTracker::KeyEventData______void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__GUID_const__std::list_VirtualHotKeyTracker::KeyEventData_std::allocator_VirtualHotKeyTracker::KeyEventData______void________std::piecewise_construct_t_const_&_std::tuple__GUID_const_&__std::tuple_____::_1_::dtor$1 @ 0x1801D12A6 (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair__GUID_const__std--list_VirtualHot.c)
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__GUID_const__std::list_VirtualHotKeyTracker::KeyEventData_std::allocator_VirtualHotKeyTracker::KeyEventData______void_______::_Tree_temp_node_std::allocator_std::_Tree_node_std::pair__GUID_const__std::list_VirtualHotKeyTracker::KeyEventData_std::allocator_VirtualHotKeyTracker::KeyEventData______void________std::piecewise_construct_t_const_&_std::tuple__GUID_const_&__std::tuple_____::_1_::dtor$0 @ 0x1801D12B2 (_std--_Tree_temp_node_std--allocator_std--_Tree_node_std--pair__GUID_const__std--li_ea_1801D12B2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x40uLL);
}
