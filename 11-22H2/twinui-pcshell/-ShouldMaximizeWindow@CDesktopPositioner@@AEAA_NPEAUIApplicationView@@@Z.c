/*
 * XREFs of ?ShouldMaximizeWindow@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x18003A5F8
 * Callers:
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180039D90 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     ?SetPositionOfExistingView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAKPEAUtagRECT@@@Z @ 0x180212F30 (-SetPositionOfExistingView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAKPEAU.c)
 *     ?InitializePositionWithShowCommand@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAKPEAUtagRECT@@@Z @ 0x1805B3800 (-InitializePositionWithShowCommand@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TabletPostureWindowingShowMaximized@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180118ABC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TabletPostureWindowingShowMaximized@@@det.c)
 *     ?ShouldMaximizeOnSmallScreenDevice@@YA_NPEAUIApplicationView@@@Z @ 0x1805B4A68 (-ShouldMaximizeOnSmallScreenDevice@@YA_NPEAUIApplicationView@@@Z.c)
 */

char __fastcall CDesktopPositioner::ShouldMaximizeWindow(CDesktopPositioner *this, struct IApplicationView *a2)
{
  int v2; // eax
  __int64 v4; // rdx

  v2 = *((_DWORD *)this + 139);
  if ( v2 )
  {
    if ( v2 == 1 )
      return 1;
    if ( ShouldMaximizeOnSmallScreenDevice(a2) )
    {
      LOBYTE(v4) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_TabletPostureWindowingShowMaximized>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_TabletPostureWindowingShowMaximized>::GetImpl'::`2'::impl,
        v4);
      if ( *((_DWORD *)this + 139) == 3 )
        return *((_BYTE *)this + 560);
      return 1;
    }
  }
  return 0;
}
