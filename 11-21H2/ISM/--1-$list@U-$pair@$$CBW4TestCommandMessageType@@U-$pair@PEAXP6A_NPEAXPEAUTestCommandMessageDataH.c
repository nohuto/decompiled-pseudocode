/*
 * XREFs of ??1?$list@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800C436C
 * Callers:
 *     _TestCommandHost::TestCommandHost_::_1_::dtor$10 @ 0x180054F48 (_TestCommandHost--TestCommandHost_--_1_--dtor$10.c)
 *     _MobileButtonDeviceCollection::MobileButtonDeviceCollection_::_1_::dtor$10 @ 0x1800C4332 (_MobileButtonDeviceCollection--MobileButtonDeviceCollection_--_1_--dtor$10.c)
 *     _ConsumerControlDeviceCollection::ConsumerControlDeviceCollection_::_1_::dtor$8 @ 0x1800C5C9F (_ConsumerControlDeviceCollection--ConsumerControlDeviceCollection_--_1_--dtor$8.c)
 *     _EdgyProcessor::EdgyProcessor_::_1_::dtor$18 @ 0x180148387 (_EdgyProcessor--EdgyProcessor_--_1_--dtor$18.c)
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_tagRECT_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__tagRECT____0___::_Hash_std::_Umap_traits_unsigned___int64_tagRECT_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__tagRECT____0____::_1_::dtor$0 @ 0x180183B35 (_std--_Hash_std--_Umap_traits_unsigned___int64_tagRECT_std--_Uhash_compare_unsigned_ea_180183B35.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800C3EB4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUUsageList@ConsumerControlDeviceCollec.c)
 */

void __fastcall std::list<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>::~list<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0x28uLL);
}
