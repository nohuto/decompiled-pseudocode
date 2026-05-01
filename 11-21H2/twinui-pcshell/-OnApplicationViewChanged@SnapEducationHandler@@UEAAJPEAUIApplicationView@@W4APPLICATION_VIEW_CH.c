/*
 * XREFs of ?OnApplicationViewChanged@SnapEducationHandler@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180120140
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180061058 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SETest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ShouldIgnoreWindow @ 0x1801201A0 (ShouldIgnoreWindow.c)
 *     ?HasWindowFocusUpdatedFrequently@SnapEducationHandler@@AEAA_NXZ @ 0x1801202B8 (-HasWindowFocusUpdatedFrequently@SnapEducationHandler@@AEAA_NXZ.c)
 *     ?WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z @ 0x18012041C (-WindowFocusChanged@SnapEducationHandler@@AEAAXPEAUHWND__@@@Z.c)
 *     ?SnapEducation_FrequentFocusMovement@CSnapComponentTelemetry@@SAXXZ @ 0x1805B2C60 (-SnapEducation_FrequentFocusMovement@CSnapComponentTelemetry@@SAXXZ.c)
 */

__int64 __fastcall SnapEducationHandler::OnApplicationViewChanged(
        SnapEducationHandler *a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64),
        int a3)
{
  HWND WindowForView; // rax
  HWND v6; // rbx
  __int64 v7; // r9
  __int64 v8; // r9

  if ( a3 == 7 )
  {
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
    v6 = WindowForView;
    if ( WindowForView )
    {
      if ( !(unsigned __int8)ShouldIgnoreWindow(WindowForView) )
      {
        SnapEducationHandler::WindowFocusChanged(a1, v6);
        if ( SnapEducationHandler::HasWindowFocusUpdatedFrequently(a1) )
        {
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_SETest>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_SETest>::GetImpl'::`2'::impl,
            1u,
            0,
            v7);
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_SETest>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_SETest>::GetImpl'::`2'::impl,
            1u,
            0x64u,
            v8);
          CSnapComponentTelemetry::SnapEducation_FrequentFocusMovement();
        }
      }
    }
  }
  return 0LL;
}
