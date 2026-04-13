/*
 * XREFs of ??_ESubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAPEAXI@Z @ 0x180067BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAA@XZ @ 0x180067528 (--1SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAA@XZ.c)
 */

ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *__fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::`vector deleting destructor'(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *this,
        char a2)
{
  ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::~SubscriptionManagerImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
