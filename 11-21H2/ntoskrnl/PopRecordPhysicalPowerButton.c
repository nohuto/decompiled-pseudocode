/*
 * XREFs of PopRecordPhysicalPowerButton @ 0x140989AB0
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1405D89F0 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1403697C8 (PopBsdHandleRequest.c)
 */

void __fastcall PopRecordPhysicalPowerButton(char a1)
{
  __int64 v2; // r8
  __int128 v3; // xmm0

  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  v2 = 1LL << ((dword_140C1F798 + dword_140C1F79C) & 0x3F);
  if ( a1 )
  {
    v3 = xmmword_140C1F7C0;
    *(_QWORD *)&PopBsdPhysicalPowerButtonInfo = MEMORY[0xFFFFF78000000014];
    ++DWORD2(PopBsdPhysicalPowerButtonInfo);
    qword_140C1F7A0 |= v2;
    WORD6(PopBsdPhysicalPowerButtonInfo) = MEMORY[0xFFFFF780000002C4];
    BYTE14(PopBsdPhysicalPowerButtonInfo) = PopBsdLastPowerWatchdogStage;
    qword_140C1F7A8 = MEMORY[0xFFFFF78000000014];
    ++dword_140C1F798;
    LOBYTE(xmmword_140C5ACF0) = PopBsdCurrentCsPhase;
    DWORD1(xmmword_140C5ACF0) = PopBsdTransitionLatestCheckpointId;
    DWORD2(xmmword_140C5ACF0) = PopBsdTransitionLatestCheckpointType;
    HIDWORD(xmmword_140C5ACF0) = PopBsdTransitionLatestCheckpointSeqNumber;
    HIBYTE(PopBsdPhysicalPowerButtonInfo) = HIBYTE(PopBsdPhysicalPowerButtonInfo) & 0xFC | PopBsdPowerWatchdogArmed & 1 | (2 * (PopBsdShutdownInProgress & 1));
  }
  else
  {
    v3 = 0LL;
    *(_QWORD *)&xmmword_140C5ACE0 = MEMORY[0xFFFFF78000000014];
    ++DWORD2(xmmword_140C5ACE0);
    qword_140C1F7A0 &= ~v2;
    ++dword_140C1F79C;
    WORD6(xmmword_140C5ACE0) = MEMORY[0xFFFFF780000002C4];
    qword_140C1F7B0 = MEMORY[0xFFFFF78000000014];
  }
  xmmword_140C5ACD0 = v3;
  if ( dword_140C1F798 < (unsigned int)dword_140C1F79C || (unsigned int)(dword_140C1F798 - dword_140C1F79C) > 1 )
    byte_140C1F7E8 = 1;
  PopBsdHandleRequest(4);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
