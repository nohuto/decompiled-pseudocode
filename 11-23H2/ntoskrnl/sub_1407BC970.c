/*
 * XREFs of sub_1407BC970 @ 0x1407BC970
 * Callers:
 *     sub_1406EF5A0 @ 0x1406EF5A0 (sub_1406EF5A0.c)
 *     sub_1407AED14 @ 0x1407AED14 (sub_1407AED14.c)
 *     sub_1408507EC @ 0x1408507EC (sub_1408507EC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407BC970(char a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  return a7 ^ (unsigned int)(*(_DWORD *)(a6 + 4LL * (a1 & 1)) ^ *(_DWORD *)(a6 + 4LL * (((a1 & 1) - 1) & 1)));
}
