/*
 * XREFs of sub_1402D6A64 @ 0x1402D6A64
 * Callers:
 *     sub_140219130 @ 0x140219130 (sub_140219130.c)
 *     sub_14030097C @ 0x14030097C (sub_14030097C.c)
 *     sub_1407546B8 @ 0x1407546B8 (sub_1407546B8.c)
 * Callees:
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     RtlPrefixUnicodeString @ 0x14077F870 (RtlPrefixUnicodeString.c)
 */

bool __fastcall sub_1402D6A64(PCUNICODE_STRING String2)
{
  char v1; // al

  if ( KeGetCurrentIrql() >= 2u )
    v1 = String1.Length <= String2->Length && memcmp(String1.Buffer, String2->Buffer, String1.Length) == 0;
  else
    v1 = RtlPrefixUnicodeString(&String1, String2, 1u);
  return v1 != 0;
}
