/*
 * XREFs of KiIsBranchConfusionMitigationSupported @ 0x140573D40
 * Callers:
 *     KiIsKvaShadowNeededForBranchConfusion @ 0x140381760 (KiIsKvaShadowNeededForBranchConfusion.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x140381840 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     KiIsSrsoMitigationDesired @ 0x140410AB0 (KiIsSrsoMitigationDesired.c)
 * Callees:
 *     KiIsHyperVCr3RspErrataPresent @ 0x140579288 (KiIsHyperVCr3RspErrataPresent.c)
 */

_BOOL8 __fastcall KiIsBranchConfusionMitigationSupported(__int64 a1, _QWORD *a2)
{
  return (*a2 & 4) != 0 && (unsigned int)KiIsHyperVCr3RspErrataPresent() == 0;
}
