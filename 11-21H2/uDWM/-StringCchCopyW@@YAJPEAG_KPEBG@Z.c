/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800465A8
 * Callers:
 *     GetAnimationScenarioNameFromGUID @ 0x1800039A4 (GetAnimationScenarioNameFromGUID.c)
 *     ?AnimationLastFrameTelemetry@CAnimationFrameStats@@UEAAXPEBU_tlgProvider_t@@UtagCOMPOSITION_TARGET_ID@@PEBG222I@Z @ 0x1800075B0 (-AnimationLastFrameTelemetry@CAnimationFrameStats@@UEAAXPEBU_tlgProvider_t@@UtagCOMPOSITION_TARG.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180045718 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?SetText@CText@@QEAAJPEBG@Z @ 0x180046464 (-SetText@CText@@QEAAJPEBG@Z.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x18009423C (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z @ 0x1800AB360 (-LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z.c)
 * Callees:
 *     StringCopyWorkerW @ 0x1800465D0 (StringCopyWorkerW.c)
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
