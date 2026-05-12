/*
 * XREFs of RaidResumeAdapterQueue @ 0x1C001E01C
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C00028C0 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C001DD00 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C00339A0 (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterSetPauseTimer @ 0x1C0037D08 (RaidAdapterSetPauseTimer.c)
 *     RaidCompletionDpcRoutine @ 0x1C00390D0 (RaidCompletionDpcRoutine.c)
 *     RaidPauseTimerDpcRoutine @ 0x1C003B180 (RaidPauseTimerDpcRoutine.c)
 *     StorPortCompleteRequest @ 0x1C0042D30 (StorPortCompleteRequest.c)
 *     StorPortPause @ 0x1C00437C0 (StorPortPause.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0014C50 (DbgLogRequest.c)
 *     StorResumeIoGateway @ 0x1C0059444 (StorResumeIoGateway.c)
 */

__int64 __fastcall RaidResumeAdapterQueue(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // edi
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = StorResumeIoGateway(a1, a2);
  v4 = v3;
  if ( (qword_1C00793A8 & 0x200) != 0 )
    DbgLogRequest(a1, 7, retaddr, v3, a1, *(unsigned int *)(a1 + 56), 0LL);
  return v4;
}
