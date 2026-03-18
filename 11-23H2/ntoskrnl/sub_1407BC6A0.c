/*
 * XREFs of sub_1407BC6A0 @ 0x1407BC6A0
 * Callers:
 *     sub_1406EF570 @ 0x1406EF570 (sub_1406EF570.c)
 *     sub_1407AEB24 @ 0x1407AEB24 (sub_1407AEB24.c)
 *     sub_1408504EC @ 0x1408504EC (sub_1408504EC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407BC6A0(char a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  return a7 ^ (unsigned int)(*(_DWORD *)(a6 + 4LL * (a1 & 1)) ^ *(_DWORD *)(a6 + 4LL * (((a1 & 1) - 1) & 1)));
}
