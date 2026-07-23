/*
 * XREFs of KiIsBranchConfusionPresent @ 0x140382944
 * Callers:
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1403819E0 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x14038249C (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsSrsoMitigationDesired @ 0x140410D10 (KiIsSrsoMitigationDesired.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403829F0 (HviIsAnyHypervisorPresent.c)
 */

__int64 __fastcall KiIsBranchConfusionPresent(__int64 a1)
{
  char IsAnyHypervisorPresent; // al
  unsigned int v4; // edx

  if ( *(_BYTE *)(a1 + 141) != 1 || (KeFeatureBits2 & 0x1000000) != 0 )
    return 0LL;
  IsAnyHypervisorPresent = HviIsAnyHypervisorPresent();
  v4 = 0;
  if ( IsAnyHypervisorPresent )
    return 1LL;
  LOBYTE(v4) = *(_BYTE *)(a1 + 64) != 25;
  return v4;
}
