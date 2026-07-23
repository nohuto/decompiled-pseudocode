/*
 * XREFs of sub_1403D1850 @ 0x1403D1850
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403D1870 @ 0x1403D1870 (sub_1403D1870.c)
 */

__int64 __fastcall sub_1403D1850(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 8) = a1 + 33600;
  return sub_1403D1870();
}
