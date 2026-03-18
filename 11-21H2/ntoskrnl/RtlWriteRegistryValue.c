/*
 * XREFs of RtlWriteRegistryValue @ 0x1406D76C0
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x14057F1F0 (KseKPSOHookDriverTargeted.c)
 *     RtlSetPortableOperatingSystem @ 0x1405E7040 (RtlSetPortableOperatingSystem.c)
 *     DifRtlWriteRegistryValueWrapper @ 0x14061C4B0 (DifRtlWriteRegistryValueWrapper.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x140807EA4 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     EtwStartAutoLogger @ 0x140817CD8 (EtwStartAutoLogger.c)
 *     EtwpEnumerateKeyProviders @ 0x140818934 (EtwpEnumerateKeyProviders.c)
 *     EtwpEnableAutoLoggerProvider @ 0x1408226C0 (EtwpEnableAutoLoggerProvider.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140836228 (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x1408364C4 (RtlSetActiveTimeBias.c)
 *     EtwpEnumerateAutologgerPath @ 0x1408515A8 (EtwpEnumerateAutologgerPath.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x140862E50 (WmipSaveGuidSecurityDescriptor.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1409BA71C (RtlpSetTimeZoneInformationWorker.c)
 *     ExpSetTimeZoneInformation @ 0x1409F76FC (ExpSetTimeZoneInformation.c)
 *     WheapCommitPolicy @ 0x140A0980C (WheapCommitPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     RtlpGetRegistryHandle @ 0x14077FDA0 (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlWriteRegistryValue(
        ULONG RelativeTo,
        PCWSTR Path,
        PCWSTR ValueName,
        ULONG ValueType,
        PVOID ValueData,
        ULONG ValueLength)
{
  const WCHAR *v7; // rsi
  NTSTATUS result; // eax
  NTSTATUS v10; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF

  KeyHandle = 0LL;
  v7 = ValueName;
  LOBYTE(ValueName) = 1;
  DestinationString = 0LL;
  result = RtlpGetRegistryHandle(RelativeTo, Path, ValueName, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, v7);
    v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, ValueType & 0xFFFFFF, ValueData, ValueLength);
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(KeyHandle);
    return v10;
  }
  return result;
}
