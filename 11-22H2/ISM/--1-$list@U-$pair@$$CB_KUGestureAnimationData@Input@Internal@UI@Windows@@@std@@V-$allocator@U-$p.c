/*
 * XREFs of ??1?$list@U?$pair@$$CB_KUGestureAnimationData@Input@Internal@UI@Windows@@@std@@V?$allocator@U?$pair@$$CB_KUGestureAnimationData@Input@Internal@UI@Windows@@@std@@@2@@std@@QEAA@XZ @ 0x1800EC374
 * Callers:
 *     _TestCommandHost::TestCommandHost_::_1_::dtor$10 @ 0x18008049F (_TestCommandHost--TestCommandHost_--_1_--dtor$10.c)
 *     _DragManagerClientProxy::DragManagerClientProxy_::_1_::dtor$8 @ 0x180080D9A (_DragManagerClientProxy--DragManagerClientProxy_--_1_--dtor$8.c)
 *     _MobileButtonDeviceCollection::MobileButtonDeviceCollection_::_1_::dtor$10 @ 0x1800EC33A (_MobileButtonDeviceCollection--MobileButtonDeviceCollection_--_1_--dtor$10.c)
 *     _ConsumerControlDeviceCollection::ConsumerControlDeviceCollection_::_1_::dtor$8 @ 0x1800EDE3F (_ConsumerControlDeviceCollection--ConsumerControlDeviceCollection_--_1_--dtor$8.c)
 *     _EdgyProcessor::EdgyProcessor_::_1_::dtor$18 @ 0x1801751B4 (_EdgyProcessor--EdgyProcessor_--_1_--dtor$18.c)
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_tagRECT_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__tagRECT____0___::_Hash_std::_Umap_traits_unsigned___int64_tagRECT_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__tagRECT____0____::_1_::dtor$0 @ 0x1801B0C79 (_std--_Hash_std--_Umap_traits_unsigned___int64_tagRECT_std--_Uhash_compare_unsigned_ea_1801B0C79.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800EBEB4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUUsageList@ConsumerControlDeviceCollec.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,Windows::UI::Internal::Input::GestureAnimationData>>::~list<std::pair<unsigned __int64 const,Windows::UI::Internal::Input::GestureAnimationData>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0x28uLL);
}
