/*
 * XREFs of ??1?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800674A0
 * Callers:
 *     _std::make_shared_ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue_unsigned_short_const____FILETIME__::_1_::dtor$4 @ 0x1800D7035 (_std--make_shared_ContentManagement--TargetedContent--Internal--SubscriptionManager_ea_1800D7035.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RemoveInvalidWeakPointersNoLock_::_1_::dtor$0 @ 0x1800D7575 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RemoveInvalidWeakPointer.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 std::vector<Microsoft::WRL::WeakRef>::~vector<Microsoft::WRL::WeakRef>()
{
  return std::vector<Microsoft::WRL::WeakRef>::_Tidy();
}
