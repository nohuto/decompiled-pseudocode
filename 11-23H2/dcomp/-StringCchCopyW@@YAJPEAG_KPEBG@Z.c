/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800691F8
 * Callers:
 *     GetAnimationScenarioNameFromGUID @ 0x180003470 (GetAnimationScenarioNameFromGUID.c)
 *     ?AnimationLastFrameTelemetry@CAnimationFrameStats@@UEAAXUtagCOMPOSITION_TARGET_ID@@PEBG111I@Z @ 0x18000D750 (-AnimationLastFrameTelemetry@CAnimationFrameStats@@UEAAXUtagCOMPOSITION_TARGET_ID@@PEBG111I@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180068F28 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?SetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAXPEBG@Z @ 0x180069158 (-SetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAXPEBG@Z.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x1800E3FA4 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?CreateInvalidFunctionArgumentContext@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAXIPEAGI@Z @ 0x1801628E8 (-CreateInvalidFunctionArgumentContext@ExpressionAnimationBuilder@Composition@UI@Windows@@AEAAXIP.c)
 *     ??0CInteractionFrameStats@@IEAA@PEBGT_LARGE_INTEGER@@@Z @ 0x1801A5108 (--0CInteractionFrameStats@@IEAA@PEBGT_LARGE_INTEGER@@@Z.c)
 *     ??$_Emplace_reallocate@AEAPEAVCBatchStats@CTouchFrameStats@@AEAPEBG@?$vector@VCAnimationInfo@CTouchFrameStats@@V?$allocator@VCAnimationInfo@CTouchFrameStats@@@std@@@std@@QEAAPEAVCAnimationInfo@CTouchFrameStats@@QEAV23@AEAPEAVCBatchStats@3@AEAPEBG@Z @ 0x1801A6910 (--$_Emplace_reallocate@AEAPEAVCBatchStats@CTouchFrameStats@@AEAPEBG@-$vector@VCAnimationInfo@CTo.c)
 *     ??$emplace_back@AEAPEAVCBatchStats@CTouchFrameStats@@AEAPEBG@?$vector@VCAnimationInfo@CTouchFrameStats@@V?$allocator@VCAnimationInfo@CTouchFrameStats@@@std@@@std@@QEAA?A_TAEAPEAVCBatchStats@CTouchFrameStats@@AEAPEBG@Z @ 0x1801A6B6C (--$emplace_back@AEAPEAVCBatchStats@CTouchFrameStats@@AEAPEBG@-$vector@VCAnimationInfo@CTouchFram.c)
 * Callees:
 *     StringCopyWorkerW @ 0x1800692AC (StringCopyWorkerW.c)
 */

HRESULT __fastcall StringCchCopyW(unsigned __int16 *a1, size_t a2, size_t *a3)
{
  HRESULT result; // eax
  size_t v4; // [rsp+20h] [rbp-18h]

  if ( a2 - 1 <= 0x7FFFFFFE )
    return StringCopyWorkerW(a1, a2, a3, (STRSAFE_PCNZWCH)a3, v4);
  result = -2147024809;
  if ( a2 )
    *a1 = 0;
  return result;
}
