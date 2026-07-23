/*
 * XREFs of KeSaveLegacyFloatingPointControlWord @ 0x14041F4E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void KeSaveLegacyFloatingPointControlWord()
{
  __asm { fnclex }
}
