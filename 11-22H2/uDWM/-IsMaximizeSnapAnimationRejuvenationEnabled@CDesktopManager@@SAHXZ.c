/*
 * XREFs of ?IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ @ 0x18001DA8C
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x18001F964 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?ConvertTimingFunctionToInterpolationParameters@CTopLevelWindow3D@@AEAA?AUInterpolationParameters@@PEAUTA_TIMINGFUNCTION@@@Z @ 0x1800205B8 (-ConvertTimingFunctionToInterpolationParameters@CTopLevelWindow3D@@AEAA-AUInterpolationParameter.c)
 *     ?Initialize@CWindowList@@QEAAJXZ @ 0x180040C6C (-Initialize@CWindowList@@QEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x180048970 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180054720 (-OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?StartMinimizeAnimationForDisplayChange@CTopLevelWindow3D@@QEAAJXZ @ 0x1800E78D8 (-StartMinimizeAnimationForDisplayChange@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004BBEC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingK.c)
 */

__int64 __fastcall CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
    a2);
  return 1LL;
}
