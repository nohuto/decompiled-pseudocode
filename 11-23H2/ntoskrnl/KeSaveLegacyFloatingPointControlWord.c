/*
 * XREFs of KeSaveLegacyFloatingPointControlWord @ 0x14041F150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void KeSaveLegacyFloatingPointControlWord()
{
  __asm { fnclex }
}
