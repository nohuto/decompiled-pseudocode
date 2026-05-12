/*
 * XREFs of RaSendIrpSynchronous @ 0x1C0017514
 * Callers:
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C00133C4 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaForwardIrpSynchronous @ 0x1C0013B1C (RaForwardIrpSynchronous.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C00170B0 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C001ECDC (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaUnitAtaPassThroughIoctl @ 0x1C002531A (RaUnitAtaPassThroughIoctl.c)
 *     TcglibEalExecuteCommandSync @ 0x1C005515C (TcglibEalExecuteCommandSync.c)
 *     RaQueryInterface @ 0x1C00575C0 (RaQueryInterface.c)
 *     RaUnitSmartDataIoctl @ 0x1C005EF34 (RaUnitSmartDataIoctl.c)
 *     RaUnitSmartReturnStatus @ 0x1C005F444 (RaUnitSmartReturnStatus.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1C00618BC (RaidUnitLogSenseCommandSrb.c)
 *     RaidUnitResetTarget @ 0x1C0062324 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C00625DC (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C00628FC (RaidUnitSendSrbProtocolCommandSynchronously.c)
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
