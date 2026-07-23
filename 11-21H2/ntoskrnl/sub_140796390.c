/*
 * XREFs of sub_140796390 @ 0x140796390
 * Callers:
 *     sub_1406D2394 @ 0x1406D2394 (sub_1406D2394.c)
 *     sub_1406F2158 @ 0x1406F2158 (sub_1406F2158.c)
 *     sub_1407900EC @ 0x1407900EC (sub_1407900EC.c)
 *     sub_140794F30 @ 0x140794F30 (sub_140794F30.c)
 *     sub_140796040 @ 0x140796040 (sub_140796040.c)
 *     sub_140797054 @ 0x140797054 (sub_140797054.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140796390(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r11
  unsigned int v3; // r10d
  unsigned int v5; // r8d
  _DWORD *v6; // r9
  __int64 v7; // r11

  v2 = *(_QWORD *)(a1 + 384);
  v3 = 0;
  if ( v2 )
  {
    v5 = 0;
    v6 = (_DWORD *)(a1 + 128);
    v7 = v2 + 88;
    do
    {
      if ( *v6 && *(_QWORD *)v7 && ((unsigned __int8)(1 << v5) & a2) != 0 )
        v3 += (*(_DWORD *)(*(_QWORD *)v7 + 16LL) + 7) & 0xFFFFFFF8;
      ++v5;
      v6 += 8;
      v7 += 104LL;
    }
    while ( v5 < 8 );
  }
  return v3;
}
