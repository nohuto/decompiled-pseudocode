/*
 * XREFs of sub_140246420 @ 0x140246420
 * Callers:
 *     sub_14026A818 @ 0x14026A818 (sub_14026A818.c)
 *     sub_1403D8D00 @ 0x1403D8D00 (sub_1403D8D00.c)
 *     sub_1407FD710 @ 0x1407FD710 (sub_1407FD710.c)
 *     sub_14082AFE0 @ 0x14082AFE0 (sub_14082AFE0.c)
 *     sub_140970C6C @ 0x140970C6C (sub_140970C6C.c)
 *     sub_140B05E40 @ 0x140B05E40 (sub_140B05E40.c)
 *     sub_140B1D5F4 @ 0x140B1D5F4 (sub_140B1D5F4.c)
 * Callees:
 *     sub_14026DC5C @ 0x14026DC5C (sub_14026DC5C.c)
 */

__int64 __fastcall sub_140246420(int a1, unsigned __int64 a2, __int64 a3)
{
  int v3; // r9d
  int v5; // r8d

  v3 = 9;
  if ( a1 != 13 )
    v3 = a1;
  v5 = 544;
  if ( ((v3 - 5) & 0xFFFFFFFB) != 0 )
  {
    if ( (unsigned int)(v3 - 14) > 2 && v3 != 8 && KeGetCurrentIrql() <= 1u )
      v5 = 545;
  }
  else
  {
    v5 = 560;
  }
  return sub_14026DC5C(
           (unsigned int)(a2 >> 9) & 0xFFFFFFF8,
           (unsigned int)((a2 + ((unsigned __int64)(a3 - 1) >> 3)) >> 9) & 0xFFFFFFF8,
           v5,
           v3,
           0);
}
