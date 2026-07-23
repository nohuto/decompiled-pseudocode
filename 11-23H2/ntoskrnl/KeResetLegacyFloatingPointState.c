/*
 * XREFs of KeResetLegacyFloatingPointState @ 0x14041F4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void KeResetLegacyFloatingPointState()
{
  __asm { fninit }
}
