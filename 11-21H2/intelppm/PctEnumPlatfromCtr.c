/*
 * XREFs of PctEnumPlatfromCtr @ 0x1C0024CC0
 * Callers:
 *     <none>
 * Callees:
 *     PctPlatformCounterState @ 0x1C0024EC0 (PctPlatformCounterState.c)
 */

__int64 __fastcall PctEnumPlatfromCtr(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r10
  __int64 v4; // r11

  if ( (int)a2 >= 5 )
  {
    LODWORD(a2) = 5;
  }
  else
  {
    do
    {
      if ( *(_BYTE *)PctPlatformCounterState(a1, a2) && *v3 == v4 )
        break;
      a2 = (unsigned int)(a2 + 1);
    }
    while ( (int)a2 < 5 );
  }
  return (unsigned int)a2;
}
