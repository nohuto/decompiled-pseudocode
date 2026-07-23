/*
 * XREFs of sub_140803D60 @ 0x140803D60
 * Callers:
 *     sub_140802BE0 @ 0x140802BE0 (sub_140802BE0.c)
 *     sub_1408038B4 @ 0x1408038B4 (sub_1408038B4.c)
 *     sub_14080397C @ 0x14080397C (sub_14080397C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140803D90 @ 0x140803D90 (sub_140803D90.c)
 */

__int64 __fastcall sub_140803D60(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return sub_140803D90(&DestinationString);
}
