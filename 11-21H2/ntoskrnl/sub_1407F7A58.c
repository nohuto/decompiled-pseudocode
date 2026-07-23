/*
 * XREFs of sub_1407F7A58 @ 0x1407F7A58
 * Callers:
 *     sub_14067E828 @ 0x14067E828 (sub_14067E828.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1407F7A58(__int64 a1, __int64 a2)
{
  return (*(_DWORD *)(a1 + 160) & 0x8001) == 0 && (*(_BYTE *)(a2 + 12) & (unsigned __int8)byte_140C097BC) == 0;
}
