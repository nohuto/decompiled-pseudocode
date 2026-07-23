/*
 * XREFs of ExpSingleStringCheck @ 0x140B6229C
 * Callers:
 *     ExpStringCheck @ 0x140B61FB8 (ExpStringCheck.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     RtlComputeCrc32 @ 0x14032D240 (RtlComputeCrc32.c)
 */

ULONG32 __fastcall ExpSingleStringCheck(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return RtlComputeCrc32(0, DestinationString.Buffer, DestinationString.Length);
}
