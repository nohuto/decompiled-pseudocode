/*
 * XREFs of PopFastS4Check @ 0x1409808F4
 * Callers:
 *     PopActionRetrieveInitialState @ 0x14058F350 (PopActionRetrieveInitialState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

bool PopFastS4Check()
{
  return !byte_140C3D87C && dword_140C3D0E0 == 4 && byte_140C3D199 == 1 && byte_140C3D190 == 1 && byte_140C3D19E == 2;
}
