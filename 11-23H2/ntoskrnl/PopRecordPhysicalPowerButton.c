/*
 * XREFs of PopRecordPhysicalPowerButton @ 0x1409814A0
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1405995E0 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x14032D618 (PopBsdHandleRequest.c)
 */

void __fastcall PopRecordPhysicalPowerButton(char a1)
{
  __int64 v2; // r8
  __int128 v3; // xmm0

  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  v2 = 1LL << ((dword_140C39FB8 + dword_140C39FBC) & 0x3F);
  if ( a1 )
  {
    v3 = xmmword_140C39FE0;
    *(_QWORD *)&PopBsdPhysicalPowerButtonInfo = MEMORY[0xFFFFF78000000014];
    ++DWORD2(PopBsdPhysicalPowerButtonInfo);
    qword_140C39FC0 |= v2;
    WORD6(PopBsdPhysicalPowerButtonInfo) = MEMORY[0xFFFFF780000002C4];
    BYTE14(PopBsdPhysicalPowerButtonInfo) = PopBsdLastPowerWatchdogStage;
    qword_140C39FC8 = MEMORY[0xFFFFF78000000014];
    ++dword_140C39FB8;
    LOBYTE(xmmword_140C6AE10) = PopBsdCurrentCsPhase;
    *(_QWORD *)((char *)&xmmword_140C6AE10 + 4) = __PAIR64__(
                                                    PopBsdTransitionLatestCheckpointType,
                                                    PopBsdTransitionLatestCheckpointId);
    HIDWORD(xmmword_140C6AE10) = PopBsdTransitionLatestCheckpointSeqNumber;
    HIBYTE(PopBsdPhysicalPowerButtonInfo) = HIBYTE(PopBsdPhysicalPowerButtonInfo) & 0xFC | PopBsdPowerWatchdogArmed & 1 | (2 * (PopBsdShutdownInProgress & 1));
  }
  else
  {
    v3 = 0LL;
    *(_QWORD *)&xmmword_140C6AE00 = MEMORY[0xFFFFF78000000014];
    ++DWORD2(xmmword_140C6AE00);
    qword_140C39FC0 &= ~v2;
    ++dword_140C39FBC;
    WORD6(xmmword_140C6AE00) = MEMORY[0xFFFFF780000002C4];
    qword_140C39FD0 = MEMORY[0xFFFFF78000000014];
  }
  xmmword_140C6ADF0 = v3;
  if ( dword_140C39FB8 < (unsigned int)dword_140C39FBC || (unsigned int)(dword_140C39FB8 - dword_140C39FBC) > 1 )
    byte_140C3A008 = 1;
  PopBsdHandleRequest(4u);
  PopReleaseRwLock(&PopBsdUpdateLock);
}
