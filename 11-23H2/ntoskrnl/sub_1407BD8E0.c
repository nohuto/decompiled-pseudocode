/*
 * XREFs of sub_1407BD8E0 @ 0x1407BD8E0
 * Callers:
 *     sub_1406EF570 @ 0x1406EF570 (sub_1406EF570.c)
 *     sub_1407AEB24 @ 0x1407AEB24 (sub_1407AEB24.c)
 *     sub_1408504EC @ 0x1408504EC (sub_1408504EC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407BD8E0(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7)
{
  return (a7 >> (a4 % 0xF + 1)) ^ (*(unsigned __int16 *)(a6 + 2LL * (a1 & 3))
                                 * __ROL4__(
                                     a7
                                   - *(unsigned __int16 *)(a6
                                                         + 2LL
                                                         * (((a1 & 3) + (unsigned __int8)(a2 / 3) + (_BYTE)a2 + 1) & 3)),
                                     a3 % 7 + 1));
}
