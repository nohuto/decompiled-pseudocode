/*
 * XREFs of RaidResumeAdapterQueue @ 0x1C00190A0
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011250 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterDeferredRoutine @ 0x1C0014550 (RaidAdapterDeferredRoutine.c)
 *     StorPortAdapterActiveCondition @ 0x1C001F5B0 (StorPortAdapterActiveCondition.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C0034610 (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterSetPauseTimer @ 0x1C0039174 (RaidAdapterSetPauseTimer.c)
 *     RaidCompletionDpcRoutine @ 0x1C003A6A0 (RaidCompletionDpcRoutine.c)
 *     RaidPauseTimerDpcRoutine @ 0x1C003CF70 (RaidPauseTimerDpcRoutine.c)
 *     StorPortCompleteRequest @ 0x1C0045970 (StorPortCompleteRequest.c)
 *     StorPortPause @ 0x1C00463B0 (StorPortPause.c)
 * Callees:
 *     StorResumeIoGateway @ 0x1C0019100 (StorResumeIoGateway.c)
 *     DbgLogRequest @ 0x1C0019198 (DbgLogRequest.c)
 */

__int64 __fastcall RaidResumeAdapterQueue(__int64 a1)
{
  unsigned int v2; // eax
  unsigned int v3; // edi
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v2 = StorResumeIoGateway();
  v3 = v2;
  if ( (qword_1C0092468 & 0x200) != 0 )
    DbgLogRequest(a1, 7, (_DWORD)retaddr, v2, a1, *(unsigned int *)(a1 + 56), 0LL);
  return v3;
}
