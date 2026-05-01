/*
 * XREFs of ?GetSearchboxTaskbarMode@@YA?AW4SearchboxTaskbarMode@@XZ @ 0x18039AB84
 * Callers:
 *     ?ShowInternal@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x18039E42C (-ShowInternal@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOpti.c)
 *     ?ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x1803ACC4C (-ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOption.c)
 * Callees:
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800693F8 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800E6FEC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchInAllMarkets@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18039D90C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchInAllMarkets@@@details@wil@@QEAAX_N.c)
 */

__int64 __fastcall GetSearchboxTaskbarMode(TabletModeHelpers *a1, enum _TABLETMODESTATE *a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx
  unsigned int v4; // eax
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = 1;
  if ( !TabletModeHelpers::IsTabletMode(a1, a2) )
  {
    LOBYTE(v2) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchInAllMarkets>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_SearchInAllMarkets>::GetImpl'::`2'::impl,
      v2);
    v6 = 2;
    if ( SHRegGetDWORD(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
           L"SearchboxTaskbarMode",
           &v6) == -2147024894
      && (v7 = 0,
          SHRegGetDWORD(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
            L"SearchboxTaskbarModeForceGlyph",
            &v7) >= 0) )
    {
      v4 = v6;
      if ( v7 )
        return 1;
      return v4;
    }
    else
    {
      return v6;
    }
  }
  return v3;
}
