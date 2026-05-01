/*
 * XREFs of ??1?$ComPtr@VGamingOverlayExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1803F918C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_HolographicPositioner_IHolographicPositioner__::_1_::dtor$2 @ 0x1802B39C4 (_Microsoft--WRL--Details--MakeAndInitialize_HolographicPositioner_IHolographicPositioner__--_1_-.c)
 *     _GamingOverlayExperienceManagerFactory::CreateInstance_::_1_::dtor$0 @ 0x1802C4ED9 (_GamingOverlayExperienceManagerFactory--CreateInstance_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_GamingOverlayExperienceManager_GamingOverlayExperienceManager__::_1_::dtor$2 @ 0x1802C4F0E (_Microsoft--WRL--Details--MakeAndInitialize_GamingOverlayExperienceManager_GamingOv_ea_1802C4F0E.c)
 *     _GamingOverlayExperienceManager::StaticNotifyBcastDvrOfGameModeChange_::_1_::dtor$0 @ 0x180408277 (_GamingOverlayExperienceManager--StaticNotifyBcastDvrOfGameModeChange_--_1_--dtor$0.c)
 *     _GamingOverlayExperienceManager::StaticPerfDataCollectionThread_::_1_::dtor$0 @ 0x18040833E (_GamingOverlayExperienceManager--StaticPerfDataCollectionThread_--_1_--dtor$0.c)
 *     _GamingOverlayExperienceManager::StaticWndProc_::_1_::dtor$0 @ 0x18040848F (_GamingOverlayExperienceManager--StaticWndProc_--_1_--dtor$0.c)
 *     _GamingOverlayExperienceManager::UpdateOverlayDisplayModeShared_::_1_::dtor$0 @ 0x180408F4C (_GamingOverlayExperienceManager--UpdateOverlayDisplayModeShared_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIWnfCallback@@UIEyeControlManager@Input@Internal@UI@Windows@@UIInputDeviceWatcherOwner@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180172D50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_180172D50.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<GamingOverlayExperienceManager>::~ComPtr<GamingOverlayExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IWnfCallback,Windows::UI::Internal::Input::IEyeControlManager,IInputDeviceWatcherOwner,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
