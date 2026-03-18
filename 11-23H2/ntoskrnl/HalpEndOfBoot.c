/*
 * XREFs of HalpEndOfBoot @ 0x1408493B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpResetSBF @ 0x140A90C78 (HalpResetSBF.c)
 */

__int64 HalpEndOfBoot()
{
  return HalpResetSBF();
}
