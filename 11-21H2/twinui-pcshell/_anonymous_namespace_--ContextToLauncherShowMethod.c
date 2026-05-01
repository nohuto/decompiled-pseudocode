/*
 * XREFs of _anonymous_namespace_::ContextToLauncherShowMethod @ 0x18044AB78
 * Callers:
 *     XamlLauncher::LauncherShowRequested$_ResumeCoro$1 @ 0x1801AB3D0 (XamlLauncher--LauncherShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800FC0AC (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FindInStart@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18019759C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FindInStart@@@details@wil@@QEAAX_NW4Repor.c)
 */

__int64 __fastcall anonymous_namespace_::ContextToLauncherShowMethod(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r9

  if ( (unsigned __int8)winrt::operator==(a1, (__int64)L"StartButton") )
    return 11LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FindInStart>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_FindInStart>::GetImpl'::`2'::impl,
    0,
    v1,
    v2);
  return 0LL;
}
