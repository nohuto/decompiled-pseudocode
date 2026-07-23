/*
 * XREFs of TppGetCurrentThreadNumaNode @ 0x18001C39C
 * Callers:
 *     TppWorkerThread @ 0x180016A00 (TppWorkerThread.c)
 *     TppWorkInitialize @ 0x18001C310 (TppWorkInitialize.c)
 *     TpAllocWait @ 0x18001F9C0 (TpAllocWait.c)
 *     TpReserveTaskPost @ 0x1800708D8 (TpReserveTaskPost.c)
 *     TpAllocPoolInternal @ 0x180074674 (TpAllocPoolInternal.c)
 *     TppInitializeTimerSubQueue @ 0x180074BDC (TppInitializeTimerSubQueue.c)
 *     TpAllocIoCompletion @ 0x18007D500 (TpAllocIoCompletion.c)
 *     TppAllocAlpcCompletion @ 0x180081594 (TppAllocAlpcCompletion.c)
 *     TpAllocJobNotification @ 0x180085B30 (TpAllocJobNotification.c)
 *     RtlpTpIoAlloc @ 0x18012505C (RtlpTpIoAlloc.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x180123E80 (TppAdjustRunningThreadGoalWithLock.c)
 */

__int64 __fastcall TppGetCurrentThreadNumaNode(__int64 a1, _DWORD *a2, _BYTE *a3)
{
  unsigned __int64 Number; // rbp
  unsigned int v7; // r9d
  unsigned int v8; // esi
  unsigned __int16 Group; // r12
  int v10; // eax
  unsigned int v11; // edx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 result; // rax

  Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
  v7 = TppNumberNodes;
  v8 = TppNumberNodes;
  Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
  if ( !a1 || (v10 = *(_DWORD *)(a1 + 440), v7 = TppNumberNodes, !v10) )
    v10 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(a1 + 424) != v10 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
    TppAdjustRunningThreadGoalWithLock(a1);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
    v7 = TppNumberNodes;
  }
  v11 = 0;
  if ( v7 )
  {
    v12 = *(_QWORD *)(a1 + 48);
    while ( 1 )
    {
      if ( *(_WORD *)(v12 + 16LL * v11 + 8) == Group )
      {
        v13 = *(_QWORD *)(v12 + 16LL * v11);
        if ( _bittest64(&v13, Number) )
          break;
      }
      if ( ++v11 >= v7 )
        goto LABEL_10;
    }
    v8 = v11;
  }
LABEL_10:
  result = v8 < v7 ? v8 : 0;
  *a2 = result;
  if ( a3 )
    *a3 = Number;
  return result;
}
