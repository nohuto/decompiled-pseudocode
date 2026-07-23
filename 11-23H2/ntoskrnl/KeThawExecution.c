/*
 * XREFs of KeThawExecution @ 0x14020D410
 * Callers:
 *     ExpWaitForBootDevices @ 0x140609C70 (ExpWaitForBootDevices.c)
 *     KdExitDebugger @ 0x140AB0008 (KdExitDebugger.c)
 * Callees:
 *     KiSendThawExecution @ 0x14020D210 (KiSendThawExecution.c)
 *     KiEndDebugAccumulation @ 0x14020E5F0 (KiEndDebugAccumulation.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KeThawExecution(char a1)
{
  char v2; // di
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rcx
  __int64 result; // rax
  struct _KPRCB *v6; // rcx
  _DWORD *v7; // r8
  int v8; // ett
  unsigned __int64 v9; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf

  v2 = 0;
  if ( (KiFreezeFlag & 8) == 0 )
    v2 = KdPortLocked;
  off_140C01B48();
  if ( !PoAllProcIntrDisabled )
  {
    *(LARGE_INTEGER *)(MmWriteableSharedUserData + 848) = KeQueryPerformanceCounter(0LL);
    KiInterruptTimeErrorAccumulator = 0LL;
  }
  KiSendThawExecution(1);
  v3 = (unsigned __int8)KiOldIrql;
  KiFreezeFlag = 0;
  KxReleaseSpinLock(&KiFreezeExecutionLock);
  if ( v2 )
    KxReleaseSpinLock(&KdDebuggerLock);
  v4 = __readcr4();
  if ( (v4 & 0x20080) != 0 )
  {
    __writecr4(v4 ^ 0x80);
    __writecr4(v4);
  }
  else
  {
    v9 = __readcr3();
    __writecr3(v9);
  }
  result = KiEndDebugAccumulation(KeGetCurrentPrcb());
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v3 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v12 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v3);
  if ( a1 )
  {
    v6 = KeGetCurrentPrcb();
    v7 = v6->SchedulerAssist;
    if ( v7 )
    {
      _m_prefetchw(v7);
      LODWORD(result) = *v7;
      do
      {
        v8 = result;
        result = (unsigned int)_InterlockedCompareExchange(v7, result & 0xFFDFFFFF, result);
      }
      while ( v8 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick(v6);
    }
    _enable();
  }
  return result;
}
