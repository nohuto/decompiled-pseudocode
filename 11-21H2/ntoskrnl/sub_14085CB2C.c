/*
 * XREFs of sub_14085CB2C @ 0x14085CB2C
 * Callers:
 *     sub_14085CAE8 @ 0x14085CAE8 (sub_14085CAE8.c)
 *     sub_1409429D4 @ 0x1409429D4 (sub_1409429D4.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14085CB2C(UNICODE_STRING *P)
{
  RtlFreeUnicodeString(P + 1);
  ExFreePoolWithTag(P, 0x53706E50u);
}
