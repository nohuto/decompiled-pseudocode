/*
 * XREFs of ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x1800263C0
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180021550 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800262B8 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1803EE8D8 (-CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApp.c)
 *     ?_CreateTitleBarConfiguration@HolographicPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1804ADFF0 (-_CreateTitleBarConfiguration@HolographicPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfigu.c)
 *     ?_CreateTitlebarConfiguration@SurfaceHubPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1805A5808 (-_CreateTitlebarConfiguration@SurfaceHubPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfigur.c)
 *     ?GetChromeConfigurationForView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1805AC4C0 (-GetChromeConfigurationForView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUI.c)
 *     ?CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1805BB244 (-CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationV.c)
 * Callees:
 *     ??0ApplicationViewTitlebarConfiguration@@QEAA@XZ @ 0x180026420 (--0ApplicationViewTitlebarConfiguration@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAXPEAVApplicationViewTitlebarConfiguration@@@Z @ 0x180026554 (-Attach@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAXPEAVApplicationView.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>(_QWORD *a1)
{
  ApplicationViewTitlebarConfiguration *v2; // rax
  ApplicationViewTitlebarConfiguration *v3; // rdi
  ApplicationViewTitlebarConfiguration *v4; // rax

  *a1 = 0LL;
  v2 = (ApplicationViewTitlebarConfiguration *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x60uLL);
    v4 = ApplicationViewTitlebarConfiguration::ApplicationViewTitlebarConfiguration(v3);
    Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::Attach(a1, v4);
  }
  return a1;
}
