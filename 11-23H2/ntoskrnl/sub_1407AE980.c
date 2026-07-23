/*
 * XREFs of sub_1407AE980 @ 0x1407AE980
 * Callers:
 *     sub_1406EF5A0 @ 0x1406EF5A0 (sub_1406EF5A0.c)
 *     sub_1407AED14 @ 0x1407AED14 (sub_1407AED14.c)
 *     sub_1408507EC @ 0x1408507EC (sub_1408507EC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407AE980(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  return __ROR4__(a7, a4 % 0x1F + 1)
       + (unsigned int)*(unsigned __int16 *)(a6 + 2 * (a1 & 3))
       * __ROR4__(*(_DWORD *)(a6 + 4LL * (((unsigned __int8)(a1 >> 1) - 1) & 1)) ^ a7, a3 % 0x1F + 1);
}
