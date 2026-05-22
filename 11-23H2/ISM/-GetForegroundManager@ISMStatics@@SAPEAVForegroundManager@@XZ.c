/*
 * XREFs of ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x180026B3C
 * Callers:
 *     ?OnConnected@ActivationControllerBamoProxy@@MEAAJXZ @ 0x180026A30 (-OnConnected@ActivationControllerBamoProxy@@MEAAJXZ.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180035D10 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18004DBFC (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ?OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x18009C800 (-OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@Appli.c)
 *     ?OnDisconnected@ActivationControllerBamoProxy@@MEAAJXZ @ 0x1800A59B0 (-OnDisconnected@ActivationControllerBamoProxy@@MEAAJXZ.c)
 *     ?RequestActivation@ActivationControllerBamoProxy@@MEAAJXZ @ 0x1800A5C00 (-RequestActivation@ActivationControllerBamoProxy@@MEAAJXZ.c)
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z @ 0x1800B8060 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z.c)
 *     ?OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ @ 0x180142F50 (-OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ.c)
 *     ?SetProcessIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z @ 0x180142F90 (-SetProcessIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Interna.c)
 *     ?SetViewIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z @ 0x180143020 (-SetViewIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@U.c)
 *     ?DeliverToInputService@NonBamoInputDeliveryServer@@UEAAJPEBUKeyboardEvent@@@Z @ 0x1801739A0 (-DeliverToInputService@NonBamoInputDeliveryServer@@UEAAJPEBUKeyboardEvent@@@Z.c)
 *     ?TryActivate@ActivationProcessor@@QEAA_NUActivationInformation@@@Z @ 0x1801C456C (-TryActivate@ActivationProcessor@@QEAA_NUActivationInformation@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012900 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Create@ForegroundManager@@SA?AV?$ComPtr@VForegroundManager@@@WRL@Microsoft@@XZ @ 0x180040AF0 (-Create@ForegroundManager@@SA-AV-$ComPtr@VForegroundManager@@@WRL@Microsoft@@XZ.c)
 */

struct ForegroundManager *ISMStatics::GetForegroundManager(void)
{
  struct ForegroundManager *v0; // rcx
  struct ForegroundManager **v2; // rax
  volatile signed __int32 *v3; // rax
  volatile signed __int32 *v4; // [rsp+30h] [rbp+8h] BYREF

  v0 = ISMStatics::s_foregroundManager;
  if ( !ISMStatics::s_foregroundManager )
  {
    v2 = (struct ForegroundManager **)ForegroundManager::Create(&v4);
    v0 = *v2;
    *v2 = 0LL;
    v3 = v4;
    ISMStatics::s_foregroundManager = v0;
    if ( v4 )
    {
      v4 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v3);
      return ISMStatics::s_foregroundManager;
    }
  }
  return v0;
}
