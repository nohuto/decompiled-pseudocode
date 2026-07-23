/*
 * XREFs of sub_1406EA8C0 @ 0x1406EA8C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlHashUnicodeString @ 0x14078C240 (RtlHashUnicodeString.c)
 */

__int64 __fastcall sub_1406EA8C0(__int64 a1)
{
  ULONG HashValue; // [rsp+30h] [rbp+8h] BYREF

  HashValue = 0;
  RtlHashUnicodeString((PCUNICODE_STRING)(a1 + 40), 1u, 0, &HashValue);
  return HashValue;
}
