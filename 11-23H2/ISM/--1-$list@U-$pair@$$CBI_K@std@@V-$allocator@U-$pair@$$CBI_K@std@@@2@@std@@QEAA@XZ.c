/*
 * XREFs of ??1?$list@U?$pair@$$CBI_K@std@@V?$allocator@U?$pair@$$CBI_K@std@@@2@@std@@QEAA@XZ @ 0x180097DC0
 * Callers:
 *     _ControllerNavigationManager::ControllerNavigationManager_::_1_::dtor$14 @ 0x18006DDBC (_ControllerNavigationManager--ControllerNavigationManager_--_1_--dtor$14.c)
 *     _std::_Hash_std::_Umap_traits_DWMPointerMapping_CursorId_std::_Uhash_compare_DWMPointerMapping_DWMMappingHash_std::equal_to_DWMPointerMapping____std::allocator_std::pair_DWMPointerMapping_const__CursorId____0___::_Hash_std::_Umap_traits_DWMPointerMapping_CursorId_std::_Uhash_compare_DWMPointerMapping_DWMMappingHash_std::equal_to_DWMPointerMapping____std::allocator_std::pair_DWMPointerMapping_const__CursorId____0____::_1_::dtor$0 @ 0x18006E10E (_std--_Hash_std--_Umap_traits_DWMPointerMapping_CursorId_std--_Uhash_compare_DWMPoi_ea_18006E10E.c)
 *     _MPCInputRouter::MPCInputRouter_::_1_::dtor$22 @ 0x18006ED0D (_MPCInputRouter--MPCInputRouter_--_1_--dtor$22.c)
 *     _DWMCursorBroker::DWMCursorBroker_::_1_::dtor$17 @ 0x18006F1F1 (_DWMCursorBroker--DWMCursorBroker_--_1_--dtor$17.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_InputInfoValidator::PointerState_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__InputInfoValidator::PointerState____0___::_Hash_std::_Umap_traits_unsigned_long_InputInfoValidator::PointerState_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__InputInfoValidator::PointerState____0____::_1_::dtor$0 @ 0x18015C051 (_std--_Hash_std--_Umap_traits_unsigned_long_InputInfoValidator--PointerState_std--_Uhash_compare.c)
 *     _HapticInterface::HapticInterface_::_1_::dtor$12 @ 0x1801A917D (_HapticInterface--HapticInterface_--_1_--dtor$12.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_short_SimpleHapticsControllerFeedback_std::_Uhash_compare_unsigned_short_std::hash_unsigned_short__std::equal_to_unsigned_short____std::allocator_std::pair_unsigned_short_const__SimpleHapticsControllerFeedback____0___::_Hash_std::_Umap_traits_unsigned_short_SimpleHapticsControllerFeedback_std::_Uhash_compare_unsigned_short_std::hash_unsigned_short__std::equal_to_unsigned_short____std::allocator_std::pair_unsigned_short_const__SimpleHapticsControllerFeedback____0____std::allocator_std::_List_node_std::pair_unsigned_short_const__SimpleHapticsControllerFeedback__void________::_1_::dtor$0 @ 0x1801AA1A5 (_std--_Hash_std--_Umap_traits_unsigned_short_SimpleHapticsControllerFeedback_std--__ea_1801AA1A5.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180097BC8 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@-$_L.c)
 */

void __fastcall std::list<std::pair<unsigned int const,unsigned __int64>>::~list<std::pair<unsigned int const,unsigned __int64>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0x20uLL);
}
