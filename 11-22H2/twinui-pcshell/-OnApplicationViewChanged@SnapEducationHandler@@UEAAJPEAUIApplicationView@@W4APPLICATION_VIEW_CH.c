/*
 * XREFs of ?OnApplicationViewChanged@SnapEducationHandler@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18017FD40
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z @ 0x180031F18 (-WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z.c)
 *     ShouldIgnoreWindow @ 0x180044F80 (ShouldIgnoreWindow.c)
 *     ?HasWindowFocusUpdatedFrequently@SnapEducationHandler@@AEAA_NXZ @ 0x180046118 (-HasWindowFocusUpdatedFrequently@SnapEducationHandler@@AEAA_NXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1806805A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?SnapEducation_FrequentFocusMovement@CSnapComponentTelemetry@@SAXXZ @ 0x18068070C (-SnapEducation_FrequentFocusMovement@CSnapComponentTelemetry@@SAXXZ.c)
 */

__int64 __fastcall SnapEducationHandler::OnApplicationViewChanged(
        SnapEducationHandler *a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64),
        int a3)
{
  HWND WindowForView; // rax
  HWND v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx

  if ( a3 == 7 )
  {
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
    v6 = WindowForView;
    if ( WindowForView )
    {
      if ( !ShouldIgnoreWindow(WindowForView) )
      {
        SnapEducationHandler::WindowFocusChanged(a1, v6);
        if ( SnapEducationHandler::HasWindowFocusUpdatedFrequently(a1) )
        {
          LOBYTE(v7) = 1;
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_SETest>::ReportUsage(
            &`wil::Feature<__WilFeatureTraits_Feature_SETest>::GetImpl'::`2'::impl,
            v7,
            0LL);
          LOBYTE(v8) = 100;
          LOBYTE(v9) = 1;
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_SETest>::ReportUsage(
            &`wil::Feature<__WilFeatureTraits_Feature_SETest>::GetImpl'::`2'::impl,
            v9,
            v8);
          CSnapComponentTelemetry::SnapEducation_FrequentFocusMovement();
        }
      }
    }
  }
  return 0LL;
}
