/*
 * XREFs of HalpEndOfBoot @ 0x1408496B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpResetSBF @ 0x140A90AF8 (HalpResetSBF.c)
 */

__int64 HalpEndOfBoot()
{
  return HalpResetSBF();
}
