/*
 * XREFs of ?CalculateBackgroundType@CTopLevelWindow@@AEBA?AW4BackgroundType@1@XZ @ 0x180023CC0
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180026220 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AccentColorTitlebar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180015054 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AccentColorTitlebar@@@details@wil@@QEAAX_.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MicaDefaultBackdrop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18001C88C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MicaDefaultBackdrop@@@details@wil@@QEAAX_.c)
 *     ?HasCaptionAreaColorOverride@CTopLevelWindow@@AEBA_NXZ @ 0x180051AD8 (-HasCaptionAreaColorOverride@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?IsFrameExtendedIntoClientAreaLRB@CWindowData@@QEBA_NXZ @ 0x1800552B8 (-IsFrameExtendedIntoClientAreaLRB@CWindowData@@QEBA_NXZ.c)
 *     IsOpenThemeDataPresent @ 0x18005D948 (IsOpenThemeDataPresent.c)
 */

__int64 __fastcall CTopLevelWindow::CalculateBackgroundType(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  int v8; // edi
  __int64 result; // rax
  CWindowData *v10; // rcx
  __int64 v11; // rcx

  v5 = *(_QWORD *)(a1 + 752);
  v6 = *(_DWORD *)(v5 + 168);
  if ( v6 && (unsigned int)(v6 - 5) > 1 )
    return 1LL;
  if ( !v5 )
    return 0LL;
  v7 = *(_DWORD *)(v5 + 204);
  if ( v7 )
  {
    if ( v7 == 1 )
      return 0LL;
  }
  else
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MicaDefaultBackdrop>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_MicaDefaultBackdrop>::GetImpl'::`2'::impl,
      1u,
      a3,
      a4);
    if ( !*(_QWORD *)(a1 + 520) )
      return 0LL;
    v8 = *(_DWORD *)(a1 + 624);
    if ( !(unsigned __int8)IsOpenThemeDataPresent() || (v8 & 6) == 0 )
      return 0LL;
  }
  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 752) + 204LL) )
  {
    if ( !CTopLevelWindow::HasCaptionAreaColorOverride((CTopLevelWindow *)a1) )
    {
      v10 = *(CWindowData **)(a1 + 752);
      if ( !*((_DWORD *)v10 + 26) && !CWindowData::IsFrameExtendedIntoClientAreaLRB(v10) )
      {
        result = 0LL;
        if ( *(_DWORD *)(v11 + 192) != 1 )
          return 4LL;
        return result;
      }
    }
    return 0LL;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AccentColorTitlebar>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_AccentColorTitlebar>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  if ( CTopLevelWindow::HasCaptionAreaColorOverride((CTopLevelWindow *)a1) )
    return 3LL;
  else
    return 2LL;
}
