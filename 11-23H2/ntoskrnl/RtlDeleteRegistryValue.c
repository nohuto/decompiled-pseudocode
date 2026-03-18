/*
 * XREFs of RtlDeleteRegistryValue @ 0x140873D00
 * Callers:
 *     DifRtlDeleteRegistryValueWrapper @ 0x1405EB2A0 (DifRtlDeleteRegistryValueWrapper.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1409DD9B0 (PerfDiagpSaveActiveDCLLogFileName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14041C900 (ZwDeleteValueKey.c)
 *     RtlpGetRegistryHandle @ 0x1406C61C0 (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlDeleteRegistryValue(ULONG RelativeTo, PCWSTR Path, PCWSTR ValueName)
{
  NTSTATUS result; // eax
  NTSTATUS v6; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  result = RtlpGetRegistryHandle(RelativeTo, Path, 1, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, ValueName);
    v6 = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(KeyHandle);
    return v6;
  }
  return result;
}
