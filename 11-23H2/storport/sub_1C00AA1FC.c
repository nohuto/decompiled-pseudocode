/*
 * XREFs of sub_1C00AA1FC @ 0x1C00AA1FC
 * Callers:
 *     sub_1C003A010 @ 0x1C003A010 (sub_1C003A010.c)
 * Callees:
 *     sub_1C00AA2B8 @ 0x1C00AA2B8 (sub_1C00AA2B8.c)
 */

__int64 __fastcall sub_1C00AA1FC(__int64 a1, _DWORD *a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // r8d

  v4 = 0;
  if ( *a2 == 176 || *a2 == 208 && (a2[46] & 1) != 0 )
    *(_BYTE *)(a1 + 248) |= 4u;
  if ( *a4 )
    return (unsigned int)sub_1C00AA2B8(a1 + 8, *a4, (unsigned int)a2[19]);
  return v4;
}
