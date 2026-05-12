/*
 * XREFs of RaSendIrpSynchronous @ 0x1C00145D0
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001EC4 (RaUnitAtaPassThroughIoctl.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0017AEC (RaUnitDeviceUsageNotificationIrp.c)
 *     RaForwardIrpSynchronous @ 0x1C00182F8 (RaForwardIrpSynchronous.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C001B720 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1C002141C (RaidUnitLogSenseCommandSrb.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C0021860 (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaQueryInterface @ 0x1C004DD88 (RaQueryInterface.c)
 *     RaUnitSmartDataIoctl @ 0x1C0052728 (RaUnitSmartDataIoctl.c)
 *     RaUnitSmartReturnStatus @ 0x1C0052C4C (RaUnitSmartReturnStatus.c)
 *     RaidUnitResetTarget @ 0x1C0055598 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C0055850 (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C0055B6C (RaidUnitSendSrbProtocolCommandSynchronously.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaSendIrpSynchronous(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v5; // ebx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))&RiSignalCompletion;
  CurrentStackLocation[-1].Context = &Event;
  CurrentStackLocation[-1].Control = -32;
  v5 = IofCallDriver(DeviceObject, Irp);
  if ( v5 == 259 )
  {
    v5 = 0;
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  return v5;
}
