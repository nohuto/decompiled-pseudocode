/*
 * XREFs of RaidSrbStatusToNtStatus @ 0x1C000C148
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F28 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaUnitStartIo @ 0x1C0004190 (RaUnitStartIo.c)
 *     RaUnitAsyncError @ 0x1C000BF68 (RaUnitAsyncError.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000FB70 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0015F84 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidBusEnumeratorProcessDeviceId @ 0x1C00175B0 (RaidBusEnumeratorProcessDeviceId.c)
 *     RaidBusEnumeratorProcessSupportedPages @ 0x1C0018430 (RaidBusEnumeratorProcessSupportedPages.c)
 *     RaidBusEnumeratorProcessSerialNumber @ 0x1C0018560 (RaidBusEnumeratorProcessSerialNumber.c)
 *     RaidBusEnumeratorProcess1667DeviceInquiry @ 0x1C0018900 (RaidBusEnumeratorProcess1667DeviceInquiry.c)
 *     RaidBusEnumeratorProcessInquiry @ 0x1C001E1A0 (RaidBusEnumeratorProcessInquiry.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C0037180 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0037644 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidBusEnumeratorProcessAtaInformation @ 0x1C003C9E0 (RaidBusEnumeratorProcessAtaInformation.c)
 *     RaidBusEnumeratorProcessBlockDeviceCharacteristics @ 0x1C003CAB0 (RaidBusEnumeratorProcessBlockDeviceCharacteristics.c)
 *     RaidBusEnumeratorProcessProbeLunZero @ 0x1C003CB20 (RaidBusEnumeratorProcessProbeLunZero.c)
 *     RaidCancelIrp @ 0x1C004E1A4 (RaidCancelIrp.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C00519EC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidUnitCompleteResetRequest @ 0x1C00546E0 (RaidUnitCompleteResetRequest.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0085B00 (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0085E24 (RaidAdapterFreeMiniportDumpInfo.c)
 *     StorGetNVMeIdentifyInfo @ 0x1C0086400 (StorGetNVMeIdentifyInfo.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0086F64 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C0089714 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C008BED4 (RaidAdapterDiagnosticIoctl.c)
 *     StorSendMFNDCommand @ 0x1C0091ACC (StorSendMFNDCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidSrbStatusToNtStatus(char a1)
{
  unsigned int v1; // edx
  unsigned int v2; // edx
  unsigned int v3; // edx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx

  v1 = a1 & 0x3F;
  if ( v1 > 0x15 )
  {
    if ( v1 != 22 )
    {
      if ( v1 <= 0x1F )
        return 3221225861LL;
      if ( v1 <= 0x21 )
        return 3221225664LL;
      if ( v1 == 34 )
        return 3221225488LL;
      if ( v1 == 38 )
        return 3221225626LL;
      if ( v1 != 39 )
      {
        if ( v1 == 40 )
          return 3221225485LL;
        if ( v1 != 56 )
          return 3221225861LL;
        return 3221226762LL;
      }
    }
    return 3221225473LL;
  }
  if ( v1 == 21 )
    return 3221225488LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 0LL;
  v3 = v2 - 4;
  if ( !v3 )
    return 2147483665LL;
  v4 = v3 - 3;
  if ( !v4 )
    return 3221225664LL;
  v5 = v4 - 1;
  if ( !v5 )
    return 3221225653LL;
  v6 = v5 - 1;
  if ( !v6 )
    return 3221225629LL;
  v7 = v6 - 1;
  if ( !v7 )
    return 3221225653LL;
  v8 = v7 - 6;
  if ( !v8 )
    return 3221225664LL;
  if ( v8 != 1 )
    return 3221225861LL;
  return 2147483653LL;
}
