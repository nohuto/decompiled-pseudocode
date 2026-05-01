/*
 * XREFs of ?InitializePrivilegedOperations@XamlLauncher@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x18044AE20
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_StartInWin32Host@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18011CBE0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_StartInWin32Host@@@details@wil@@QEAAX_NW4.c)
 */

__int64 __fastcall XamlLauncher::InitializePrivilegedOperations(
        XamlLauncher *this,
        const struct _GUID *a2,
        struct IUnknown *a3,
        __int64 a4)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_StartInWin32Host>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_StartInWin32Host>::GetImpl'::`2'::impl,
    0,
    (__int64)a3,
    a4);
  return 0LL;
}
