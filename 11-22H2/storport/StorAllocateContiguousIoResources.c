/*
 * XREFs of StorAllocateContiguousIoResources @ 0x1C000826C
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007B98 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000FC84 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0012FA4 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidUnitAllocateResources @ 0x1C0018AC4 (RaidUnitAllocateResources.c)
 *     RaidPnPPassToMiniPort @ 0x1C0019810 (RaidPnPPassToMiniPort.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C001E658 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaInitializePower @ 0x1C0034170 (RaInitializePower.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C00385A8 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0038A6C (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     StorPortGetUncachedExtension @ 0x1C0045FE0 (StorPortGetUncachedExtension.c)
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
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StorAllocateContiguousIoResources(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 ContiguousNodeMemory; // rax
  __int64 v11; // rcx
  __int64 v13; // rax
  __int64 v14[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v15; // [rsp+80h] [rbp+18h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  v15 = 0LL;
  v3 = a1 + 24;
  v4 = *(_QWORD *)(a3 + 4248);
  v6 = *(_QWORD *)(a3 + 760);
  v7 = *(_QWORD *)(a3 + 4256);
  v14[0] = v4;
  v8 = *(_QWORD *)(a3 + 4240);
  if ( !*(_QWORD *)(a3 + 5544) )
    v3 = a1;
  v16 = v7;
  if ( *(_BYTE *)(a3 + 768) && *(_DWORD *)(a3 + 788) == 3 )
  {
    v9 = v3;
    ContiguousNodeMemory = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, _QWORD, _DWORD, _QWORD, unsigned int, __int64 *))(*(_QWORD *)(v6 + 8) + 272LL))(
                             v6,
                             v14,
                             &v16,
                             v3,
                             0,
                             0LL,
                             0x80000000,
                             &v15);
  }
  else
  {
    v9 = v3;
    ContiguousNodeMemory = MmAllocateContiguousNodeMemory(v3, v4, v7, v8, 4, 0x80000000);
  }
  v11 = ContiguousNodeMemory;
  if ( ContiguousNodeMemory )
  {
    if ( *(_QWORD *)(a3 + 5544) )
    {
      v13 = v9 + ContiguousNodeMemory - 24;
      *(_QWORD *)(v11 + 832) = v13;
      *(_OWORD *)v13 = 0LL;
      *(_QWORD *)(v13 + 16) = 0LL;
    }
    else
    {
      *(_QWORD *)(ContiguousNodeMemory + 832) = 0LL;
    }
    *(_QWORD *)(v11 + 24) = v15;
    *(_DWORD *)(v11 + 16) = v3;
  }
  return v11;
}
