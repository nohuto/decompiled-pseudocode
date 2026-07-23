/*
 * XREFs of sub_140B0B5F8 @ 0x140B0B5F8
 * Callers:
 *     sub_140B0B314 @ 0x140B0B314 (sub_140B0B314.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     RtlComputeCrc32 @ 0x140369820 (RtlComputeCrc32.c)
 */

ULONG32 __fastcall sub_140B0B5F8(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return RtlComputeCrc32(0, DestinationString.Buffer, DestinationString.Length);
}
