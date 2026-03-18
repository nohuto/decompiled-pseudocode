/*
 * XREFs of BiGetPartitionVhdFilePath @ 0x140808F3C
 * Callers:
 *     BiConvertNtDeviceToBootEnvironment @ 0x140808B88 (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x140808C60 (BiCreatePartitionDevice.c)
 *     BiGetNtPartitionPath @ 0x140809890 (BiGetNtPartitionPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140808F6C (BiGetPartitionVhdFilePathFromUnicodeString.c)
 */

__int64 __fastcall BiGetPartitionVhdFilePath(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return BiGetPartitionVhdFilePathFromUnicodeString(&DestinationString);
}
