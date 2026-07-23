/*
 * XREFs of _raise_excf @ 0x1403E5BC0
 * Callers:
 *     sub_1403E54DC @ 0x1403E54DC (sub_1403E54DC.c)
 * Callees:
 *     sub_1403E5930 @ 0x1403E5930 (sub_1403E5930.c)
 */

__int64 __fastcall raise_excf(
        unsigned int *a1,
        unsigned __int64 *a2,
        char a3,
        int a4,
        unsigned int *a5,
        unsigned int *a6)
{
  return sub_1403E5930(a1, a2, a3, a4, a5, a6, 1);
}
