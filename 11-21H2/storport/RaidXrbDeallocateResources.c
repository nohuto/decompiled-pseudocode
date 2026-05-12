/*
 * XREFs of RaidXrbDeallocateResources @ 0x1C000BDD4
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F28 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidUnitReleaseIrp @ 0x1C000BC60 (RaidUnitReleaseIrp.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000FB70 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0015F84 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C001D6D0 (RaidPnPPassToMiniPort.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C0037180 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0037644 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaAdapterStartPowerIo @ 0x1C0048664 (RaAdapterStartPowerIo.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C00519EC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidUnitCompleteResetRequest @ 0x1C00546E0 (RaidUnitCompleteResetRequest.c)
 *     StorUnitExecuteNvmeSrbComplete @ 0x1C0065BD0 (StorUnitExecuteNvmeSrbComplete.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0085B00 (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0085E24 (RaidAdapterFreeMiniportDumpInfo.c)
 *     StorGetNVMeIdentifyInfo @ 0x1C0086400 (StorGetNVMeIdentifyInfo.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0086F64 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C0089714 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C008BED4 (RaidAdapterDiagnosticIoctl.c)
 *     StorSendMFNDCommand @ 0x1C0091ACC (StorSendMFNDCommand.c)
 * Callees:
 *     RaidDmaPutScatterGatherList @ 0x1C000CD30 (RaidDmaPutScatterGatherList.c)
 *     RaidFreeRemappedScatterGatherListMdl @ 0x1C00582AC (RaidFreeRemappedScatterGatherListMdl.c)
 */

void __fastcall RaidXrbDeallocateResources(__int64 a1, int a2, __int64 a3)
{
  KIRQL v3; // bp
  __int64 v6; // rcx
  struct _MDL *v7; // rcx
  __int64 v8; // rax
  int v9; // edi
  bool v10; // di
  __int64 v11; // rdx

  if ( a1 )
  {
    v3 = 0;
    if ( *(_QWORD *)(a1 + 112) )
    {
      v8 = *(_QWORD *)(a1 + 168);
      if ( *(_BYTE *)(v8 + 2) == 40 )
        v9 = *(_DWORD *)(v8 + 24);
      else
        v9 = *(_DWORD *)(v8 + 12);
      v10 = (v9 & 0x40) == 0;
      if ( RaidVerifierEnabled )
        RaidFreeRemappedScatterGatherListMdl(a1);
      if ( !a2 )
        v3 = KfRaiseIrql(2u);
      LOBYTE(a3) = v10;
      RaidDmaPutScatterGatherList(*(_QWORD *)(a1 + 216) + 752LL, *(_QWORD *)(a1 + 112), a3);
      v11 = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 112) = 0LL;
      *(_QWORD *)(a1 + 144) = 0LL;
      if ( v11 )
      {
        RaidDmaPutScatterGatherList(*(_QWORD *)(a1 + 216) + 752LL, v11, 0LL);
        *(_QWORD *)(a1 + 152) = 0LL;
      }
      if ( !a2 )
        KeLowerIrql(v3);
    }
    v6 = *(_QWORD *)(a1 + 104);
    if ( v6 && (*(_BYTE *)(a1 + 16) & 1) != 0 )
    {
      if ( (*(_BYTE *)(v6 + 10) & 2) != 0 )
      {
        MmUnlockPages((PMDL)v6);
        v6 = *(_QWORD *)(a1 + 104);
      }
      IoFreeMdl((PMDL)v6);
      *(_QWORD *)(a1 + 104) = 0LL;
      *(_BYTE *)(a1 + 16) &= ~1u;
    }
    v7 = *(struct _MDL **)(a1 + 136);
    if ( v7 )
    {
      MmUnlockPages(v7);
      IoFreeMdl(*(PMDL *)(a1 + 136));
      *(_QWORD *)(a1 + 136) = 0LL;
    }
  }
}
