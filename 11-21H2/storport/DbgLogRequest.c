/*
 * XREFs of DbgLogRequest @ 0x1C0014C50
 * Callers:
 *     StorPortPauseDevice @ 0x1C0002540 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C00026B0 (StorPortResumeDevice.c)
 *     RaidPauseUnitQueue @ 0x1C000282C (RaidPauseUnitQueue.c)
 *     RaidUnitSubmitRequest @ 0x1C0009690 (RaidUnitSubmitRequest.c)
 *     RaUnitScsiIrp @ 0x1C0009800 (RaUnitScsiIrp.c)
 *     StorPortNotification @ 0x1C0010160 (StorPortNotification.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C0013A80 (RaidUnitPendingDpcRoutine.c)
 *     RaidResumeUnitQueue @ 0x1C0014698 (RaidResumeUnitQueue.c)
 *     RaidPauseAdapterQueue @ 0x1C0014BF8 (RaidPauseAdapterQueue.c)
 *     RaidResumeAdapterQueue @ 0x1C001E01C (RaidResumeAdapterQueue.c)
 *     RaidAdapterResetBus @ 0x1C0036654 (RaidAdapterResetBus.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C003B74C (RaidResumeAndRestartAdapterQueues.c)
 *     RaidStallDeviceQueue @ 0x1C003E090 (RaidStallDeviceQueue.c)
 *     StorPortBusy @ 0x1C0042C00 (StorPortBusy.c)
 *     StorPortCompleteRequest @ 0x1C0042D30 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C0042ED0 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0043060 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x1C00437C0 (StorPortPause.c)
 *     StorPortReady @ 0x1C0043A70 (StorPortReady.c)
 *     StorPortResume @ 0x1C0043E80 (StorPortResume.c)
 *     StorpMarkDeviceFailed @ 0x1C0046668 (StorpMarkDeviceFailed.c)
 *     RaidCompleteMiniportRequestCallback @ 0x1C004E4D8 (RaidCompleteMiniportRequestCallback.c)
 *     RaidLogRequestComplete @ 0x1C0053EFC (RaidLogRequestComplete.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C0054168 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0056138 (RaidUnitSubmitResetRequest.c)
 * Callees:
 *     <none>
 */

void __fastcall DbgLogRequest(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rax
  __int64 v8; // rcx

  if ( a1 && *(_DWORD *)(a1 + 4804) && *(_QWORD *)(a1 + 4808) )
  {
    v7 = a7;
    v8 = *(_QWORD *)(a1 + 4808)
       + 48LL * ((unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 4800)) % *(_DWORD *)(a1 + 4804));
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
