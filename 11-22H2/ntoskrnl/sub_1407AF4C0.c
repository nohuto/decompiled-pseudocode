/*
 * XREFs of sub_1407AF4C0 @ 0x1407AF4C0
 * Callers:
 *     sub_1406EF620 @ 0x1406EF620 (sub_1406EF620.c)
 *     sub_1407AF0D4 @ 0x1407AF0D4 (sub_1407AF0D4.c)
 *     sub_1408513FC @ 0x1408513FC (sub_1408513FC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407AF4C0(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  return (*(unsigned __int16 *)(a6 + 2LL * (a1 & 3)) + __ROR4__(~a7, a2 % 0xF + 1))
       * (unsigned int)*(unsigned __int16 *)(a6 + 2LL * (((a1 & 3) + (unsigned __int8)(a3 / 3) + (_BYTE)a3 + 1) & 3));
}
