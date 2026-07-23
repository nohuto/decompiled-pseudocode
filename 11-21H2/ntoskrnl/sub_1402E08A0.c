/*
 * XREFs of sub_1402E08A0 @ 0x1402E08A0
 * Callers:
 *     sub_1406DF998 @ 0x1406DF998 (sub_1406DF998.c)
 *     sub_1406E6000 @ 0x1406E6000 (sub_1406E6000.c)
 *     sub_14078B9BC @ 0x14078B9BC (sub_14078B9BC.c)
 *     sub_14078D764 @ 0x14078D764 (sub_14078D764.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     RtlHashUnicodeString @ 0x14078C240 (RtlHashUnicodeString.c)
 */

__int64 __fastcall sub_1402E08A0(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  ULONG HashValue; // [rsp+48h] [rbp+10h] BYREF

  HashValue = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlHashUnicodeString(&DestinationString, 1u, 0, &HashValue);
  return HashValue % 0xD;
}
