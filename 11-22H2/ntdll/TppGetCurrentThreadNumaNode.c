/*
 * XREFs of TppGetCurrentThreadNumaNode @ 0x180033DE4
 * Callers:
 *     TppWorkInitialize @ 0x180033354 (TppWorkInitialize.c)
 *     TppWorkerThread @ 0x180035760 (TppWorkerThread.c)
 *     TppAllocAlpcCompletion @ 0x18004B9D4 (TppAllocAlpcCompletion.c)
 *     TpAllocIoCompletion @ 0x18004BE60 (TpAllocIoCompletion.c)
 *     TpAllocPoolInternal @ 0x18004C170 (TpAllocPoolInternal.c)
 *     TppInitializeTimerSubQueue @ 0x18004D258 (TppInitializeTimerSubQueue.c)
 *     TpAllocWait @ 0x18004DAE0 (TpAllocWait.c)
 *     TpReserveTaskPost @ 0x18004FA10 (TpReserveTaskPost.c)
 *     TpAllocJobNotification @ 0x180050CA0 (TpAllocJobNotification.c)
 *     RtlpTpIoAlloc @ 0x180126AAC (RtlpTpIoAlloc.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x1801258C0 (TppAdjustRunningThreadGoalWithLock.c)
 */

void __fastcall TppGetCurrentThreadNumaNode(__int64 a1, int *a2, _BYTE *a3, _WORD *a4)
{
  unsigned __int64 Number; // r12
  int v9; // r15d
  int Group; // ebp
  int v11; // eax
  int v12; // edx
  __int64 v13; // r9
  __int64 v14; // rax

  Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
  v9 = TppNumberNodes;
  Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
  if ( !a1 || (v11 = *(_DWORD *)(a1 + 440)) == 0 )
    v11 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(a1 + 424) != v11 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
    TppAdjustRunningThreadGoalWithLock(a1);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
  }
  v12 = 0;
  if ( TppNumberNodes )
  {
    v13 = *(_QWORD *)(a1 + 48);
    while ( 1 )
    {
      if ( *(_WORD *)(v13 + 16LL * (unsigned int)(Group + TppMaximumGroups * v12) + 8) == (_WORD)Group )
      {
        v14 = *(_QWORD *)(v13 + 16LL * (unsigned int)(Group + TppMaximumGroups * v12));
        if ( _bittest64(&v14, Number) )
          break;
      }
      if ( ++v12 >= (unsigned int)TppNumberNodes )
        goto LABEL_13;
    }
    v9 = v12;
  }
LABEL_13:
  *a2 = v9;
  if ( a3 )
    *a3 = Number;
  if ( a4 )
    *a4 = Group;
}
