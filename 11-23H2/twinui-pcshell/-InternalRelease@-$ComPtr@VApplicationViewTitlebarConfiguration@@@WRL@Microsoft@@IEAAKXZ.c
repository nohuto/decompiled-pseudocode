/*
 * XREFs of ?InternalRelease@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ @ 0x18004D7B0
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180021550 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?CloneTitleBarConfiguration@@YA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180026040 (-CloneTitleBarConfiguration@@YA-AV-$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_excep.c)
 *     ??$MakeAndInitializeOrThrow@VApplicationViewTitlebarConfiguration@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@XZ @ 0x180026200 (--$MakeAndInitializeOrThrow@VApplicationViewTitlebarConfiguration@@$$V@wil@@YA-AV-$ComPtr@VAppli.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800262B8 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ??1?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAA@XZ @ 0x1803BEFD0 (--1-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1803EE8D8 (-CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApp.c)
 *     ?_CreateTitleBarConfiguration@HolographicPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1804ADFF0 (-_CreateTitleBarConfiguration@HolographicPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfigu.c)
 *     ?_CreateTitlebarConfiguration@SurfaceHubPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1805A5808 (-_CreateTitlebarConfiguration@SurfaceHubPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfigur.c)
 *     ?CreateTitlebarConfiguration@KioskPositioner@@AEAA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1805A7D4C (-CreateTitlebarConfiguration@KioskPositioner@@AEAA-AV-$com_ptr_t@UIApplicationViewTitlebarConfig.c)
 *     ?GetChromeConfigurationForView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1805AC4C0 (-GetChromeConfigurationForView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUI.c)
 *     ?CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1805BB244 (-CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationV.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewTitlebarConfiguration@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004D7E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationView.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return result;
}
