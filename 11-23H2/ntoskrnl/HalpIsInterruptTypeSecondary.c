/*
 * XREFs of HalpIsInterruptTypeSecondary @ 0x1403686D0
 * Callers:
 *     HalpCheckInterruptType @ 0x1403B35BC (HalpCheckInterruptType.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x140519F04 (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     HalpQueryPrimaryInterruptInformation @ 0x14081E41C (HalpQueryPrimaryInterruptInformation.c)
 *     HalacpiIrqTranslateResourcesIsa @ 0x140843290 (HalacpiIrqTranslateResourcesIsa.c)
 *     HalacpiIrqTranslateResourceRequirementsIsa @ 0x140843370 (HalacpiIrqTranslateResourceRequirementsIsa.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpIsInterruptTypeSecondary(int a1, unsigned int a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a1 && a2 >= SecondaryGsivRangeStart )
    return a2 < SecondaryGsivRangeSize + SecondaryGsivRangeStart;
  return v2;
}
