/*
 * XREFs of KeResetLegacyFloatingPointState @ 0x14041F140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void KeResetLegacyFloatingPointState()
{
  __asm { fninit }
}
