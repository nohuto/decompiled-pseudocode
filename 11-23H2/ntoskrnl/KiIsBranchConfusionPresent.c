/*
 * XREFs of KiIsBranchConfusionPresent @ 0x1403827A4
 * Callers:
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x140381840 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1403822FC (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsSrsoMitigationDesired @ 0x140410AB0 (KiIsSrsoMitigationDesired.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140382850 (HviIsAnyHypervisorPresent.c)
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
