/*
 * XREFs of KiIsSrsoMitigationDesired @ 0x140410AB0
 * Callers:
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x140381840 (KiOptimizeSpecCtrlSettingsWorker.c)
 * Callees:
 *     KiIsBranchConfusionPresent @ 0x1403827A4 (KiIsBranchConfusionPresent.c)
 *     KiIsBranchConfusionMitigationDesired @ 0x140573D00 (KiIsBranchConfusionMitigationDesired.c)
 *     KiIsBranchConfusionMitigationSupported @ 0x140573D40 (KiIsBranchConfusionMitigationSupported.c)
 */

__int64 __fastcall KiIsSrsoMitigationDesired(__int64 a1, _QWORD *a2)
{
  if ( (KiFeatureSettings & 5) != 0 || *(_BYTE *)(a1 + 141) == 1 && (*a2 & 0x10) == 0 && (KiFeatureSettings & 0x40) == 0 )
    return 0LL;
  if ( (unsigned int)KiIsBranchConfusionPresent(a1)
    && (unsigned int)KiIsBranchConfusionMitigationSupported(a1, a2)
    && (unsigned int)KiIsBranchConfusionMitigationDesired(a1, a2) )
  {
    return 1LL;
  }
  return ((unsigned int)KiFeatureSettings >> 26) & 1;
}
