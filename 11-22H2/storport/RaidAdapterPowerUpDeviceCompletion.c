/*
 * XREFs of RaidAdapterPowerUpDeviceCompletion @ 0x1C0010EF0
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C00075D8 (RaidIsAdapterControlSupported.c)
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C0010FC0 (RaidAdapterSendPowerToMiniport.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011250 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C003EAA4 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C003EAF4 (WPP_SF_qqD.c)
 *     McTemplateK0zqjdz_EtwWriteTransfer @ 0x1C004B374 (McTemplateK0zqjdz_EtwWriteTransfer.c)
 *     RaidPowerPassToMiniPort @ 0x1C004C25C (RaidPowerPassToMiniPort.c)
 */

__int64 __fastcall RaidAdapterPowerUpDeviceCompletion(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _QWORD *DeviceExtension; // rsi
  int Status; // edi
  int v6; // eax
  struct _IO_WORKITEM *WorkItem; // rbp
  _QWORD *Pool; // rax
  void *v10; // r14
  int v11; // edx
  int v12; // ecx
  __int128 v13; // [rsp+40h] [rbp-48h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      30LL,
      &WPP_bfabe38cf0023b35987f16eff51d2245_Traceguids,
      DeviceExtension,
      Irp);
  }
  if ( Irp->PendingReturned )
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  Status = Irp->IoStatus.Status;
  if ( Status < 0 )
    goto LABEL_22;
  if ( (unsigned int)RaidIsAdapterControlSupported((__int64)DeviceExtension, 6) )
  {
    v6 = RaidAdapterSendPowerToMiniport(DeviceExtension, Irp);
    Status = v6;
    if ( v6 != -2147483631 )
    {
      if ( v6 >= 0 )
      {
LABEL_9:
        RaidAdapterPowerUpDeviceCompletionLastStep(Irp);
        return 3221225494LL;
      }
LABEL_22:
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_qqD(
          WPP_GLOBAL_Control->AttachedDevice,
          31LL,
          &WPP_bfabe38cf0023b35987f16eff51d2245_Traceguids,
          DeviceExtension,
          Irp,
          Status);
      }
      goto LABEL_9;
    }
    WorkItem = IoAllocateWorkItem(DeviceObject);
    Pool = (_QWORD *)RaidAllocatePool(64LL, 16LL, 1230463314LL, (__int64)DeviceObject);
    v10 = Pool;
    if ( !WorkItem || !Pool )
    {
      Status = -1073741670;
      if ( WorkItem )
        IoFreeWorkItem(WorkItem);
      if ( v10 )
        ExFreePoolWithTag(v10, 0x49576152u);
      goto LABEL_22;
    }
    *Pool = WorkItem;
    Pool[1] = Irp;
    IoQueueWorkItem(WorkItem, RaidAdapterSendPowerToMiniportWorkItemRoutine, NormalWorkQueue, Pool);
    if ( StorEtwLoggingEnabled )
    {
      v13 = 0LL;
      IoGetActivityIdIrp(Irp, &v13);
      if ( byte_1C0092A06 < 0 )
        McTemplateK0zqjdz_EtwWriteTransfer(
          v12,
          v11,
          (unsigned int)&v13,
          DeviceExtension[582],
          *((_DWORD *)DeviceExtension + 14),
          (__int64)(DeviceExtension + 625),
          17);
    }
  }
  else
  {
    Status = RaidPowerPassToMiniPort(DeviceObject, Irp, RaidAdapterDevicePowerUpSrbComplete);
    if ( Status < 0 )
      goto LABEL_22;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      32LL,
      &WPP_bfabe38cf0023b35987f16eff51d2245_Traceguids,
      DeviceExtension,
      Irp,
      Status);
  }
  return 3221225494LL;
}
