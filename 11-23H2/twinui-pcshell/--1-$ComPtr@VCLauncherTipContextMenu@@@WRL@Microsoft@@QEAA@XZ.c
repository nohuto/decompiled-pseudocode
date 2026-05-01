/*
 * XREFs of ??1?$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@QEAA@XZ @ 0x1806CB9DC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CLauncherTipContextMenu_IUnknown__::_1_::dtor$2 @ 0x1802BD541 (_Microsoft--WRL--Details--MakeAndInitialize_CLauncherTipContextMenu_IUnknown__--_1_--dtor$2.c)
 *     _CWRLImpWndProc_CLauncherTipContextMenu_::s_WndProcBase_::_1_::dtor$0 @ 0x1802EAAF7 (_CWRLImpWndProc_CLauncherTipContextMenu_--s_WndProcBase_--_1_--dtor$0.c)
 *     _CLauncherTipContextMenu::_EnsureMenu_::_1_::dtor$1 @ 0x1806DE3D9 (_CLauncherTipContextMenu--_EnsureMenu_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIAppTransitionManager@@UIAppTransitionTargetManagerSink@@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180141EC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180141EC0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CLauncherTipContextMenu>::~ComPtr<CLauncherTipContextMenu>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IAppTransitionManager,IAppTransitionTargetManagerSink,IApplicationViewChangeListener>::Release(
             result,
             a2);
  }
  return result;
}
