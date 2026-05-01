/*
 * XREFs of ?OnShowWindowPolicy@CDesktopPositioner@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x1805B3B20
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapOnShow@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180119080 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapOnShow@@@details@wil@@QEAAX_NW4Report.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn CDesktopPositioner::OnShowWindowPolicy(
        CDesktopPositioner *this,
        HWND a2,
        __int64 a3,
        unsigned int *a4,
        struct tagRECT *a5,
        unsigned int a6)
{
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapOnShow>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SnapOnShow>::GetImpl'::`2'::impl,
    1u,
    a3,
    (__int64)a4);
  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    (void *)0x4B4,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    v6);
}
