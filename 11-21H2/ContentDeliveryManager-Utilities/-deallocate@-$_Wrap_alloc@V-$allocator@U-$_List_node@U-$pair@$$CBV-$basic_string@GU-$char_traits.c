/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@PEAX@std@@@std@@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@PEAX@2@_K@Z @ 0x180073C1C
 * Callers:
 *     _std::_List_alloc_0_std::_List_base_types_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::shared_ptr_ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue____std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::shared_ptr_ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue_________::_Buynode0_::_1_::catch$0 @ 0x1800F03A9 (_std--_List_alloc_0_std--_List_base_types_std--pair_std--basic_string_unsigned_short_std--char_t.c)
 *     _std::_List_buy_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::allocator_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t_______::_Buynode_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const_&__::_1_::catch$0 @ 0x1800F5058 (_std--_List_buy_std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t____st.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<std::_List_node<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>,void *>>>::deallocate(
        __int64 a1,
        void *a2)
{
  operator delete(a2);
}
