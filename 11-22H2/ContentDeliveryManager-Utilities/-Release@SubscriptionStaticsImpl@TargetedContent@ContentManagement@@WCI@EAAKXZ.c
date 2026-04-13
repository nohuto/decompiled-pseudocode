/*
 * XREFs of ?Release@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@WCI@EAAKXZ @ 0x18004B660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::TargetedContent::SubscriptionStaticsImpl::Release(__int64 a1, volatile int *a2)
{
  return ContentManagement::ContentDeliveryManagerConfigurationStatics::Release(a1 - 40, a2);
}
