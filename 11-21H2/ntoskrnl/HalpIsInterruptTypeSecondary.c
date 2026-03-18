/*
 * XREFs of HalpIsInterruptTypeSecondary @ 0x1403B4C50
 * Callers:
 *     HalpCheckInterruptType @ 0x14051CF8C (HalpCheckInterruptType.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x14051D410 (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     HalacpiIrqTranslateResourcesIsa @ 0x14084F1B0 (HalacpiIrqTranslateResourcesIsa.c)
 *     HalacpiIrqTranslateResourceRequirementsIsa @ 0x14084F290 (HalacpiIrqTranslateResourceRequirementsIsa.c)
 *     HalpQueryPrimaryInterruptInformation @ 0x140909764 (HalpQueryPrimaryInterruptInformation.c)
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
