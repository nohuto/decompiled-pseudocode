/*
 * XREFs of KiAbThreadRemoveBoostsSlow @ 0x1403180D0
 * Callers:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14022F9A0 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KiAbThreadRemoveBoosts @ 0x140231260 (KiAbThreadRemoveBoosts.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     CcPinFileData @ 0x140263B20 (CcPinFileData.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x1402BD990 (KiAbEntryFreeAndEnableInterrupts.c)
 *     MiZeroPage @ 0x1402D0C80 (MiZeroPage.c)
 *     FsRtlCheckOplockEx2 @ 0x1402FDBE0 (FsRtlCheckOplockEx2.c)
 *     NtCancelTimer @ 0x14032E4C0 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x14032EAB4 (ExpSetTimerObject.c)
 *     KiAbCrossThreadRelease @ 0x1403CAF1C (KiAbCrossThreadRelease.c)
 *     MiSetPagesModified @ 0x140628E4C (MiSetPagesModified.c)
 *     MiDecommitHardwareEnclavePages @ 0x140647A30 (MiDecommitHardwareEnclavePages.c)
 * Callees:
 *     KiAbThreadUnboostCpuPriority @ 0x140318150 (KiAbThreadUnboostCpuPriority.c)
 *     KiAbThreadUnboostIoPriority @ 0x140318AF4 (KiAbThreadUnboostIoPriority.c)
 *     PsBoostThreadIoQoS @ 0x14031A99C (PsBoostThreadIoQoS.c)
 *     EtwTraceAutoBoostClearFloor @ 0x140467472 (EtwTraceAutoBoostClearFloor.c)
 */

__int64 __fastcall KiAbThreadRemoveBoostsSlow(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 result; // rax

  if ( (_DWORD)a3 )
  {
    v3 = a3;
    if ( (a3 & 0x40000000) != 0 )
      result = KiAbThreadUnboostIoPriority(BugCheckParameter1, 0LL);
    if ( v3 < 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter1 + 864));
      result = PsBoostThreadIoQoS(BugCheckParameter1, 1LL, a3);
    }
    if ( (v3 & 0x3FFFFFFF) != 0 )
      result = KiAbThreadUnboostCpuPriority(BugCheckParameter1);
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      return EtwTraceAutoBoostClearFloor(BugCheckParameter1, a2, (unsigned int)v3);
  }
  return result;
}
