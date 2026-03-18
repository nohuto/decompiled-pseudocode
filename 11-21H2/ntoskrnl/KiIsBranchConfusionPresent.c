/*
 * XREFs of KiIsBranchConfusionPresent @ 0x140418BD8
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403BFE70 (KiDetectHardwareSpecControlFeatures.c)
 *     KeOptimizeSpecCtrlSettings @ 0x1403D5E00 (KeOptimizeSpecCtrlSettings.c)
 *     KiIsSrsoMitigationDesired @ 0x140418CD8 (KiIsSrsoMitigationDesired.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403C03A0 (HviIsAnyHypervisorPresent.c)
 */

_BOOL8 __fastcall KiIsBranchConfusionPresent(__int64 a1)
{
  return *(_BYTE *)(a1 + 141) == 1
      && (KeFeatureBits2 & 0x1000000) == 0
      && (HviIsAnyHypervisorPresent() || *(_BYTE *)(a1 + 64) != 25);
}
