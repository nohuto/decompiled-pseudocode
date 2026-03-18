/*
 * XREFs of RtlWriteRegistryValue @ 0x1407D42E0
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x1405824F0 (KseKPSOHookDriverTargeted.c)
 *     RtlSetPortableOperatingSystem @ 0x1405AA1F0 (RtlSetPortableOperatingSystem.c)
 *     DifRtlWriteRegistryValueWrapper @ 0x1405EC500 (DifRtlWriteRegistryValueWrapper.c)
 *     EtwpEnumerateKeyProviders @ 0x140809074 (EtwpEnumerateKeyProviders.c)
 *     EtwpEnableAutoLoggerProvider @ 0x1408091D4 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpEnumerateAutologgerPath @ 0x14083BD48 (EtwpEnumerateAutologgerPath.c)
 *     EtwStartAutoLogger @ 0x14083BFA8 (EtwStartAutoLogger.c)
 *     RtlSetActiveTimeBias @ 0x14083F1E4 (RtlSetActiveTimeBias.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14083F980 (RtlpUpdateDynamicTimeZones.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x14085FBC0 (WmipSaveGuidSecurityDescriptor.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1409BD7CC (RtlpSetTimeZoneInformationWorker.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1409DD9B0 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     ExpSetTimeZoneInformation @ 0x1409F762C (ExpSetTimeZoneInformation.c)
 *     WheapCommitPolicy @ 0x140A09648 (WheapCommitPolicy.c)
 *     IopStoreBootDriveLetter @ 0x140B39740 (IopStoreBootDriveLetter.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     ZwSetValueKey @ 0x14041B960 (ZwSetValueKey.c)
 *     RtlpGetRegistryHandle @ 0x1406C61C0 (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlWriteRegistryValue(
        ULONG RelativeTo,
        PCWSTR Path,
        PCWSTR ValueName,
        ULONG ValueType,
        PVOID ValueData,
        ULONG ValueLength)
{
  NTSTATUS result; // eax
  NTSTATUS v10; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  result = RtlpGetRegistryHandle(RelativeTo, Path, 1, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, ValueName);
    v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, ValueType & 0xFFFFFF, ValueData, ValueLength);
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(KeyHandle);
    return v10;
  }
  return result;
}
