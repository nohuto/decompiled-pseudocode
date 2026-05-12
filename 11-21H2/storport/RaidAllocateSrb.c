/*
 * XREFs of RaidAllocateSrb @ 0x1C000F74C
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001EC4 (RaUnitAtaPassThroughIoctl.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F28 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000FB70 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0015F84 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C001BD80 (RaidBusEnumeratorAllocateUnitResources.c)
 *     RaidBusEnumeratorAllocateReportLunsResources @ 0x1C001C2D8 (RaidBusEnumeratorAllocateReportLunsResources.c)
 *     RaidPnPPassToMiniPort @ 0x1C001D6D0 (RaidPnPPassToMiniPort.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1C002141C (RaidUnitLogSenseCommandSrb.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C0021860 (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C0037180 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0037644 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C00519EC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaUnitSmartDataIoctl @ 0x1C0052728 (RaUnitSmartDataIoctl.c)
 *     RaidUnitAbortSrb @ 0x1C0054338 (RaidUnitAbortSrb.c)
 *     RaidUnitResetTarget @ 0x1C0055598 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C0055850 (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C0055B6C (RaidUnitSendSrbProtocolCommandSynchronously.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0085B00 (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0085E24 (RaidAdapterFreeMiniportDumpInfo.c)
 *     StorGetNVMeIdentifyInfo @ 0x1C0086400 (StorGetNVMeIdentifyInfo.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0086F64 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C0089714 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C008BED4 (RaidAdapterDiagnosticIoctl.c)
 *     StorSendMFNDCommand @ 0x1C0091ACC (StorSendMFNDCommand.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 */

__int64 __fastcall RaidAllocateSrb(__int64 a1, unsigned int a2, char a3, char a4)
{
  __int64 result; // rax
  unsigned int v6; // edi
  int v7; // esi

  result = 0LL;
  if ( a3 != 1 )
    return RaidAllocatePool(64LL, 88LL, 1918067026LL, a1);
  if ( a2 <= 0x13 )
  {
    if ( a2 != 19 )
    {
      if ( !a2 )
      {
        if ( (a4 & 1) == 0 )
          return result;
        v6 = 184;
        goto LABEL_16;
      }
      if ( a2 != 2 && a2 != 9 )
      {
        if ( a2 == 10 )
        {
          v6 = 232;
          goto LABEL_16;
        }
        if ( a2 != 16 )
          return result;
      }
    }
LABEL_6:
    v6 = 144;
    v7 = 0;
    goto LABEL_7;
  }
  if ( a2 != 23 )
  {
    if ( a2 == 32 )
      goto LABEL_6;
    if ( a2 != 37 )
    {
      if ( a2 <= 0x25 || a2 > 0x27 && (a2 <= 0x29 || a2 > 0x2B) )
        return result;
      goto LABEL_6;
    }
  }
  v6 = 168;
LABEL_16:
  v7 = 1;
LABEL_7:
  result = RaidAllocatePool(64LL, v6, 1918067026LL, a1);
  if ( result )
  {
    *(_BYTE *)(result + 2) = 40;
    *(_WORD *)result = 8;
    *(_DWORD *)(result + 8) = 1397899864;
    *(_DWORD *)(result + 12) = 1;
    *(_DWORD *)(result + 16) = v6;
    *(_DWORD *)(result + 20) = a2;
    *(_WORD *)(result + 36) = 2;
    *(_DWORD *)(result + 52) = 128;
    *(_DWORD *)(result + 56) = v7;
    *(_WORD *)(result + 128) = 1;
    *(_DWORD *)(result + 132) = 4;
    if ( v7 )
      *(_DWORD *)(result + 120) = 144;
  }
  return result;
}
