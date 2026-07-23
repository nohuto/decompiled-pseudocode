/*
 * XREFs of KiIsBranchConfusionMitigationSupported @ 0x140574280
 * Callers:
 *     KiIsKvaShadowNeededForBranchConfusion @ 0x140381900 (KiIsKvaShadowNeededForBranchConfusion.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1403819E0 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     KiIsSrsoMitigationDesired @ 0x140410D10 (KiIsSrsoMitigationDesired.c)
 * Callees:
 *     KiIsHyperVCr3RspErrataPresent @ 0x140579778 (KiIsHyperVCr3RspErrataPresent.c)
 */

_BOOL8 __fastcall KiIsBranchConfusionMitigationSupported(__int64 a1, _QWORD *a2)
{
  return (*a2 & 4) != 0 && (unsigned int)KiIsHyperVCr3RspErrataPresent() == 0;
}
