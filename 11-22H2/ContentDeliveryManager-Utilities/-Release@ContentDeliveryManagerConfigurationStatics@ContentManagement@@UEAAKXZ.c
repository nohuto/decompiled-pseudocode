/*
 * XREFs of ?Release@ContentDeliveryManagerConfigurationStatics@ContentManagement@@UEAAKXZ @ 0x18004B630
 * Callers:
 *     ?Release@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@W7EAAKXZ @ 0x18004B640 (-Release@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@W7EAAKXZ.c)
 *     ?Release@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@WCI@EAAKXZ @ 0x18004B660 (-Release@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ContentDeliveryManagerConfigurationStatics::Release(
        __int64 this,
        volatile int *a2)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
           this,
           a2);
}
