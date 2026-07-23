/*
 * XREFs of KeFindFirstSetRightAffinityEx @ 0x14056C1B0
 * Callers:
 *     sub_140308240 @ 0x140308240 (sub_140308240.c)
 *     sub_140343BA0 @ 0x140343BA0 (sub_140343BA0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindFirstSetRightAffinityEx(_WORD *a1)
{
  __int16 v1; // dx
  unsigned __int64 v2; // r8
  unsigned __int64 v4; // rcx

  v1 = 0;
  if ( !*a1 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    v2 = *(_QWORD *)&a1[4 * v1 + 4];
    if ( v2 )
      break;
    if ( ++v1 >= (int)(unsigned __int16)*a1 )
      return 0xFFFFFFFFLL;
  }
  _BitScanForward64(&v4, v2);
  return (unsigned int)dword_140D105E0[(unsigned int)(v4 + (v1 << 6))];
}
