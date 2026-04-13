/*
 * XREFs of ?GetIids@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18006FDB0
 * Callers:
 *     ?GetIids@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18006FDC0 (-GetIids@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAJPEAKPEAPEAU.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::GetIids(
        __int64 this,
        _DWORD *a2,
        GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::FtmBase>::GetIids(
           this,
           a2,
           a3);
}
