/*
 * XREFs of PipFreeBindingId @ 0x1409548A0
 * Callers:
 *     PipDeleteBindingId @ 0x140954704 (PipDeleteBindingId.c)
 *     PipDeleteBindingIds @ 0x140954794 (PipDeleteBindingIds.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PipFreeBindingId(UNICODE_STRING *P)
{
  RtlFreeUnicodeString(P + 1);
  ExFreePoolWithTag(P, 0x53706E50u);
}
