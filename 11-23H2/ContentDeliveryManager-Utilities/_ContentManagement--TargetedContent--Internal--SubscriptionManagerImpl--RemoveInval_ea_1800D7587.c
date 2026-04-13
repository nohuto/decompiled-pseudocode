/*
 * XREFs of _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RemoveInvalidWeakPointersNoLock_::_1_::dtor$1 @ 0x1800D7587
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RemoveInvalidWeakPointersNoLock_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a2 + 32));
}
