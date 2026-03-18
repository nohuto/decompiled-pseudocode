/*
 * XREFs of PopFindNextSystemPowerState @ 0x140980930
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

char __fastcall PopFindNextSystemPowerState(int a1, char a2, _BYTE *a3)
{
  char v3; // r9

  v3 = 1;
  dword_140C3D0E0 = dword_140C3D0E4;
  if ( dword_140C3D0E4 == 1 )
  {
    if ( dword_140C3D0CC < 0 && *a3 )
    {
      *a3 = 0;
      dword_140C3D0CC &= ~0x10000000u;
      dword_140C3D0E0 = a1;
    }
    else if ( a2 && a1 == 5 )
    {
      dword_140C3D0E0 = 5;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
