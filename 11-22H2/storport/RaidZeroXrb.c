/*
 * XREFs of RaidZeroXrb @ 0x1C0004AA4
 * Callers:
 *     StorRemoveIoGatewayItem @ 0x1C0003010 (StorRemoveIoGatewayItem.c)
 *     StorSubmitIoGatewayItem @ 0x1C0004920 (StorSubmitIoGatewayItem.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007B98 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000FC84 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0012FA4 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidUnitAllocateResources @ 0x1C0018AC4 (RaidUnitAllocateResources.c)
 *     StorNextIoGatewayItem @ 0x1C0019328 (StorNextIoGatewayItem.c)
 *     RaidPnPPassToMiniPort @ 0x1C0019810 (RaidPnPPassToMiniPort.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C001E658 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C00385A8 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0038A6C (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaAdapterStartPowerIo @ 0x1C004B4C4 (RaAdapterStartPowerIo.c)
 *     TcglibEalExecuteCommandSync @ 0x1C005515C (TcglibEalExecuteCommandSync.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0062F04 (RaidUnitSubmitResetRequest.c)
 *     StorUnitExecuteNvmeSrb @ 0x1C0074478 (StorUnitExecuteNvmeSrb.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C00A1030 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C00A2B7C (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00A5C58 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C00A6490 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C00A6780 (RaidAdapterGetMiniportDumpInfo.c)
 *     StorGetNVMeIdentifyInfo @ 0x1C00AB8B4 (StorGetNVMeIdentifyInfo.c)
 *     StorSendMFNDCommand @ 0x1C00ADDB0 (StorSendMFNDCommand.c)
 * Callees:
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 */

__int64 __fastcall RaidZeroXrb(__int64 a1, __int64 a2, unsigned int a3, void *a4)
{
  __int64 v4; // rdi
  __int64 result; // rax

  *(_BYTE *)(a1 + 16) &= 0x9Cu;
  v4 = *(_QWORD *)(a1 + 784);
  result = 0xFFFFLL;
  *(_DWORD *)a1 = 523124044;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_WORD *)(a1 + 18) = -1;
  *(_BYTE *)(a1 + 20) = -1;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 696) = 0LL;
  *(_QWORD *)(a1 + 704) = 0LL;
  *(_QWORD *)(a1 + 712) = 0LL;
  *(_QWORD *)(a1 + 720) = 0LL;
  *(_DWORD *)(a1 + 744) = a3;
  *(_QWORD *)(a1 + 760) = a4;
  if ( a4 )
    result = (__int64)memset_0(a4, 0, a3);
  *(_BYTE *)(a1 + 16) &= ~0x80u;
  *(_BYTE *)(a1 + 17) &= 0xF0u;
  *(_QWORD *)(a1 + 768) = 0LL;
  *(_DWORD *)(a1 + 748) = 0;
  *(_DWORD *)(a1 + 776) = 0;
  *(_QWORD *)(a1 + 784) = v4;
  return result;
}
