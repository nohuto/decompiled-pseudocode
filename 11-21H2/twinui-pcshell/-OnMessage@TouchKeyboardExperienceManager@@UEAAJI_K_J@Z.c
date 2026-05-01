/*
 * XREFs of ?OnMessage@TouchKeyboardExperienceManager@@UEAAJI_K_J@Z @ 0x1800436E0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnConvertibleSlateModeChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800BBF10 (-OnConvertibleSlateModeChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WorkAreaChangeHandling@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C13E0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WorkAreaChangeHandling@@@details@wil@@QEA.c)
 *     ?OnDisplayChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18046262C (-OnDisplayChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnMessage(
        TouchKeyboardExperienceManager *this,
        __int64 a2,
        __int64 a3,
        const WCHAR *a4)
{
  if ( (_DWORD)a2 == 26 )
  {
    if ( CompareStringOrdinal(a4, -1, L"ConvertibleSlateMode", -1, 1) == 2 )
      TouchKeyboardExperienceManager::OnConvertibleSlateModeChanged((TouchKeyboardExperienceManager *)((char *)this - 136));
  }
  else if ( (_DWORD)a2 == 126 )
  {
    LOBYTE(a2) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_WorkAreaChangeHandling>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_WorkAreaChangeHandling>::GetImpl'::`2'::impl,
      a2);
    TouchKeyboardExperienceManager::OnDisplayChanged((TouchKeyboardExperienceManager *)((char *)this - 136));
  }
  return 0LL;
}
