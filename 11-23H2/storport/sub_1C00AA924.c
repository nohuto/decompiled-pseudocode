/*
 * XREFs of sub_1C00AA924 @ 0x1C00AA924
 * Callers:
 *     sub_1C0007860 @ 0x1C0007860 (sub_1C0007860.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 */

__int64 __fastcall sub_1C00AA924(_DWORD *a1, IRP *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( a1[243] || a1[245] || a1[244] )
    v2 = -2147483631;
  else
    a1[12] = 4;
  return sub_1C0003440(a2, 0, v2);
}
