/*
 * XREFs of sub_1402A20D4 @ 0x1402A20D4
 * Callers:
 *     sub_140714594 @ 0x140714594 (sub_140714594.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1402A20D4(__int64 a1, char a2)
{
  bool result; // al

  result = (*(_DWORD *)(a1 + 1380) & 0x80) != 0;
  *(_DWORD *)(a1 + 1380) ^= ((unsigned __int8)*(_DWORD *)(a1 + 1380) ^ (unsigned __int8)(a2 << 7)) & 0x80;
  return result;
}
