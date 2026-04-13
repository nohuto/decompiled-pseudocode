/*
 * XREFs of ?QueryInterface@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180071610
 * Callers:
 *     ?QueryInterface@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180071620 (-QueryInterface@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@W7EAAJAEBU_G.c)
 *     ?QueryInterface@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180071640 (-QueryInterface@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAJAEBU.c)
 *     ?QueryInterface@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180071660 (-QueryInterface@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBI@EAAJAEBU.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::QueryInterface(
        __int64 this,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::FtmBase>::QueryInterface(
           this,
           a2,
           a3);
}
