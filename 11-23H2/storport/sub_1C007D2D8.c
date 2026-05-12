/*
 * XREFs of sub_1C007D2D8 @ 0x1C007D2D8
 * Callers:
 *     sub_1C007D268 @ 0x1C007D268 (sub_1C007D268.c)
 *     sub_1C007DD78 @ 0x1C007DD78 (sub_1C007DD78.c)
 * Callees:
 *     sub_1C0055B8C @ 0x1C0055B8C (sub_1C0055B8C.c)
 *     sub_1C007CF64 @ 0x1C007CF64 (sub_1C007CF64.c)
 */

__int64 __fastcall sub_1C007D2D8(int **a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  sub_1C0055B8C(*a1, "GetTableColumns", a3, 22, *a4, a4[1]);
  return sub_1C007CF64(
           (__int64)a1,
           a2,
           a3,
           0x600000016LL,
           (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))sub_1C007C8A0,
           (__int64)a4,
           0LL,
           0LL,
           (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_1C007CAA0,
           (__int64)a4);
}
