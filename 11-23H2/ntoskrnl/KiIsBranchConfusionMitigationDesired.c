/*
 * XREFs of KiIsBranchConfusionMitigationDesired @ 0x140573D00
 * Callers:
 *     KiIsKvaShadowNeededForBranchConfusion @ 0x140381760 (KiIsKvaShadowNeededForBranchConfusion.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x140381840 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     KiIsSrsoMitigationDesired @ 0x140410AB0 (KiIsSrsoMitigationDesired.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIsBranchConfusionMitigationDesired(__int64 a1, _QWORD *a2)
{
  if ( (KiFeatureSettings & 5) != 0 || *(_BYTE *)(a1 + 141) == 1 && (KiFeatureSettings & 0x40) == 0 && (*a2 & 0x10) == 0 )
    return 0LL;
  else
    return HIBYTE(KiFeatureSettings) & 1;
}
