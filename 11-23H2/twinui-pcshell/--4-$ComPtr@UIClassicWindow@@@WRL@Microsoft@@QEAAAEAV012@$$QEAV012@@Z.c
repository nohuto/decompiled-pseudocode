/*
 * XREFs of ??4?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180024560
 * Callers:
 *     ??0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z @ 0x1800244F8 (--0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z.c)
 *     ?OnViewRemoved@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x180059ABC (-OnViewRemoved@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z.c)
 *     ?CreateThumbnailVisualFactory@VirtualDesktop@@UEAAJURect@Foundation@Windows@@PEAPEAUIThumbnailFactory@Multitasking@ComposableShell@Internal@4@@Z @ 0x180063A70 (-CreateThumbnailVisualFactory@VirtualDesktop@@UEAAJURect@Foundation@Windows@@PEAPEAUIThumbnailFa.c)
 *     ?CreateBackgroundThumbnailVisualFactory@VirtualDesktop@@UEAAJURect@Foundation@Windows@@PEAPEAUIThumbnailFactory@Multitasking@ComposableShell@Internal@4@@Z @ 0x180063BA0 (-CreateBackgroundThumbnailVisualFactory@VirtualDesktop@@UEAAJURect@Foundation@Windows@@PEAPEAUIT.c)
 *     ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@V?$optional@UHandleActivationHints@CClassicWindowManager@@@std@@@Z @ 0x1800CE750 (-_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@V-$optional@UHandleActivationHints@CC.c)
 *     ?HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@W4ClassicWindowActivationOptions@@@Z @ 0x1800D2FF0 (-HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@W4ClassicWindowActivationOptions@@@Z.c)
 *     ?RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopTabletModePolicy@@@Z @ 0x180162340 (-RestoreVirtualDesktopState@VirtualDesktopPersistence@@UEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesk.c)
 *     ?GetAdjacentDesktop@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4FocusNavigationDirection@Input@Xaml@UI@6@PEAPEAU23456@@Z @ 0x180541BA0 (-GetAdjacentDesktop@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableSh.c)
 *     ??$AddRefCountWrappers@PEAUIVirtualDesktop@@@@YAJV?$tuple@PEAUIVirtualDesktop@@@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@1@@Z @ 0x1805F8938 (--$AddRefCountWrappers@PEAUIVirtualDesktop@@@@YAJV-$tuple@PEAUIVirtualDesktop@@@std@@PEAV-$tuple.c)
 *     ??$AddRefCountWrappers@PEAUIVirtualDesktop@@II@@YAJV?$tuple@PEAUIVirtualDesktop@@II@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@II@1@@Z @ 0x1805F89D4 (--$AddRefCountWrappers@PEAUIVirtualDesktop@@II@@YAJV-$tuple@PEAUIVirtualDesktop@@II@std@@PEAV-$t.c)
 *     ??$AddRefCountWrappers@PEAUIVirtualDesktop@@PEAU1@@@YAJV?$tuple@PEAUIVirtualDesktop@@PEAU1@@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V123@@1@@Z @ 0x1805F8A68 (--$AddRefCountWrappers@PEAUIVirtualDesktop@@PEAU1@@@YAJV-$tuple@PEAUIVirtualDesktop@@PEAU1@@std@.c)
 *     ??$AddRefCountWrappers@PEAUIVirtualDesktop@@PEAUHSTRING__@@@@YAJV?$tuple@PEAUIVirtualDesktop@@PEAUHSTRING__@@@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@23@@1@@Z @ 0x1805F8B58 (--$AddRefCountWrappers@PEAUIVirtualDesktop@@PEAUHSTRING__@@@@YAJV-$tuple@PEAUIVirtualDesktop@@PE.c)
 *     ??$AddRefCountWrappers@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@@YAJV?$tuple@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@1@@Z @ 0x1805F8C04 (--$AddRefCountWrappers@PEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@@YAJV-$tuple@PEAUIVirtu.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IClassicWindow>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( &v7 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    v3 = v4;
  }
  v5 = *a1;
  *a1 = v3;
  v7 = v5;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v7);
  return a1;
}
