/*
 * XREFs of ?GetIids@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180068940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::GetIids(
           (ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *)(a1 - 16),
           a2,
           a3);
}
