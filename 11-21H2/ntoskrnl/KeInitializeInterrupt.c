/*
 * XREFs of KeInitializeInterrupt @ 0x1403AF060
 * Callers:
 *     sub_1403AEF40 @ 0x1403AEF40 (sub_1403AEF40.c)
 * Callees:
 *     sub_1403AF0E8 @ 0x1403AF0E8 (sub_1403AF0E8.c)
 */

__int64 __fastcall KeInitializeInterrupt(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        char a8,
        char a9,
        int a10,
        char a11,
        int a12)
{
  return sub_1403AF0E8(a1, a2, a3, a4, a5, a6, 0LL, a7, a8, a9, a10, a11, a12);
}
