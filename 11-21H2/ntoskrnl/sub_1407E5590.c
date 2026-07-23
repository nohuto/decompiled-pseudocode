/*
 * XREFs of sub_1407E5590 @ 0x1407E5590
 * Callers:
 *     sub_1406A5770 @ 0x1406A5770 (sub_1406A5770.c)
 *     sub_14084CA10 @ 0x14084CA10 (sub_14084CA10.c)
 *     sub_14084CBB8 @ 0x14084CBB8 (sub_14084CBB8.c)
 *     sub_1409F8680 @ 0x1409F8680 (sub_1409F8680.c)
 *     sub_140B1CC84 @ 0x140B1CC84 (sub_140B1CC84.c)
 * Callees:
 *     sub_1407E5600 @ 0x1407E5600 (sub_1407E5600.c)
 */

__int64 __fastcall sub_1407E5590(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        volatile void *a5,
        int a6,
        char a7,
        volatile void *a8,
        int a9,
        char a10)
{
  SIZE_T Length; // [rsp+50h] [rbp-18h]

  LODWORD(Length) = a9;
  return sub_1407E5600(a1, 0, 0, a2, a3, a4, a5, a6, a7, a8, Length, a10);
}
