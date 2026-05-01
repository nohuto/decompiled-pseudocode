/*
 * XREFs of ??1?$ComPtr@VXamlExplorerHostShellComponent@@@WRL@Microsoft@@QEAA@XZ @ 0x18032BCA0
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_XamlExplorerHostShellComponent_IUnknown__::_1_::dtor$1 @ 0x180216EF0 (_Microsoft--WRL--Details--MakeAndInitialize_XamlExplorerHostShellComponent_IUnknown__--_1_--dtor.c)
 *     _GamingOverlayExperienceManagerFactory::CreateInstance_::_1_::dtor$0 @ 0x180221607 (_GamingOverlayExperienceManagerFactory--CreateInstance_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_GamingOverlayExperienceManager_GamingOverlayExperienceManager__::_1_::dtor$2 @ 0x18022163C (_Microsoft--WRL--Details--MakeAndInitialize_GamingOverlayExperienceManager_GamingOv_ea_18022163C.c)
 *     _GamingOverlayExperienceManager::StaticNotifyBcastDvrOfGameModeChange_::_1_::dtor$0 @ 0x18033A373 (_GamingOverlayExperienceManager--StaticNotifyBcastDvrOfGameModeChange_--_1_--dtor$0.c)
 *     _GamingOverlayExperienceManager::StaticPerfDataCollectionThread_::_1_::dtor$0 @ 0x18033A43E (_GamingOverlayExperienceManager--StaticPerfDataCollectionThread_--_1_--dtor$0.c)
 *     _GamingOverlayExperienceManager::StaticWndProc_::_1_::dtor$0 @ 0x18033A58F (_GamingOverlayExperienceManager--StaticWndProc_--_1_--dtor$0.c)
 *     _GamingOverlayExperienceManager::UpdateOverlayDisplayModeShared_::_1_::dtor$0 @ 0x18033B05A (_GamingOverlayExperienceManager--UpdateOverlayDisplayModeShared_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIXamlExplorerHost@@UIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@ABI@@UIXamlExplorerHostChildWindowStatics@89Internal@Windows@ABI@@UIXamlExplorerHostComponent@89Internal@Windows@ABI@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18013FB90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_18013FB90.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<XamlExplorerHostShellComponent>::~ComPtr<XamlExplorerHostShellComponent>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IXamlExplorerHost,ABI::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowStatics,ABI::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindowStatics,ABI::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostComponent,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
