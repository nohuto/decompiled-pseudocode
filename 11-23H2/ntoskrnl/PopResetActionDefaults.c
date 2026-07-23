/*
 * XREFs of PopResetActionDefaults @ 0x140865298
 * Callers:
 *     PopExecutePowerAction @ 0x1409899F4 (PopExecutePowerAction.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     <none>
 */

void PopResetActionDefaults()
{
  dword_140C3CDAC = 1;
  dword_140C3CDA0 = 0;
  dword_140C3CDA8 = 0;
  byte_140C3CD9D = 0;
  if ( (PopAction & 2) == 0 )
  {
    LOBYTE(PopAction) = 0;
    byte_140C3CD82 = 0;
    qword_140C3CD84 = 0LL;
    dword_140C3CD90 = 0;
    byte_140C3CD9C = 0;
    dword_140C3CD94 = 16;
    dword_140C3CD8C = 268435459;
  }
}
