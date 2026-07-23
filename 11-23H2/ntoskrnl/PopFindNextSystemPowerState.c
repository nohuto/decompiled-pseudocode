/*
 * XREFs of PopFindNextSystemPowerState @ 0x140980B30
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

char __fastcall PopFindNextSystemPowerState(int a1, char a2, _BYTE *a3)
{
  char v3; // r9

  v3 = 1;
  dword_140C3CDA0 = dword_140C3CDA4;
  if ( dword_140C3CDA4 == 1 )
  {
    if ( dword_140C3CD8C < 0 && *a3 )
    {
      *a3 = 0;
      dword_140C3CD8C &= ~0x10000000u;
      dword_140C3CDA0 = a1;
    }
    else if ( a2 && a1 == 5 )
    {
      dword_140C3CDA0 = 5;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
