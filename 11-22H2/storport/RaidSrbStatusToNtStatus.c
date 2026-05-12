/*
 * XREFs of RaidSrbStatusToNtStatus @ 0x1C00083B8
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007B98 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitStartIo @ 0x1C0008F30 (RaUnitStartIo.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000FC84 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidBusEnumeratorProcessAtaInformation @ 0x1C00129E0 (RaidBusEnumeratorProcessAtaInformation.c)
 *     RaidBusEnumeratorProcessDeviceId @ 0x1C0012B50 (RaidBusEnumeratorProcessDeviceId.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0012FA4 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidBusEnumeratorProcess1667DeviceInquiry @ 0x1C00136C0 (RaidBusEnumeratorProcess1667DeviceInquiry.c)
 *     RaidBusEnumeratorProcessSupportedPages @ 0x1C0013C10 (RaidBusEnumeratorProcessSupportedPages.c)
 *     RaidBusEnumeratorProcessSerialNumber @ 0x1C0013EE0 (RaidBusEnumeratorProcessSerialNumber.c)
 *     RaUnitAsyncError @ 0x1C0016C64 (RaUnitAsyncError.c)
 *     RaidBusEnumeratorProcessInquiry @ 0x1C001A040 (RaidBusEnumeratorProcessInquiry.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C001E658 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C00385A8 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0038A6C (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidBusEnumeratorProcessBlockDeviceCharacteristics @ 0x1C003EC20 (RaidBusEnumeratorProcessBlockDeviceCharacteristics.c)
 *     RaidBusEnumeratorProcessProbeLunZero @ 0x1C003EC90 (RaidBusEnumeratorProcessProbeLunZero.c)
 *     TcglibEalExecuteCommandSync @ 0x1C005515C (TcglibEalExecuteCommandSync.c)
 *     RaidCancelIrp @ 0x1C005847C (RaidCancelIrp.c)
 *     RaidUnitCompleteResetRequest @ 0x1C00610B0 (RaidUnitCompleteResetRequest.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C00A1030 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C00A2B7C (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00A5C58 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C00A6490 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C00A6780 (RaidAdapterGetMiniportDumpInfo.c)
 *     StorGetNVMeIdentifyInfo @ 0x1C00AB8B4 (StorGetNVMeIdentifyInfo.c)
 *     StorSendMFNDCommand @ 0x1C00ADDB0 (StorSendMFNDCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidSrbStatusToNtStatus(char a1)
{
  unsigned int v1; // edx
  unsigned int v2; // edx
  unsigned int v3; // edx
  unsigned int v4; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx

  v1 = a1 & 0x3F;
  if ( v1 <= 0x15 )
  {
    if ( v1 == 21 )
      return 3221225488LL;
    v2 = v1 - 1;
    if ( !v2 )
      return 0LL;
    v3 = v2 - 4;
    if ( !v3 )
      return 2147483665LL;
    v4 = v3 - 1;
    if ( !v4 )
      return 3221225488LL;
    v6 = v4 - 2;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( !v7 )
        return 3221225653LL;
      v8 = v7 - 1;
      if ( !v8 )
        return 3221225629LL;
      v9 = v8 - 1;
      if ( !v9 )
        return 3221225653LL;
      v10 = v9 - 6;
      if ( v10 )
      {
        if ( v10 == 1 )
          return 2147483653LL;
        return 3221225861LL;
      }
    }
    return 3221225664LL;
  }
  v11 = v1 - 22;
  if ( !v11 )
    return 3221225473LL;
  v12 = v11 - 10;
  if ( !v12 )
    return 3221225664LL;
  v13 = v12 - 1;
  if ( !v13 )
    return 3221225664LL;
  v14 = v13 - 1;
  if ( !v14 )
    return 3221225488LL;
  v15 = v14 - 4;
  if ( !v15 )
    return 3221225626LL;
  v16 = v15 - 1;
  if ( !v16 )
    return 3221225473LL;
  v17 = v16 - 1;
  if ( !v17 )
    return 3221225485LL;
  if ( v17 != 16 )
    return 3221225861LL;
  return 3221226762LL;
}
