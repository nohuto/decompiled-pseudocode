/*
 * XREFs of ?CreateWindowTarget@CDevice@DirectComposition@@UEAAJPEAUHWND__@@PEAPEAUIDCompositionTarget@@@Z @ 0x1800FF960
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTarget@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800FFD08 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTarget@@@details@wil@@QEAAX_NW4Repo.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateWindowTarget(
        DirectComposition::CDevice *this,
        HWND a2,
        struct IDCompositionTarget **a3)
{
  HWND v4; // rsi

  v4 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTarget>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_WindowTarget>::GetImpl'::`2'::impl,
    a2);
  return DirectComposition::CDevice::CreateTargetHelper((DirectComposition::CDevice *)((char *)this - 16), v4, 2u, a3);
}
