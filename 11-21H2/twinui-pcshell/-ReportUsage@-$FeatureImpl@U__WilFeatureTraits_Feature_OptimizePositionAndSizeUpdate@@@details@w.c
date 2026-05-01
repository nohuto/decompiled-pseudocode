/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_OptimizePositionAndSizeUpdate@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180025FB0
 * Callers:
 *     ?OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlPositionChangedEventArgs@45678@@Z @ 0x1800BE5A0 (-OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 *     ?HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x18022FDD0 (-HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Win.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_OptimizePositionAndSizeUpdate@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180026038 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_OptimizePositionAndSizeU.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18018FE30 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 */

__int64 __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_OptimizePositionAndSizeUpdate>::ReportUsage(
        _DWORD *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  int v6; // edi
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  LODWORD(v4) = *a1;
  v6 = a2;
  if ( (*a1 & 2) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_OptimizePositionAndSizeUpdate>::GetCachedFeatureEnabledState(
                      a1,
                      v8);
    v11 = v4;
  }
  v9 = 0;
  v10 = 3;
  return wil::details::ReportUsageToService(
           a1 + 2,
           30134375LL,
           ((unsigned int)v4 >> 8) & 1,
           ((unsigned int)v4 >> 9) & 1,
           &v9,
           v6,
           3);
}
