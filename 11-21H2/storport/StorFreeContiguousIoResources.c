/*
 * XREFs of StorFreeContiguousIoResources @ 0x1C000F988
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F28 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000FB70 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0015F84 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidUnitFreeResources @ 0x1C0019DC8 (RaidUnitFreeResources.c)
 *     RaidPnPPassToMiniPort @ 0x1C001D6D0 (RaidPnPPassToMiniPort.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C0037180 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0037644 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidDeleteAdapter @ 0x1C003956C (RaidDeleteAdapter.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C00519EC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidUnitCompleteResetRequest @ 0x1C00546E0 (RaidUnitCompleteResetRequest.c)
 *     RaFreeRaidResources @ 0x1C00589F8 (RaFreeRaidResources.c)
 *     StorFreeExtraIoResourceForGateway @ 0x1C0059138 (StorFreeExtraIoResourceForGateway.c)
 *     StorUnitExecuteNvmeSrbComplete @ 0x1C0065BD0 (StorUnitExecuteNvmeSrbComplete.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0085B00 (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0085E24 (RaidAdapterFreeMiniportDumpInfo.c)
 *     StorGetNVMeIdentifyInfo @ 0x1C0086400 (StorGetNVMeIdentifyInfo.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0086F64 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C0089714 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C008BED4 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterReleaseResources @ 0x1C008C850 (RaidAdapterReleaseResources.c)
 *     StorSendMFNDCommand @ 0x1C0091ACC (StorSendMFNDCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 */

void __fastcall StorFreeContiguousIoResources(__int64 a1, __int64 a2)
{
  char v2; // [rsp+20h] [rbp-18h]

  if ( *(_BYTE *)(a1 + 760) && *(_DWORD *)(a1 + 780) == 3 )
  {
    v2 = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, char))(*(_QWORD *)(*(_QWORD *)(a1 + 752) + 8LL) + 24LL))(
      *(_QWORD *)(a1 + 752),
      *(unsigned int *)(a2 + 16),
      *(_QWORD *)(a2 + 24),
      a2,
      v2);
  }
  else
  {
    MmFreeContiguousMemory((PVOID)a2);
  }
}
