/*
 * XREFs of sub_14094C238 @ 0x14094C238
 * Callers:
 *     sub_1406E2EEC @ 0x1406E2EEC (sub_1406E2EEC.c)
 *     sub_14094B864 @ 0x14094B864 (sub_14094B864.c)
 *     sub_14094CBE0 @ 0x14094CBE0 (sub_14094CBE0.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14094C238(char *P)
{
  void *v2; // rcx
  UNICODE_STRING *v3; // rdi
  __int64 v4; // rsi

  v2 = (void *)*((_QWORD *)P + 5);
  if ( v2 )
    ZwClose(v2);
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 24));
  v3 = (UNICODE_STRING *)(P + 48);
  v4 = 2LL;
  do
  {
    RtlFreeUnicodeString(v3++);
    --v4;
  }
  while ( v4 );
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 104));
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 120));
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 136));
  RtlFreeUnicodeString((PUNICODE_STRING)P + 10);
  ExFreePoolWithTag(P, 0);
}
