/*
 * XREFs of AmdPctEnumPlatfromCtr @ 0x1C0002DF0
 * Callers:
 *     AmdPctSnapPlatformCtrsEx @ 0x1C0002ECC (AmdPctSnapPlatformCtrsEx.c)
 * Callees:
 *     AmdPctPlatformCounterState @ 0x1C0002E70 (AmdPctPlatformCounterState.c)
 */

__int64 __fastcall AmdPctEnumPlatfromCtr(__int64 a1, int a2, __int64 a3)
{
  int v4; // r9d
  int v6; // edx
  _QWORD *v7; // r10
  int v8; // r11d

  v4 = a2 + *(_DWORD *)(a1 + 1256);
  v6 = 3;
  if ( v4 < 3 )
  {
    v6 = 0;
    if ( v4 >= 0 )
      v6 = v4;
    if ( v6 < *(_DWORD *)(a1 + 1260) )
    {
      do
      {
        if ( *(_BYTE *)AmdPctPlatformCounterState(a1) && *v7 == a3 )
          break;
        ++v6;
      }
      while ( v6 < v8 );
    }
  }
  return (unsigned int)v6;
}
