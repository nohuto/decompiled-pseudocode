/*
 * XREFs of IoGetAttachedDeviceReference @ 0x14025A100
 * Callers:
 *     CmpGetVolumeClusterSize @ 0x14068936C (CmpGetVolumeClusterSize.c)
 *     WmipForwardWmiIrp @ 0x1406C7480 (WmipForwardWmiIrp.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140701C08 (CmpVolumeManagerGetContextForFile.c)
 *     IopFilterResourceRequirementsCall @ 0x140790230 (IopFilterResourceRequirementsCall.c)
 *     WmipGetFilePDO @ 0x1407C398C (WmipGetFilePDO.c)
 *     WmipRegisterDevice @ 0x14086BF88 (WmipRegisterDevice.c)
 *     HalpQueryPccInterface @ 0x140935A90 (HalpQueryPccInterface.c)
 *     IoShutdownSystem @ 0x140A99B34 (IoShutdownSystem.c)
 *     IoBuildPoDeviceNotifyList @ 0x140A9E0F8 (IoBuildPoDeviceNotifyList.c)
 *     VfIrpSendSynchronousIrp @ 0x140ACDAD8 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     ObpIncrPointerCount @ 0x14025A244 (ObpIncrPointerCount.c)
 *     KxReleaseQueuedSpinLock @ 0x140260360 (KxReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140260F20 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14046018E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     ObpPushStackInfo @ 0x140582BD8 (ObpPushStackInfo.c)
 */

PDEVICE_OBJECT __stdcall IoGetAttachedDeviceReference(PDEVICE_OBJECT DeviceObject)
{
  __int64 v1; // r9
  unsigned __int8 CurrentIrql; // di
  char *v4; // rcx
  volatile __int64 *v5; // r8
  __int64 v6; // rdx
  struct _DEVICE_OBJECT *i; // rax
  _DWORD *SchedulerAssist; // r8
  unsigned __int8 v10; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      v1 = 4LL;
    else
      v1 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v1;
  }
  v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  v5 = (volatile __int64 *)*((_QWORD *)v4 + 1);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v4, *((_QWORD *)v4 + 1));
  }
  else
  {
    v6 = _InterlockedExchange64(v5, (__int64)v4);
    if ( v6 )
      KxWaitForLockOwnerShip(v4, v6, v5, v1);
  }
  for ( i = DeviceObject->AttachedDevice; i; i = i->AttachedDevice )
    DeviceObject = i;
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)DeviceObject - 48);
  ObpIncrPointerCount(&DeviceObject[-1].DeviceLock.Header.WaitListHead);
  KxReleaseQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( KiIrqlFlags )
  {
    v10 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v14 = (v13 & v12[5]) == 0;
      v12[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return DeviceObject;
}
