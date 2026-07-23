/*
 * XREFs of sub_14025D250 @ 0x14025D250
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeString @ 0x1407CAA80 (RtlCompareUnicodeString.c)
 */

_BOOL8 __fastcall sub_14025D250(__int64 a1, __int64 a2)
{
  return RtlCompareUnicodeString((PCUNICODE_STRING)(a1 + 40), (PCUNICODE_STRING)(a2 + 40), 1u) == 0;
}
