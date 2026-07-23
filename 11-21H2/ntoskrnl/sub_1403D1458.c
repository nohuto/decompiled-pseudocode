/*
 * XREFs of sub_1403D1458 @ 0x1403D1458
 * Callers:
 *     sub_1403D0FE0 @ 0x1403D0FE0 (sub_1403D0FE0.c)
 *     sub_14053C908 @ 0x14053C908 (sub_14053C908.c)
 * Callees:
 *     sub_140258140 @ 0x140258140 (sub_140258140.c)
 */

char __fastcall sub_1403D1458(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 1160) = 0LL;
  sub_140258140((__int64)sub_1403D0750, a1, a2);
  return 1;
}
