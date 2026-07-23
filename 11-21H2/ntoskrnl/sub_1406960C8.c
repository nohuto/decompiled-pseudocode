/*
 * XREFs of sub_1406960C8 @ 0x1406960C8
 * Callers:
 *     sub_140695FFC @ 0x140695FFC (sub_140695FFC.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 */

bool __fastcall sub_1406960C8(__int64 a1)
{
  return (*(_DWORD *)(a1 + 52) & 0x40) == 0 && !RtlPrefixUnicodeString(&stru_140001270, (PCUNICODE_STRING)(a1 + 32), 1u);
}
