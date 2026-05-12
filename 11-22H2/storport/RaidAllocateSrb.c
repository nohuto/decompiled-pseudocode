/*
 * XREFs of RaidAllocateSrb @ 0x1C00079E4
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007B98 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000FC84 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0012FA4 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidBusEnumeratorAllocateReportLunsResources @ 0x1C001634C (RaidBusEnumeratorAllocateReportLunsResources.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C0016A94 (RaidBusEnumeratorAllocateUnitResources.c)
 *     RaidPnPPassToMiniPort @ 0x1C0019810 (RaidPnPPassToMiniPort.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C001E658 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C001ECDC (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaUnitAtaPassThroughIoctl @ 0x1C002531A (RaUnitAtaPassThroughIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C00385A8 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0038A6C (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     TcglibEalAllocateIfRecvCommand @ 0x1C0054C10 (TcglibEalAllocateIfRecvCommand.c)
 *     TcglibEalAllocateIfSendCommand @ 0x1C0054E88 (TcglibEalAllocateIfSendCommand.c)
 *     RaUnitSmartDataIoctl @ 0x1C005EF34 (RaUnitSmartDataIoctl.c)
 *     RaidUnitAbortSrb @ 0x1C0060D08 (RaidUnitAbortSrb.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1C00618BC (RaidUnitLogSenseCommandSrb.c)
 *     RaidUnitResetTarget @ 0x1C0062324 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C00625DC (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C00628FC (RaidUnitSendSrbProtocolCommandSynchronously.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C00A1030 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C00A2B7C (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00A5C58 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C00A6490 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C00A6780 (RaidAdapterGetMiniportDumpInfo.c)
 *     StorGetNVMeIdentifyInfo @ 0x1C00AB8B4 (StorGetNVMeIdentifyInfo.c)
 *     StorSendMFNDCommand @ 0x1C00ADDB0 (StorSendMFNDCommand.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 */

__int64 __fastcall RaidAllocateSrb(__int64 a1, unsigned int a2, char a3, char a4)
{
  __int64 v4; // r10
  unsigned int v6; // ebx
  int v7; // edi
  __int64 Pool; // rax
  bool v10; // zf

  v4 = 0LL;
  if ( a3 != 1 )
    return RaidAllocatePool(64LL, 88LL, 1918067026LL, a1);
  if ( a2 > 0x17 )
  {
    if ( a2 == 32 )
      goto LABEL_6;
    if ( a2 != 37 )
    {
      if ( a2 == 38 || a2 == 39 || a2 == 42 )
        goto LABEL_6;
      v10 = a2 == 43;
LABEL_29:
      if ( v10 )
        goto LABEL_6;
      return v4;
    }
    goto LABEL_14;
  }
  if ( a2 == 23 )
  {
LABEL_14:
    v6 = 168;
    goto LABEL_15;
  }
  if ( a2 )
  {
    if ( a2 == 2 || a2 == 9 )
      goto LABEL_6;
    if ( a2 != 10 )
    {
      if ( a2 != 16 )
      {
        v10 = a2 == 19;
        goto LABEL_29;
      }
LABEL_6:
      v6 = 144;
      v7 = 0;
      goto LABEL_7;
    }
    v6 = 232;
LABEL_15:
    v7 = 1;
LABEL_7:
    Pool = RaidAllocatePool(64LL, v6, 1918067026LL, a1);
    v4 = Pool;
    if ( Pool )
    {
      *(_BYTE *)(Pool + 2) = 40;
      *(_WORD *)Pool = 8;
      *(_DWORD *)(Pool + 8) = 1397899864;
      *(_DWORD *)(Pool + 12) = 1;
      *(_DWORD *)(Pool + 16) = v6;
      *(_DWORD *)(Pool + 20) = a2;
      *(_WORD *)(Pool + 36) = 2;
      *(_DWORD *)(Pool + 52) = 128;
      *(_DWORD *)(Pool + 56) = v7;
      *(_WORD *)(Pool + 128) = 1;
      *(_DWORD *)(Pool + 132) = 4;
      if ( v7 )
        *(_DWORD *)(Pool + 120) = 144;
    }
    return v4;
  }
  if ( (a4 & 1) != 0 )
  {
    v6 = 184;
    goto LABEL_15;
  }
  return 0LL;
}
