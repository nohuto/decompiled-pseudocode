/*
 * XREFs of ??1SubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@QEAA@XZ @ 0x1800675A8
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@std@@EEAAXXZ @ 0x18006B190 (-_Destroy@-$_Ref_count_obj@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedConten.c)
 * Callees:
 *     ?_Tidy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAXXZ @ 0x18006B894 (-_Tidy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAXXZ.c)
 */

void __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue::~SubscriptionMapValue(
        void **this)
{
  std::vector<Microsoft::WRL::WeakRef>::_Tidy(this + 1);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(this);
}
