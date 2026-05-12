/*
 * XREFs of RaidAdapterExecuteXrb @ 0x1C0004060
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F28 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0004004 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000FB70 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0015F84 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C001D6D0 (RaidPnPPassToMiniPort.c)
 *     RaidAdapterProgramCryptoKeyRoutine @ 0x1C00359B0 (RaidAdapterProgramCryptoKeyRoutine.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C0037180 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0037644 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaAdapterStartPowerIo @ 0x1C0048664 (RaAdapterStartPowerIo.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C00519EC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaUnitStartResetIo @ 0x1C0052F6C (RaUnitStartResetIo.c)
 *     StorUnitExecuteNvmeSrb @ 0x1C00659C4 (StorUnitExecuteNvmeSrb.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0085B00 (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0085E24 (RaidAdapterFreeMiniportDumpInfo.c)
 *     StorGetNVMeIdentifyInfo @ 0x1C0086400 (StorGetNVMeIdentifyInfo.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0086F64 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C0089714 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C008BED4 (RaidAdapterDiagnosticIoctl.c)
 *     StorSendMFNDCommand @ 0x1C0091ACC (StorSendMFNDCommand.c)
 * Callees:
 *     RaidAdapterScatterGatherExecute @ 0x1C0003AD4 (RaidAdapterScatterGatherExecute.c)
 *     RaidDmaFlushDmaBuffers @ 0x1C0003C54 (RaidDmaFlushDmaBuffers.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00050F0 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x1C0036BEC (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 */

__int64 __fastcall RaidAdapterExecuteXrb(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  int v5; // edi
  __int64 v7; // rdx
  __int64 v8; // rdx
  int *v9; // rbp
  char v10; // di

  if ( !*(_BYTE *)(a1 + 4242) )
    return RaidAdapterPostScatterGatherExecute(a1, a2);
  v4 = a2[21];
  if ( *(_BYTE *)(v4 + 2) == 40 )
    v5 = *(_DWORD *)(v4 + 24);
  else
    v5 = *(_DWORD *)(v4 + 12);
  if ( (*(_BYTE *)(a1 + 4243) & 4) != 0 )
  {
    v8 = a2[13];
    v9 = (int *)(a1 + 752);
    v10 = (v5 & 0x40) != 0;
    if ( v8 )
      RaidDmaFlushDmaBuffers((int *)(a1 + 752), v8, v10);
    v7 = a2[17];
    if ( v7 )
      RaidDmaFlushDmaBuffers(v9, v7, v10);
    return RaidAdapterPostScatterGatherExecute(a1, a2);
  }
  if ( !a2[17] )
  {
    if ( (v5 & 0xC0) != 0 )
      return RaidAdapterScatterGatherExecute(a1, (__int64)a2);
    return RaidAdapterPostScatterGatherExecute(a1, a2);
  }
  return RaidAdapterScatterGatherExecuteBidirectionalRequest();
}
