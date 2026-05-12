/*
 * XREFs of RaidUnitSendSrbIoControlSynchronously @ 0x1C0021860
 * Callers:
 *     RaUnitStreamsIoctl @ 0x1C0021128 (RaUnitStreamsIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0021688 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C0052474 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitStorageQueryDeviceEndurancePropertyIoctl @ 0x1C005339C (RaUnitStorageQueryDeviceEndurancePropertyIoctl.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C0053504 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C005366C (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C0053958 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl @ 0x1C0053B14 (RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C008F264 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C000F74C (RaidAllocateSrb.c)
 *     RaSendIrpSynchronous @ 0x1C00145D0 (RaSendIrpSynchronous.c)
 *     StorFreeSynchronousScsiRequest @ 0x1C0021A54 (StorFreeSynchronousScsiRequest.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C0021AA0 (StorBuildSynchronousScsiRequest.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x1C0021CDC (PortSrbTranslateSrbToNtStatus.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaidUnitSendSrbIoControlSynchronously(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 (__fastcall *a5)(_QWORD),
        __int64 a6,
        int a7)
{
  __int64 v7; // r14
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 Srb; // rax
  __int64 v15; // r8
  __int64 v16; // rbx
  int v17; // edx
  __int64 v18; // rcx
  IRP *v19; // rax
  IRP *v20; // rsi
  __int64 v21; // rcx
  int Status; // edi
  __int128 v24; // [rsp+20h] [rbp-28h] BYREF

  v7 = *(_QWORD *)(a1 + 24);
  v12 = *(_QWORD *)(a1 + 8);
  v13 = 0LL;
  v24 = 0LL;
  Srb = RaidAllocateSrb(v12, 2u, *(_BYTE *)(v7 + 442), 0);
  v16 = Srb;
  if ( Srb )
  {
    v17 = a7 | 0x102;
    if ( *(_BYTE *)(Srb + 2) == 40 )
      *(_WORD *)(Srb + 38) = 32;
    else
      *(_BYTE *)(Srb + 9) = 32;
    if ( *(_BYTE *)(v7 + 442) == 1 )
    {
      *(_DWORD *)(Srb + 32) = -1;
      v13 = Srb;
      v18 = *(unsigned int *)(Srb + 52);
      *(_DWORD *)(Srb + 20) = 2;
      *(_DWORD *)(Srb + 24) = v17;
      *(_QWORD *)(Srb + 64) = a3;
      *(_DWORD *)(Srb + 60) = a4;
      *(_QWORD *)(Srb + 80) = a2;
      *(_DWORD *)(Srb + 40) = *(_DWORD *)(a1 + 1264);
      *(_BYTE *)(v18 + Srb + 8) = *(_BYTE *)(a1 + 96);
      *(_BYTE *)(v18 + Srb + 9) = *(_BYTE *)(a1 + 97);
      *(_BYTE *)(v18 + Srb + 10) = *(_BYTE *)(a1 + 98);
    }
    else
    {
      *(_BYTE *)(Srb + 2) = 2;
      *(_WORD *)Srb = 88;
      *(_DWORD *)(Srb + 12) = v17;
      *(_BYTE *)(Srb + 8) = -1;
      *(_QWORD *)(Srb + 24) = a3;
      *(_DWORD *)(Srb + 16) = a4;
      *(_QWORD *)(Srb + 48) = a2;
      *(_DWORD *)(Srb + 20) = *(_DWORD *)(a1 + 1264);
      *(_BYTE *)(Srb + 5) = *(_BYTE *)(a1 + 96);
      *(_BYTE *)(Srb + 6) = *(_BYTE *)(a1 + 97);
      *(_BYTE *)(Srb + 7) = *(_BYTE *)(a1 + 98);
    }
    v19 = (IRP *)StorBuildSynchronousScsiRequest(*(_QWORD *)(a1 + 8), Srb, v15, &v24);
    v20 = v19;
    if ( v19 )
    {
      if ( *(_BYTE *)(v7 + 442) == 1 )
      {
        v13 = v16;
        *(_QWORD *)(v16 + 80) = v19;
      }
      else
      {
        *(_QWORD *)(v16 + 48) = v19;
      }
      Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v19);
      if ( Status >= 0 )
      {
        Status = v20->IoStatus.Status;
        if ( Status >= 0 )
        {
          if ( !a5 || (Status = a5(*(unsigned int *)(a3 + 20)), Status >= 0) )
          {
            LOBYTE(v21) = *(_BYTE *)(v16 + 3);
            Status = PortSrbTranslateSrbToNtStatus(v21);
          }
        }
      }
      StorFreeSynchronousScsiRequest(v20);
    }
    else
    {
      Status = -1073741801;
    }
    if ( *(_BYTE *)(v7 + 442) == 1 )
    {
      if ( !v13 )
        v13 = v16;
      *(_QWORD *)(v13 + 80) = 0LL;
      *(_QWORD *)(v13 + 104) = 0LL;
    }
    else
    {
      *(_QWORD *)(v16 + 48) = 0LL;
      *(_QWORD *)(v16 + 56) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v16, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)Status;
}
