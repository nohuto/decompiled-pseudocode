/*
 * XREFs of PopFastS4Check @ 0x140980AF4
 * Callers:
 *     PopActionRetrieveInitialState @ 0x14058F840 (PopActionRetrieveInitialState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

bool PopFastS4Check()
{
  return !byte_140C3D97C && dword_140C3CDA0 == 4 && byte_140C3CE59 == 1 && byte_140C3CE50 == 1 && byte_140C3CE5E == 2;
}
