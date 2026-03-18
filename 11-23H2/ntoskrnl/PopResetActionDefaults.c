/*
 * XREFs of PopResetActionDefaults @ 0x140865058
 * Callers:
 *     PopExecutePowerAction @ 0x1409897F4 (PopExecutePowerAction.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     <none>
 */

void PopResetActionDefaults()
{
  dword_140C3D0EC = 1;
  dword_140C3D0E0 = 0;
  dword_140C3D0E8 = 0;
  byte_140C3D0DD = 0;
  if ( (PopAction & 2) == 0 )
  {
    LOBYTE(PopAction) = 0;
    byte_140C3D0C2 = 0;
    qword_140C3D0C4 = 0LL;
    dword_140C3D0D0 = 0;
    byte_140C3D0DC = 0;
    dword_140C3D0D4 = 16;
    dword_140C3D0CC = 268435459;
  }
}
