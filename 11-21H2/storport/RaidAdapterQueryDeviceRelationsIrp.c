/*
 * XREFs of RaidAdapterQueryDeviceRelationsIrp @ 0x1C001A238
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C001A098 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaidAdapterReleaseStartIoLock @ 0x1C000BBF0 (RaidAdapterReleaseStartIoLock.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C000BC24 (RaidAdapterAcquireStartIoLock.c)
 *     RaForwardIrp @ 0x1C0017FB8 (RaForwardIrp.c)
 *     RaidNtStatusToStorStatus @ 0x1C00194BC (RaidNtStatusToStorStatus.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C001A598 (RaidpBuildAdapterBusRelations.c)
 *     RaidAdapterRescanBus @ 0x1C001A8B0 (RaidAdapterRescanBus.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x1C0031C04 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_qq @ 0x1C003C710 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C003C760 (WPP_SF_qqD.c)
 *     StorAdapterNVMeEnumerate @ 0x1C008607C (StorAdapterNVMeEnumerate.c)
 */

NTSTATUS __fastcall RaidAdapterQueryDeviceRelationsIrp(__int64 a1, PIRP Irp)
{
  unsigned __int16 v4; // r13
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v6; // rcx
  int v8; // esi
  __int64 v9; // rcx
  int v10; // esi
  unsigned __int16 *v11; // r14
  __int64 v12; // r12
  void (__fastcall *v13)(__int64, __int64, _QWORD, unsigned __int16 *, int); // r15
  int v14; // eax
  __int64 v15; // rcx
  _IO_STACK_LOCATION *v16; // rax
  int v17; // eax
  int v18; // esi
  signed __int32 v19[8]; // [rsp+0h] [rbp-80h] BYREF
  _BYTE v20[4]; // [rsp+30h] [rbp-50h] BYREF
  int v21; // [rsp+34h] [rbp-4Ch] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v23; // [rsp+40h] [rbp-40h] BYREF
  __int128 v24; // [rsp+58h] [rbp-28h] BYREF
  __int128 v25; // [rsp+68h] [rbp-18h] BYREF

  v21 = 0;
  v20[0] = 0;
  memset(&v23, 0, sizeof(v23));
  v4 = 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 14LL, &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids, a1, Irp);
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v22 = 0LL;
  if ( CurrentStackLocation->Parameters.Read.Length )
  {
    if ( StorEtwLoggingEnabled )
    {
      v24 = 0LL;
      IoGetActivityIdIrp(Irp, &v24);
      if ( (byte_1C00799E2 & 0x20) != 0 )
        McTemplateK0pd_EtwWriteTransfer(v6, &EventPnpRequestComplete, &v24, Irp, Irp->IoStatus.Status);
    }
    return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), Irp);
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 104) & 0x40) == 0
      && (__int64)(MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 4136)) > 300000000 )
    {
      *(_BYTE *)(a1 + 106) = 1;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 568) + 184LL) & 0x4000) != 0 )
    {
      v8 = StorAdapterNVMeEnumerate(a1);
      if ( StorEtwLoggingEnabled )
      {
        v25 = 0LL;
        IoGetActivityIdIrp(Irp, &v25);
        if ( (byte_1C00799E3 & 0x20) != 0 )
          McTemplateK0pd_EtwWriteTransfer(v9, &EventNVMeEnumerate, &v25, Irp, v8);
      }
      if ( v8 >= 0 )
        goto LABEL_19;
    }
    v10 = RaidAdapterRescanBus(a1, &v21, v20);
    if ( v10 >= 0 )
    {
LABEL_19:
      v10 = RaidpBuildAdapterBusRelations(a1, &v22);
      v21 = v10;
    }
    if ( v20[0] )
    {
      v11 = *(unsigned __int16 **)(a1 + 4712);
      *(_BYTE *)(a1 + 104) &= ~0x40u;
      *(_QWORD *)(a1 + 4712) = 0LL;
      if ( v11 )
        v4 = *v11;
      v12 = *(_QWORD *)(a1 + 4728);
      *(_QWORD *)(a1 + 4728) = 0LL;
      v13 = *(void (__fastcall **)(__int64, __int64, _QWORD, unsigned __int16 *, int))(a1 + 4720);
      *(_QWORD *)(a1 + 4720) = 0LL;
      *(_QWORD *)(a1 + 4700) = 0LL;
      _InterlockedOr(v19, 0);
      _InterlockedExchange((volatile __int32 *)(a1 + 4696), 0);
      if ( v13 )
      {
        RaidAdapterAcquireStartIoLock(a1, &v23);
        v14 = RaidNtStatusToStorStatus(v21);
        v13(*(_QWORD *)(a1 + 576) + 16LL, v12, v4, v11, v14);
        RaidAdapterReleaseStartIoLock(a1, &v23);
      }
    }
    Irp->IoStatus.Information = v22;
    Irp->IoStatus.Status = v10;
    if ( v10 < 0 )
    {
      v17 = RaidCompleteRequestEx(Irp, 0, v10);
    }
    else
    {
      if ( StorEtwLoggingEnabled )
      {
        v24 = 0LL;
        IoGetActivityIdIrp(Irp, &v24);
        if ( (byte_1C00799E2 & 0x20) != 0 )
          McTemplateK0pd_EtwWriteTransfer(v15, &EventPnpRequestComplete, &v24, Irp, v10);
      }
      v16 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v16[-1].MajorFunction = *(_OWORD *)&v16->MajorFunction;
      *(_OWORD *)&v16[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v16->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v16[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v16->Parameters.SetQuota + 6);
      v16[-1].FileObject = v16->FileObject;
      v16[-1].Control = 0;
      v17 = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), Irp);
    }
    v18 = v17;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(
        WPP_GLOBAL_Control->AttachedDevice,
        15LL,
        &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids,
        a1,
        Irp,
        v17);
    }
    return v18;
  }
}
