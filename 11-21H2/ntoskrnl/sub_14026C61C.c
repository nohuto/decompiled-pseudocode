/*
 * XREFs of sub_14026C61C @ 0x14026C61C
 * Callers:
 *     sub_140213558 @ 0x140213558 (sub_140213558.c)
 *     sub_1402359C4 @ 0x1402359C4 (sub_1402359C4.c)
 *     sub_14024076C @ 0x14024076C (sub_14024076C.c)
 *     sub_14025BDC8 @ 0x14025BDC8 (sub_14025BDC8.c)
 *     sub_14026A28C @ 0x14026A28C (sub_14026A28C.c)
 *     sub_14026BE94 @ 0x14026BE94 (sub_14026BE94.c)
 *     sub_14026C124 @ 0x14026C124 (sub_14026C124.c)
 *     sub_14026C4CC @ 0x14026C4CC (sub_14026C4CC.c)
 *     sub_1402DAEB0 @ 0x1402DAEB0 (sub_1402DAEB0.c)
 *     sub_140308F00 @ 0x140308F00 (sub_140308F00.c)
 *     sub_140323D70 @ 0x140323D70 (sub_140323D70.c)
 *     sub_14038C4CC @ 0x14038C4CC (sub_14038C4CC.c)
 *     sub_1403D452C @ 0x1403D452C (sub_1403D452C.c)
 *     sub_1403D77D4 @ 0x1403D77D4 (sub_1403D77D4.c)
 *     MmProtectMdlSystemAddress @ 0x140585D50 (MmProtectMdlSystemAddress.c)
 *     sub_14059508C @ 0x14059508C (sub_14059508C.c)
 *     sub_140599780 @ 0x140599780 (sub_140599780.c)
 *     sub_1405A4C68 @ 0x1405A4C68 (sub_1405A4C68.c)
 *     sub_1405AF6F0 @ 0x1405AF6F0 (sub_1405AF6F0.c)
 *     sub_1405B2A90 @ 0x1405B2A90 (sub_1405B2A90.c)
 *     sub_1405C573C @ 0x1405C573C (sub_1405C573C.c)
 *     sub_1406F3408 @ 0x1406F3408 (sub_1406F3408.c)
 *     sub_1407BF070 @ 0x1407BF070 (sub_1407BF070.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14026C61C(char a1, __int64 a2)
{
  unsigned int v2; // ecx
  char v3; // al

  v2 = a1 & 7;
  v3 = *(_BYTE *)(a2 + 34) >> 6;
  if ( v3 )
  {
    if ( v3 == 2 )
      v2 |= 0x18u;
  }
  else
  {
    v2 |= 8u;
  }
  return v2;
}
