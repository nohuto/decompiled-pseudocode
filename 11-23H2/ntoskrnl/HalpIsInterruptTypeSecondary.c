/*
 * XREFs of HalpIsInterruptTypeSecondary @ 0x140368870
 * Callers:
 *     HalpCheckInterruptType @ 0x1403B379C (HalpCheckInterruptType.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x14051A454 (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     HalpQueryPrimaryInterruptInformation @ 0x14081E6EC (HalpQueryPrimaryInterruptInformation.c)
 *     HalacpiIrqTranslateResourcesIsa @ 0x140843590 (HalacpiIrqTranslateResourcesIsa.c)
 *     HalacpiIrqTranslateResourceRequirementsIsa @ 0x140843670 (HalacpiIrqTranslateResourceRequirementsIsa.c)
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
