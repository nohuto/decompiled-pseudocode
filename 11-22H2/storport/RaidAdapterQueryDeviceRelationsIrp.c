/*
 * XREFs of RaidAdapterQueryDeviceRelationsIrp @ 0x1C0015938
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C0015794 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidAdapterReleaseStartIoLock @ 0x1C0007568 (RaidAdapterReleaseStartIoLock.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C000759C (RaidAdapterAcquireStartIoLock.c)
 *     RaidNtStatusToStorStatus @ 0x1C000D988 (RaidNtStatusToStorStatus.c)
 *     RaForwardIrp @ 0x1C0013754 (RaForwardIrp.c)
 *     RaidAdapterRescanBus @ 0x1C0015C98 (RaidAdapterRescanBus.c)
 *     RaidpBuildAdapterBusRelations @ 0x1C00182F0 (RaidpBuildAdapterBusRelations.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x1C0032248 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_qq @ 0x1C003EAA4 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C003EAF4 (WPP_SF_qqD.c)
 *     StorAdapterNVMeEnumerate @ 0x1C00AB530 (StorAdapterNVMeEnumerate.c)
 */

NTSTATUS __fastcall RaidAdapterQueryDeviceRelationsIrp(__int64 a1, PIRP Irp)
{
  unsigned __int16 v4; // r13
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v6; // rcx
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // rcx
  int v11; // esi
  unsigned __int16 *v12; // r14
  __int64 v13; // r12
  void (__fastcall *v14)(__int64, __int64, _QWORD, unsigned __int16 *, int); // r15
  int v15; // eax
  __int64 v16; // rcx
  _IO_STACK_LOCATION *v17; // rax
  int v18; // eax
  int v19; // esi
  signed __int32 v20[8]; // [rsp+0h] [rbp-80h] BYREF
  _BYTE v21[4]; // [rsp+30h] [rbp-50h] BYREF
  int v22; // [rsp+34h] [rbp-4Ch] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v24; // [rsp+40h] [rbp-40h] BYREF
  __int128 v25; // [rsp+58h] [rbp-28h] BYREF
  __int128 v26; // [rsp+68h] [rbp-18h] BYREF

  v22 = 0;
  v21[0] = 0;
  memset(&v24, 0, sizeof(v24));
  v4 = 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 14LL, &WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids, a1, Irp);
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v23 = 0LL;
  if ( CurrentStackLocation->Parameters.Read.Length )
  {
    if ( StorEtwLoggingEnabled )
    {
      v25 = 0LL;
      IoGetActivityIdIrp(Irp, &v25);
      if ( (byte_1C0092A02 & 0x20) != 0 )
        McTemplateK0pd_EtwWriteTransfer(v6, &EventPnpRequestComplete, &v25, Irp, Irp->IoStatus.Status);
    }
    return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), Irp);
  }
  if ( (*(_BYTE *)(a1 + 104) & 0x40) == 0 && (__int64)(MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 4200)) > 300000000 )
    *(_BYTE *)(a1 + 106) = 1;
  v8 = a1;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 568) + 184LL) & 0x4000) != 0 )
  {
    v9 = StorAdapterNVMeEnumerate(a1);
    if ( StorEtwLoggingEnabled )
    {
      v26 = 0LL;
      IoGetActivityIdIrp(Irp, &v26);
      if ( (byte_1C0092A03 & 0x40) != 0 )
        McTemplateK0pd_EtwWriteTransfer(v10, &EventNVMeEnumerate, &v26, Irp, v9);
    }
    if ( v9 >= 0 )
      goto LABEL_20;
    v8 = a1;
  }
  v11 = RaidAdapterRescanBus(v8, &v22, v21);
  if ( v11 >= 0 )
  {
LABEL_20:
    v11 = RaidpBuildAdapterBusRelations(a1, &v23);
    v22 = v11;
  }
  if ( v21[0] )
  {
    v12 = *(unsigned __int16 **)(a1 + 4776);
    *(_BYTE *)(a1 + 104) &= ~0x40u;
    *(_QWORD *)(a1 + 4776) = 0LL;
    if ( v12 )
      v4 = *v12;
    v13 = *(_QWORD *)(a1 + 4792);
    *(_QWORD *)(a1 + 4792) = 0LL;
    v14 = *(void (__fastcall **)(__int64, __int64, _QWORD, unsigned __int16 *, int))(a1 + 4784);
    *(_QWORD *)(a1 + 4784) = 0LL;
    *(_QWORD *)(a1 + 4764) = 0LL;
    _InterlockedOr(v20, 0);
    _InterlockedExchange((volatile __int32 *)(a1 + 4760), 0);
    if ( v14 )
    {
      RaidAdapterAcquireStartIoLock(a1, &v24);
      v15 = RaidNtStatusToStorStatus(v22);
      v14(*(_QWORD *)(a1 + 576) + 16LL, v13, v4, v12, v15);
      RaidAdapterReleaseStartIoLock(a1, &v24);
    }
  }
  Irp->IoStatus.Information = v23;
  Irp->IoStatus.Status = v11;
  if ( v11 < 0 )
  {
    v18 = RaidCompleteRequestEx(Irp, 0, v11);
  }
  else
  {
    if ( StorEtwLoggingEnabled )
    {
      v25 = 0LL;
      IoGetActivityIdIrp(Irp, &v25);
      if ( (byte_1C0092A02 & 0x20) != 0 )
        McTemplateK0pd_EtwWriteTransfer(v16, &EventPnpRequestComplete, &v25, Irp, v11);
    }
    v17 = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v17[-1].MajorFunction = *(_OWORD *)&v17->MajorFunction;
    *(_OWORD *)&v17[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v17->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v17[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v17->Parameters.SetQuota + 6);
    v17[-1].FileObject = v17->FileObject;
    v17[-1].Control = 0;
    v18 = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), Irp);
  }
  v19 = v18;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 15LL, &WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids, a1, Irp, v18);
  }
  return v19;
}
