/*
 * XREFs of BiGetPartitionVhdFilePath @ 0x140806C8C
 * Callers:
 *     BiConvertNtDeviceToBootEnvironment @ 0x1408068D8 (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x1408069B0 (BiCreatePartitionDevice.c)
 *     BiGetNtPartitionPath @ 0x1408075E0 (BiGetNtPartitionPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140806CBC (BiGetPartitionVhdFilePathFromUnicodeString.c)
 */

__int64 __fastcall BiGetPartitionVhdFilePath(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return BiGetPartitionVhdFilePathFromUnicodeString(&DestinationString);
}
