/*
 * XREFs of sub_1403D20CC @ 0x1403D20CC
 * Callers:
 *     sub_1403A3060 @ 0x1403A3060 (sub_1403A3060.c)
 *     sub_1403A30B4 @ 0x1403A30B4 (sub_1403A30B4.c)
 *     sub_1403A34A0 @ 0x1403A34A0 (sub_1403A34A0.c)
 *     sub_1403D7560 @ 0x1403D7560 (sub_1403D7560.c)
 *     sub_1405352F0 @ 0x1405352F0 (sub_1405352F0.c)
 *     sub_140536D58 @ 0x140536D58 (sub_140536D58.c)
 * Callees:
 *     sub_1403A3520 @ 0x1403A3520 (sub_1403A3520.c)
 *     longjmp @ 0x1403DF970 (longjmp.c)
 */

__int64 __fastcall sub_1403D20CC(__int64 a1)
{
  int v1; // r8d

  v1 = *(_DWORD *)(a1 + 20);
  if ( v1 + 3 > (unsigned int)*(unsigned __int16 *)(a1 + 70) )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  *(_WORD *)(a1 + 20) += 4;
  return (unsigned int)*sub_1403A3520(*(_WORD *)(a1 + 58), v1);
}
