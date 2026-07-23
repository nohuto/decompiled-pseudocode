/*
 * XREFs of sub_1407F4F60 @ 0x1407F4F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407F4F60(__int64 a1, int a2, __int64 a3)
{
  *(_BYTE *)a3 = 6;
  *(_BYTE *)(a3 + 1) = *(_BYTE *)(a1 + 2);
  *(_WORD *)(a3 + 2) = *(_WORD *)(a1 + 4);
  *(_DWORD *)(a3 + 4) = a2;
  *(_DWORD *)(a3 + 8) = *(_DWORD *)(a1 + 8);
  return 0LL;
}
