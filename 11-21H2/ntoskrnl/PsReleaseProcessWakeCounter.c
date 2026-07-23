/*
 * XREFs of PsReleaseProcessWakeCounter @ 0x140668680
 * Callers:
 *     sub_140662E08 @ 0x140662E08 (sub_140662E08.c)
 *     sub_140665B68 @ 0x140665B68 (sub_140665B68.c)
 *     sub_1406A1CC0 @ 0x1406A1CC0 (sub_1406A1CC0.c)
 *     sub_1406EB880 @ 0x1406EB880 (sub_1406EB880.c)
 *     sub_14074E474 @ 0x14074E474 (sub_14074E474.c)
 *     sub_14078F094 @ 0x14078F094 (sub_14078F094.c)
 *     sub_1407A9ED0 @ 0x1407A9ED0 (sub_1407A9ED0.c)
 *     sub_1407EF930 @ 0x1407EF930 (sub_1407EF930.c)
 *     sub_14098A060 @ 0x14098A060 (sub_14098A060.c)
 *     sub_14098A13C @ 0x14098A13C (sub_14098A13C.c)
 * Callees:
 *     sub_1407AC250 @ 0x1407AC250 (sub_1407AC250.c)
 */

__int64 __fastcall PsReleaseProcessWakeCounter(__int64 a1)
{
  return sub_1407AC250(a1 & 0xFFFFFFFFFFFFFFF8uLL, -1, 1, 0LL);
}
