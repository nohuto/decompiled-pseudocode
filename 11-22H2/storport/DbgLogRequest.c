/*
 * XREFs of DbgLogRequest @ 0x1C0019198
 * Callers:
 *     RiNormalizeDeviceQueue @ 0x1C0004130 (RiNormalizeDeviceQueue.c)
 *     RaUnitScsiIrp @ 0x1C0004C30 (RaUnitScsiIrp.c)
 *     RaidStartIoPacket @ 0x1C00050F0 (RaidStartIoPacket.c)
 *     StorPortNotification @ 0x1C000E120 (StorPortNotification.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C000EA30 (RaidUnitPendingDpcRoutine.c)
 *     RaidResumeUnitQueue @ 0x1C0012630 (RaidResumeUnitQueue.c)
 *     RaidPauseAdapterQueue @ 0x1C0019048 (RaidPauseAdapterQueue.c)
 *     RaidResumeAdapterQueue @ 0x1C00190A0 (RaidResumeAdapterQueue.c)
 *     RaidUnitSubmitRequest @ 0x1C001F3F4 (RaidUnitSubmitRequest.c)
 *     RaidAdapterResetBus @ 0x1C00379D0 (RaidAdapterResetBus.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C003D540 (RaidResumeAndRestartAdapterQueues.c)
 *     RaidStallDeviceQueue @ 0x1C0040748 (RaidStallDeviceQueue.c)
 *     RaidUpdateZoneIoReceiveWithStatus @ 0x1C00409D8 (RaidUpdateZoneIoReceiveWithStatus.c)
 *     RaidUpdateZoneIoSubmission @ 0x1C0040C6C (RaidUpdateZoneIoSubmission.c)
 *     RaidPauseUnitQueue @ 0x1C0044AB0 (RaidPauseUnitQueue.c)
 *     StorPortBusy @ 0x1C0045840 (StorPortBusy.c)
 *     StorPortCompleteRequest @ 0x1C0045970 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C0045B10 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0045CA0 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x1C00463B0 (StorPortPause.c)
 *     StorPortPauseDevice @ 0x1C0046510 (StorPortPauseDevice.c)
 *     StorPortReady @ 0x1C0046890 (StorPortReady.c)
 *     StorPortResume @ 0x1C0046CA0 (StorPortResume.c)
 *     StorPortResumeDevice @ 0x1C0046DB0 (StorPortResumeDevice.c)
 *     StorpMarkDeviceFailed @ 0x1C0049684 (StorpMarkDeviceFailed.c)
 *     RaidCompleteMiniportRequestCallback @ 0x1C00587A8 (RaidCompleteMiniportRequestCallback.c)
 *     RaidLogRequestComplete @ 0x1C006086C (RaidLogRequestComplete.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C0060AD8 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0062F04 (RaidUnitSubmitResetRequest.c)
 * Callees:
 *     <none>
 */

void __fastcall DbgLogRequest(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rax
  __int64 v8; // rcx

  if ( a1 && *(_DWORD *)(a1 + 4868) && *(_QWORD *)(a1 + 4872) )
  {
    v7 = a7;
    v8 = *(_QWORD *)(a1 + 4872)
       + 48LL * ((unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 4864)) % *(_DWORD *)(a1 + 4868));
    *(_DWORD *)v8 = a2;
    if ( !a7 )
      v7 = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(v8 + 40) = v7;
    *(_QWORD *)(v8 + 24) = a5;
    *(_QWORD *)(v8 + 32) = a6;
    *(_QWORD *)(v8 + 8) = a3;
    *(_QWORD *)(v8 + 16) = a4;
  }
}
