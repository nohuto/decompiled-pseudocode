/*
 * XREFs of BiGetPartitionVhdFilePath @ 0x1408069BC
 * Callers:
 *     BiConvertNtDeviceToBootEnvironment @ 0x140806608 (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x1408066E0 (BiCreatePartitionDevice.c)
 *     BiGetNtPartitionPath @ 0x140807310 (BiGetNtPartitionPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x1408069EC (BiGetPartitionVhdFilePathFromUnicodeString.c)
 */

__int64 __fastcall BiGetPartitionVhdFilePath(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return BiGetPartitionVhdFilePathFromUnicodeString(&DestinationString);
}
