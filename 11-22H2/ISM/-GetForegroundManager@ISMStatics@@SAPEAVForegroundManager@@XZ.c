/*
 * XREFs of ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18001D79C
 * Callers:
 *     ?OnConnected@ActivationControllerBamoProxy@@MEAAJXZ @ 0x18001D690 (-OnConnected@ActivationControllerBamoProxy@@MEAAJXZ.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18003C0B4 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18004E45C (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ?OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x1800AED50 (-OnUniversalPropertyChanged@CUIHierarchy@@AEAAXUIUniversalAppModelWatcher@WindowManagement@Appli.c)
 *     ?OnDisconnected@ActivationControllerBamoProxy@@MEAAJXZ @ 0x1800B8450 (-OnDisconnected@ActivationControllerBamoProxy@@MEAAJXZ.c)
 *     ?RequestActivation@ActivationControllerBamoProxy@@MEAAJXZ @ 0x1800B86A0 (-RequestActivation@ActivationControllerBamoProxy@@MEAAJXZ.c)
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z @ 0x1800C9178 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z.c)
 *     ?OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ @ 0x180151040 (-OnRemovedFromInputSite@InputDelegationInputObjectProxy@@UEAAXXZ.c)
 *     ?SetProcessIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z @ 0x180151170 (-SetProcessIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Interna.c)
 *     ?SetViewIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z @ 0x180151260 (-SetViewIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@U.c)
 *     ?DeliverToInputService@NonBamoInputDeliveryServer@@UEAAJPEBUKeyboardEvent@@@Z @ 0x1801817B0 (-DeliverToInputService@NonBamoInputDeliveryServer@@UEAAJPEBUKeyboardEvent@@@Z.c)
 *     ?TryActivate@ActivationProcessor@@QEAA_NUActivationInformation@@@Z @ 0x1801D1DDC (-TryActivate@ActivationProcessor@@QEAA_NUActivationInformation@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800132B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Create@ForegroundManager@@SA?AV?$ComPtr@VForegroundManager@@@WRL@Microsoft@@XZ @ 0x1800416CC (-Create@ForegroundManager@@SA-AV-$ComPtr@VForegroundManager@@@WRL@Microsoft@@XZ.c)
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
