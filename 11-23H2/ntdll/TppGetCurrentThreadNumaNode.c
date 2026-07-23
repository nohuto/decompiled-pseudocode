/*
 * XREFs of TppGetCurrentThreadNumaNode @ 0x180033C84
 * Callers:
 *     TppWorkInitialize @ 0x1800331F4 (TppWorkInitialize.c)
 *     TppWorkerThread @ 0x180035600 (TppWorkerThread.c)
 *     TppAllocAlpcCompletion @ 0x18004B874 (TppAllocAlpcCompletion.c)
 *     TpAllocIoCompletion @ 0x18004BD00 (TpAllocIoCompletion.c)
 *     TpAllocPoolInternal @ 0x18004C010 (TpAllocPoolInternal.c)
 *     TppInitializeTimerSubQueue @ 0x18004D0F8 (TppInitializeTimerSubQueue.c)
 *     TpAllocWait @ 0x18004D980 (TpAllocWait.c)
 *     TpReserveTaskPost @ 0x18004F8B0 (TpReserveTaskPost.c)
 *     TpAllocJobNotification @ 0x180050B40 (TpAllocJobNotification.c)
 *     RtlpTpIoAlloc @ 0x180127F2C (RtlpTpIoAlloc.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x180126D40 (TppAdjustRunningThreadGoalWithLock.c)
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
