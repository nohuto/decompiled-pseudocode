/*
 * XREFs of sub_1403D75CC @ 0x1403D75CC
 * Callers:
 *     sub_1403D0E30 @ 0x1403D0E30 (sub_1403D0E30.c)
 *     sub_1403D7560 @ 0x1403D7560 (sub_1403D7560.c)
 *     sub_140535070 @ 0x140535070 (sub_140535070.c)
 *     sub_1405351F0 @ 0x1405351F0 (sub_1405351F0.c)
 *     sub_1405353C0 @ 0x1405353C0 (sub_1405353C0.c)
 *     sub_140535670 @ 0x140535670 (sub_140535670.c)
 *     sub_1405368B0 @ 0x1405368B0 (sub_1405368B0.c)
 * Callees:
 *     sub_1403A3520 @ 0x1403A3520 (sub_1403A3520.c)
 *     longjmp @ 0x1403DF970 (longjmp.c)
 */

int *__fastcall sub_1403D75CC(__int64 a1, unsigned int a2)
{
  __int64 v2; // r10
  unsigned int v3; // r9d

  v2 = *(unsigned int *)(a1 + 116);
  v3 = *(unsigned __int16 *)(a1 + 2 * v2 + 68);
  if ( a2 > v3 || a2 + *(_DWORD *)(a1 + 120) > v3 )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  return sub_1403A3520(*(_WORD *)(a1 + 2 * v2 + 56), a2);
}
