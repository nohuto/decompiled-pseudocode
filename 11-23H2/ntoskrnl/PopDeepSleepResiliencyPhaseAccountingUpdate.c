/*
 * XREFs of PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x14028EBC8
 * Callers:
 *     PopDeepSleepClearDisengageReason @ 0x14028E9EC (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepSetDisengageReason @ 0x14028EAD8 (PopDeepSleepSetDisengageReason.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x140598AD0 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x140598BEC (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 */

__int64 __fastcall PopDeepSleepResiliencyPhaseAccountingUpdate(int a1, char a2)
{
  __int64 v2; // r15
  unsigned int v3; // edi
  unsigned int v5; // ebx
  int v6; // esi
  KIRQL v7; // al
  __int16 v8; // bp
  unsigned __int64 v9; // r14
  __int64 result; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v12; // rdx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v15; // zf

  v2 = a1;
  v3 = 0;
  v5 = 0;
  v6 = 1 << a1;
  v7 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  v8 = dword_140C3CABC;
  v9 = v7;
  if ( (v6 & dword_140C3CABC) != 0 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v12 = v6 & 3;
    if ( a2 )
    {
      *(LARGE_INTEGER *)&PopCsResiliencyStats[8 * v2 + 160] = PerformanceCounter;
      if ( (v6 & 3) != 0 )
      {
        if ( (v8 & 0x40) != 0 )
          v5 = 64;
        if ( (v8 & 0x7BC) != 0 )
          v5 |= 0x7BCu;
      }
      else if ( (v6 & 0x40) != 0 && (v8 & 0x7BC) != 0 )
      {
        v5 = 1980;
      }
      LOBYTE(v12) = 1;
      PopDeepSleepResiliencyPhaseAccountingEnd(v5, v12, PopCsResiliencyStats);
    }
    else
    {
      *(_QWORD *)&PopCsResiliencyStats[8 * v2 + 248] += PerformanceCounter.QuadPart
                                                      - *(_QWORD *)&PopCsResiliencyStats[8 * v2 + 160];
      *(_QWORD *)&PopCsResiliencyStats[8 * v2 + 160] = 0LL;
      if ( (v6 & 3) != 0 )
      {
        if ( (PopDeepSleepDisengageReasonMask & 3) == 0 )
        {
          v3 = 64;
          if ( (PopDeepSleepDisengageReasonMask & 0x40) == 0 )
            v3 = 2044;
        }
      }
      else if ( (v6 & 0x40) != 0 && (PopDeepSleepDisengageReasonMask & 0x40) == 0 )
      {
        v3 = 1980;
      }
      LOBYTE(v12) = 1;
      PopDeepSleepResiliencyPhaseAccountingBegin(v3, v12, PopCsResiliencyStats);
    }
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)&PopCsResiliencyStatsLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v9 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v15 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v15 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v9);
  return result;
}
