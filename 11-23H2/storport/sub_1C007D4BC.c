/*
 * XREFs of sub_1C007D4BC @ 0x1C007D4BC
 * Callers:
 *     sub_1C007C114 @ 0x1C007C114 (sub_1C007C114.c)
 *     sub_1C007C52C @ 0x1C007C52C (sub_1C007C52C.c)
 *     sub_1C007D458 @ 0x1C007D458 (sub_1C007D458.c)
 * Callees:
 *     sub_1C0055B8C @ 0x1C0055B8C (sub_1C0055B8C.c)
 *     sub_1C007CF64 @ 0x1C007CF64 (sub_1C007CF64.c)
 */

__int64 __fastcall sub_1C007D4BC(int **a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  sub_1C0055B8C(*a1, "SetTableColumns", a3, 23, *a4, a4[1]);
  return sub_1C007CF64(
           (__int64)a1,
           a2,
           a3,
           0x600000017LL,
           (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))sub_1C007C930,
           (__int64)a4,
           0LL,
           0LL,
           0LL,
           0LL);
}
