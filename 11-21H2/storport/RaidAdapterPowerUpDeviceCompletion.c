/*
 * XREFs of RaidAdapterPowerUpDeviceCompletion @ 0x1C001DC30
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C000C76C (RaidIsAdapterControlSupported.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C0015084 (RaidAdapterSendPowerToMiniport.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C001DD00 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C003C710 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C003C760 (WPP_SF_qqD.c)
 *     McTemplateK0zqjdz_EtwWriteTransfer @ 0x1C0048544 (McTemplateK0zqjdz_EtwWriteTransfer.c)
 *     RaidPowerPassToMiniPort @ 0x1C00491FC (RaidPowerPassToMiniPort.c)
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
      &WPP_da8695fb3edb33e33ecd2adca73d6fb8_Traceguids,
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
    v6 = RaidAdapterSendPowerToMiniport((__int64)DeviceExtension);
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
          &WPP_da8695fb3edb33e33ecd2adca73d6fb8_Traceguids,
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
      if ( (byte_1C00799E6 & 0x40) != 0 )
        McTemplateK0zqjdz_EtwWriteTransfer(
          v12,
          v11,
          (unsigned int)&v13,
          DeviceExtension[574],
          *((_DWORD *)DeviceExtension + 14),
          (__int64)(DeviceExtension + 617),
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
      &WPP_da8695fb3edb33e33ecd2adca73d6fb8_Traceguids,
      DeviceExtension,
      Irp,
      Status);
  }
  return 3221225494LL;
}
