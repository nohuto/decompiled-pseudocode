/*
 * XREFs of PopTransitionCheckpoint @ 0x1406825AC
 * Callers:
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x1406822E8 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopPowerInformationInternal @ 0x1407ED06C (PopPowerInformationInternal.c)
 *     PopGracefulShutdown @ 0x140AA0A60 (PopGracefulShutdown.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140289F90 (PsGetCurrentServerSilo.c)
 *     PsIsHostSilo @ 0x1402AF900 (PsIsHostSilo.c)
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

void __fastcall PopTransitionCheckpoint(int a1, int a2)
{
  __int64 CurrentServerSilo; // rax
  __int64 Pool2; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo(CurrentServerSilo) )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopTransitionCheckpointLock);
    if ( PopTransitionCheckpoints != &PopTransitionCheckpoints || a1 == 1 )
    {
      Pool2 = ExAllocatePool2(256LL, 40LL, 1346587472LL);
      v6 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 16) = PopTransitionCheckpointsSequenceNumber;
        *(_DWORD *)(Pool2 + 20) = a1;
        *(_DWORD *)(Pool2 + 24) = a2;
        *(_QWORD *)(Pool2 + 32) = MEMORY[0xFFFFF78000000008];
        v7 = (_QWORD *)qword_140C3F5E8;
        if ( *(PVOID **)qword_140C3F5E8 != &PopTransitionCheckpoints )
          __fastfail(3u);
        *v6 = &PopTransitionCheckpoints;
        v6[1] = v7;
        *v7 = v6;
        qword_140C3F5E8 = (__int64)v6;
      }
      PopBsdTransitionLatestCheckpointSeqNumber = PopTransitionCheckpointsSequenceNumber++;
      PopBsdTransitionLatestCheckpointId = a1;
      PopBsdTransitionLatestCheckpointType = a2;
    }
    PopReleaseRwLock(&PopTransitionCheckpointLock);
  }
}
