/*
 * XREFs of ?GetIids@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18004E700
 * Callers:
 *     ?GetIids@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18004E710 (-GetIids@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::TargetedContent::SubscriptionStaticsImpl::GetIids(
        __int64 this,
        _DWORD *a2,
        GUID **a3)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::GetIids(
           this,
           a2,
           a3);
}
