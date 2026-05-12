/*
 * XREFs of StorAllocateContiguousIoResources @ 0x1C000F9B4
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F28 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000FB70 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0015F84 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidUnitAllocateResources @ 0x1C001CE48 (RaidUnitAllocateResources.c)
 *     RaidPnPPassToMiniPort @ 0x1C001D6D0 (RaidPnPPassToMiniPort.c)
 *     RaInitializePower @ 0x1C003350C (RaInitializePower.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C0037180 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0037644 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     StorPortGetUncachedExtension @ 0x1C00433F0 (StorPortGetUncachedExtension.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C00519EC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0056138 (RaidUnitSubmitResetRequest.c)
 *     StorUnitExecuteNvmeSrb @ 0x1C00659C4 (StorUnitExecuteNvmeSrb.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0085B00 (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0085E24 (RaidAdapterFreeMiniportDumpInfo.c)
 *     StorGetNVMeIdentifyInfo @ 0x1C0086400 (StorGetNVMeIdentifyInfo.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0086F64 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaWmiPassToMiniPort @ 0x1C0089714 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C008BED4 (RaidAdapterDiagnosticIoctl.c)
 *     StorSendMFNDCommand @ 0x1C0091ACC (StorSendMFNDCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StorAllocateContiguousIoResources(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  __int64 v10; // rcx
  _QWORD v11[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  v12 = 0LL;
  v3 = a1 + 24;
  v4 = *(_QWORD *)(a3 + 4184);
  v6 = *(_QWORD *)(a3 + 752);
  v7 = *(_QWORD *)(a3 + 4192);
  v11[0] = v4;
  v8 = *(_QWORD *)(a3 + 4176);
  if ( !*(_QWORD *)(a3 + 5480) )
    v3 = a1;
  v13 = v7;
  if ( *(_BYTE *)(a3 + 760) && *(_DWORD *)(a3 + 780) == 3 )
    result = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64 *, _QWORD, _DWORD, _QWORD, unsigned int, __int64 *))(*(_QWORD *)(v6 + 8) + 272LL))(
               v6,
               v11,
               &v13,
               v3,
               0,
               0LL,
               0x80000000,
               &v12);
  else
    result = MmAllocateContiguousNodeMemory(v3, v4, v7, v8, 4, 0x80000000);
  if ( result )
  {
    if ( *(_QWORD *)(a3 + 5480) )
    {
      v10 = result + v3 - 24LL;
      *(_QWORD *)(result + 832) = v10;
      *(_OWORD *)v10 = 0LL;
      *(_QWORD *)(v10 + 16) = 0LL;
    }
    else
    {
      *(_QWORD *)(result + 832) = 0LL;
    }
    *(_QWORD *)(result + 24) = v12;
    *(_DWORD *)(result + 16) = v3;
  }
  return result;
}
