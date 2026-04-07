/*
 * XREFs of ?IsMinimizeRestoreAnimationsUpdateEnabled@CDesktopManager@@SAHXZ @ 0x18000D10C
 * Callers:
 *     ?IsTransformSupported@CTopLevelWindow3D@@AEAA_NW4TA_TRANSFORM_TYPE@@@Z @ 0x18000D0C0 (-IsTransformSupported@CTopLevelWindow3D@@AEAA_NW4TA_TRANSFORM_TYPE@@@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180024CFC (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?ConvertTimingFunctionToInterpolationParameters@CTopLevelWindow3D@@AEAA?AUInterpolationParameters@@PEAUTA_TIMINGFUNCTION@@@Z @ 0x1800270E8 (-ConvertTimingFunctionToInterpolationParameters@CTopLevelWindow3D@@AEAA-AUInterpolationParameter.c)
 *     ?StartMinimizeAnimationForDisplayChange@CTopLevelWindow3D@@QEAAJXZ @ 0x1800E6C6C (-StartMinimizeAnimationForDisplayChange@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000D62C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MRAUTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000D748 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MRAUTest@@@details@wil@@QEAAX_NW4Reportin.c)
 */

__int64 __fastcall CDesktopManager::IsMinimizeRestoreAnimationsUpdateEnabled(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MRAUTest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_MRAUTest>::GetImpl'::`2'::impl,
    a2);
  LOBYTE(v2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
    v2);
  return 1LL;
}
