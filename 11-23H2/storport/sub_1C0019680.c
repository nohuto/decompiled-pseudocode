/*
 * XREFs of sub_1C0019680 @ 0x1C0019680
 * Callers:
 *     sub_1C0016EE0 @ 0x1C0016EE0 (sub_1C0016EE0.c)
 *     sub_1C0019498 @ 0x1C0019498 (sub_1C0019498.c)
 *     sub_1C00220D8 @ 0x1C00220D8 (sub_1C00220D8.c)
 * Callees:
 *     sub_1C0044D84 @ 0x1C0044D84 (sub_1C0044D84.c)
 */

__int64 __fastcall sub_1C0019680(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v4; // ecx
  unsigned int v5; // ebx

  v4 = *(_DWORD *)(a1 + 660);
  v5 = -1073741823;
  if ( a2 && a2 <= a3 )
  {
    *(_DWORD *)(a1 + 660) = a2;
  }
  else if ( a2 != v4 )
  {
    return v5;
  }
  v5 = 0;
  *(_DWORD *)(a1 + 864) = a3;
  if ( (byte_1C0093A00 & 0x10) != 0 )
    sub_1C0044D84(
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      a2,
      a3,
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_BYTE *)(a1 + 96),
      *(_BYTE *)(a1 + 97),
      *(_BYTE *)(a1 + 98),
      v4,
      a2,
      a3,
      0);
  return v5;
}
