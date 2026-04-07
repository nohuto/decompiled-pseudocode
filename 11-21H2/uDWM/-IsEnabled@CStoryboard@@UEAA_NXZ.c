/*
 * XREFs of ?IsEnabled@CStoryboard@@UEAA_NXZ @ 0x1800D7560
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x180037E58 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TATest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004225C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TATest@@@details@wil@@QEAAX_NW4ReportingK.c)
 */

char __fastcall CStoryboard::IsEnabled(CStoryboard *this, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  __int64 v5; // rbx
  __int64 v6; // rcx

  v4 = 1;
  v5 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 52);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TATest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TATest>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  if ( *(_BYTE *)(v5 + 696) )
    return 0;
  v6 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 52) + 568LL);
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 72) == 65 && *(_BYTE *)(v6 + 68) )
      return 0;
  }
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22)
    || (unsigned __int8)CDesktopManager::CheckAnyPreference(0x10u) )
  {
    return 0;
  }
  return v4;
}
