/*
 * XREFs of sub_14025B940 @ 0x14025B940
 * Callers:
 *     <none>
 * Callees:
 *     RtlHashUnicodeString @ 0x14078C240 (RtlHashUnicodeString.c)
 */

__int64 __fastcall sub_14025B940(__int64 a1)
{
  ULONG HashValue; // [rsp+30h] [rbp+8h] BYREF

  HashValue = 0;
  RtlHashUnicodeString((PCUNICODE_STRING)(a1 + 40), 1u, 0, &HashValue);
  return HashValue;
}
