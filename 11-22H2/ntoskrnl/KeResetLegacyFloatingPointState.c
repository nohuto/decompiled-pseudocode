/*
 * XREFs of KeResetLegacyFloatingPointState @ 0x14041EA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void KeResetLegacyFloatingPointState()
{
  __asm { fninit }
}
