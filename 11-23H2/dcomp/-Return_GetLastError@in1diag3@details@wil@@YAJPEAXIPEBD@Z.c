/*
 * XREFs of ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800E4E88
 * Callers:
 *     ??$init_once_nothrow@V_lambda_fec816bb0b05b80584cec4bf4afa1817_@@@wil@@YAJAEAT_RTL_RUN_ONCE@@V_lambda_fec816bb0b05b80584cec4bf4afa1817_@@PEA_N@Z @ 0x18000B6D4 (--$init_once_nothrow@V_lambda_fec816bb0b05b80584cec4bf4afa1817_@@@wil@@YAJAEAT_RTL_RUN_ONCE@@V_l.c)
 *     ?CreateInputSink@DesktopWindowTarget@Desktop@Composition@UI@Windows@@IEAAJPEAPEAX@Z @ 0x180011CEC (-CreateInputSink@DesktopWindowTarget@Desktop@Composition@UI@Windows@@IEAAJPEAPEAX@Z.c)
 *     GetWin32AppId @ 0x18001E1BC (GetWin32AppId.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180068F28 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180069308 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionIsland@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x18006C024 (-RuntimeClassInitialize@CompositionIsland@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ?CreateCommitCompletionWaiter@CompositorCommon@Composition@UI@Windows@@QEAAJ_NPEAPEAVCommitCompletionWaiter@234@@Z @ 0x1800838E8 (-CreateCommitCompletionWaiter@CompositorCommon@Composition@UI@Windows@@QEAAJ_NPEAPEAVCommitCompl.c)
 *     ?AllocateVisualId@CompositionIsland@Composition@UI@Windows@@QEAAJXZ @ 0x18008D0B4 (-AllocateVisualId@CompositionIsland@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?Initialize@DeviceRemovedWaiter@Internal@Composition@UI@Windows@@QEAAJXZ @ 0x1800A5FC8 (-Initialize@DeviceRemovedWaiter@Internal@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?GetClosedEventHandle@Visual@Composition@UI@Windows@@QEAAJPEAPEAX@Z @ 0x18010B3EC (-GetClosedEventHandle@Visual@Composition@UI@Windows@@QEAAJPEAPEAX@Z.c)
 *     ?get_DisplaySizePhysicalPixels@TransformInformation@Private@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z @ 0x18011BA30 (-get_DisplaySizePhysicalPixels@TransformInformation@Private@Composition@UI@Windows@@UEAAJPEAUVec.c)
 *     ?get_ScreenPhysicalPixelsToHimetricScaleFactor@TransformInformation@Private@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z @ 0x18011BAF0 (-get_ScreenPhysicalPixelsToHimetricScaleFactor@TransformInformation@Private@Composition@UI@Windo.c)
 *     ?TryRedirectForManipulation@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJAEBUtagPOINTER_INFO@@@Z @ 0x18011E4FC (-TryRedirectForManipulation@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJAE.c)
 * Callees:
 *     ??$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z @ 0x1800E32C4 (--$ReportFailure_GetLastErrorHr@$00@details@wil@@YAJPEAXIPEBD110@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_GetLastError(
        wil::details::in1diag3 *this,
        void *a2,
        unsigned int a3,
        const char *a4)
{
  int v5; // [rsp+20h] [rbp-18h]
  const char *retaddr; // [rsp+38h] [rbp+0h]

  return wil::details::ReportFailure_GetLastErrorHr<1>(this, a2, a3, a4, v5, retaddr);
}
