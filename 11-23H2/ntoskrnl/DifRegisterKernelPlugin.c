/*
 * XREFs of DifRegisterKernelPlugin @ 0x1405D54B0
 * Callers:
 *     VfVolatileSetDifRuleClass @ 0x140ADDC0C (VfVolatileSetDifRuleClass.c)
 *     VfInitBootDriversLoaded @ 0x140B577A4 (VfInitBootDriversLoaded.c)
 * Callees:
 *     VfSecurityEntry @ 0x1405D05E4 (VfSecurityEntry.c)
 *     VfIovPluginEntry @ 0x1405D21A0 (VfIovPluginEntry.c)
 *     VfDmaPluginEntry @ 0x1405D2500 (VfDmaPluginEntry.c)
 *     VfPoolTrackingEntry @ 0x1405D2698 (VfPoolTrackingEntry.c)
 *     CarRegisterDefaultRuleClassConfiguration @ 0x1405D45B0 (CarRegisterDefaultRuleClassConfiguration.c)
 *     CarSetCustomRuleIdRange @ 0x1405D4BD0 (CarSetCustomRuleIdRange.c)
 *     DifUtilDbgPrint @ 0x1405D50B0 (DifUtilDbgPrint.c)
 *     VfLwSPEntry @ 0x1405F8C08 (VfLwSPEntry.c)
 *     VfIrqlPluginEntry @ 0x14067C534 (VfIrqlPluginEntry.c)
 *     VfSpecialPoolEntry @ 0x14067C754 (VfSpecialPoolEntry.c)
 *     VfDeadlockPluginEntry @ 0x140AD78E8 (VfDeadlockPluginEntry.c)
 *     VfMiscPluginEntry @ 0x140AE06A4 (VfMiscPluginEntry.c)
 */

__int64 DifRegisterKernelPlugin()
{
  unsigned int *v0; // rdi
  __int64 v1; // rsi
  int v2; // eax
  unsigned int v3; // ebx

  v0 = (unsigned int *)&unk_140C0DEBC;
  v1 = 4LL;
  do
  {
    v2 = CarRegisterDefaultRuleClassConfiguration(*(v0 - 2), *(v0 - 3));
    v3 = v2;
    if ( v2 < 0 )
      DifUtilDbgPrint(
        "Failed to register kernel DIF plugin %d for reporting. NTSTATUS code: 0x%x",
        DifKernelPluginRules,
        v2);
    else
      CarSetCustomRuleIdRange(*(v0 - 3));
    v0 += 4;
    --v1;
  }
  while ( v1 );
  if ( (VfRuleClasses & 0x8000000000LL) != 0 )
    v3 = VfLwSPEntry();
  if ( (VfRuleClasses & 1) != 0 )
    v3 = VfSpecialPoolEntry();
  if ( (VfRuleClasses & 8) != 0 )
    v3 = VfPoolTrackingEntry();
  if ( (VfRuleClasses & 0x100) != 0 )
    v3 = VfSecurityEntry();
  if ( (VfRuleClasses & 0x800) != 0 )
    v3 = VfMiscPluginEntry();
  if ( (VfRuleClasses & 0x10) != 0 )
    v3 = VfIovPluginEntry();
  if ( (VfRuleClasses & 0x10) != 0 )
    v3 = VfIovPluginEntry();
  if ( (VfRuleClasses & 2) != 0 )
    v3 = VfIrqlPluginEntry();
  if ( (VfRuleClasses & 0x20) != 0 )
    v3 = VfDeadlockPluginEntry();
  if ( (VfRuleClasses & 0x80u) != 0LL )
    return (unsigned int)VfDmaPluginEntry();
  return v3;
}
