/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004BBEC
 * Callers:
 *     ?IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ @ 0x18001DA8C (-IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ.c)
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18001EDE0 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180047CF0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x180048970 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ??0CDesktopManager@@AEAA@XZ @ 0x180049220 (--0CDesktopManager@@AEAA@XZ.c)
 *     ?GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z @ 0x18004BB38 (-GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z.c)
 * Callees:
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F12C (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004BC74 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@AE.c)
 */

_UNKNOWN **__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
        _DWORD *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  unsigned int v6; // edi
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF
  int v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+64h] [rbp+Ch]
  __int64 v11; // [rsp+78h] [rbp+20h]

  v11 = a4;
  LODWORD(v4) = *a1;
  v6 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v4 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::GetCachedFeatureEnabledState(a1, v8);
    v11 = v4;
  }
  v9 = 0;
  v10 = 3;
  return wil::details::ReportUsageToService(
           (__int64)(a1 + 2),
           0x1E39796u,
           ((unsigned int)v4 >> 10) & 1,
           ((unsigned int)v4 >> 11) & 1,
           (__int64)&v9,
           v6,
           3u);
}
