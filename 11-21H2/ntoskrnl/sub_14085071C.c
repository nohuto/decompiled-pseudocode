/*
 * XREFs of sub_14085071C @ 0x14085071C
 * Callers:
 *     sub_140B23A48 @ 0x140B23A48 (sub_140B23A48.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_14085075C @ 0x14085075C (sub_14085075C.c)
 */

__int64 __fastcall sub_14085071C(__int64 a1)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\SuperfetchScenarioNotify");
  return sub_14085075C(&DestinationString, 0LL, a1 + 64);
}
