/*
 * XREFs of USBMidiOutCreateThirdByte @ 0x1C003B5D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall USBMidiOutCreateThirdByte(__int64 a1, _BYTE *a2, char a3)
{
  char v4; // al

  if ( a3 >= 0 )
  {
LABEL_2:
    a2[3] = a3;
    return 1;
  }
  if ( (a3 & 0xF8) == 0xF8 )
  {
    if ( !*(_BYTE *)(a1 + 68) )
      return 1;
    goto LABEL_2;
  }
  if ( a3 == -9 && *(_BYTE *)(a1 + 68) )
  {
    v4 = *a2 & 0xF7;
    a2[3] = -9;
    *a2 = v4 | 7;
    *(_BYTE *)(a1 + 68) = 0;
  }
  return 1;
}
