/*
 * XREFs of sub_140920C14 @ 0x140920C14
 * Callers:
 *     sub_1409211E4 @ 0x1409211E4 (sub_1409211E4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140920C14(_WORD *a1, int a2)
{
  unsigned __int16 v2; // r10
  unsigned __int16 i; // r8
  bool v4; // zf

  v2 = a1[1];
  for ( i = 0; i < v2; ++i )
  {
    if ( ((*a1 - 26220) & 0xFDFF) != 0 )
      v4 = *(_DWORD *)&a1[2 * i + 2] == a2;
    else
      v4 = *(_DWORD *)&a1[4 * i + 2] == a2;
    if ( v4 )
      break;
  }
  return i;
}
