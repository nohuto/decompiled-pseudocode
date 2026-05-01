/*
 * XREFs of ?QueryInterface@CQuickConnectExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18044EFA0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIQuickConnectExperienceManager@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180298420 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180298420.c)
 *     ?QueryInterface@CQuickConnectExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180298440 (-QueryInterface@CQuickConnectExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CQuickConnectExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180298460 (-QueryInterface@CQuickConnectExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CQuickConnectExperienceManager::QueryInterface(__int64 this, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IQuickConnectExperienceManager>>(
           this,
           a2,
           a3);
}
