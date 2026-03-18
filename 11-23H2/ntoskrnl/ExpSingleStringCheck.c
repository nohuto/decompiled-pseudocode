/*
 * XREFs of ExpSingleStringCheck @ 0x140B55428
 * Callers:
 *     ExpStringCheck @ 0x140B55144 (ExpStringCheck.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     RtlComputeCrc32 @ 0x14032D3E0 (RtlComputeCrc32.c)
 */

__int64 __fastcall ExpSingleStringCheck(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return RtlComputeCrc32(0, (char *)DestinationString.Buffer, DestinationString.Length);
}
