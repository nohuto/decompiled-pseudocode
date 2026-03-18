/*
 * XREFs of HalpFindTimer @ 0x14037B658
 * Callers:
 *     HalpTimerQueryCycleCounter @ 0x14037A450 (HalpTimerQueryCycleCounter.c)
 *     HalpTimerFindIdealWatchdog @ 0x14037A4AC (HalpTimerFindIdealWatchdog.c)
 *     HalpTimerSelectRoles @ 0x14037A8FC (HalpTimerSelectRoles.c)
 *     HalpTimerFindIdealClockSource @ 0x14037AF18 (HalpTimerFindIdealClockSource.c)
 *     HalpTimerNoteHpetMaskingBehavior @ 0x14037AFFC (HalpTimerNoteHpetMaskingBehavior.c)
 *     HalpTimerFindBestAlwaysOnTimer @ 0x14037B3C0 (HalpTimerFindBestAlwaysOnTimer.c)
 *     HalpTimerFindIdealPerformanceCounterSource @ 0x14037B460 (HalpTimerFindIdealPerformanceCounterSource.c)
 *     HalpTimerSaveProcessorFrequency @ 0x14037B548 (HalpTimerSaveProcessorFrequency.c)
 *     HalpTscAdvSynchLeader @ 0x14038ADF0 (HalpTscAdvSynchLeader.c)
 *     HalpTscSynchronization @ 0x14039A820 (HalpTscSynchronization.c)
 *     HalpTimerInitializeEarlyStallSource @ 0x1403A38E4 (HalpTimerInitializeEarlyStallSource.c)
 *     HalpInitializeTimers @ 0x1403A39D4 (HalpInitializeTimers.c)
 *     HalpTimerConfigureQpcBypass @ 0x1403B2A74 (HalpTimerConfigureQpcBypass.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403B6070 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x14050C760 (HalpTimerMeasureProcessorsWorker.c)
 * Callees:
 *     <none>
 */

ULONG_PTR *__fastcall HalpFindTimer(int a1, int a2, int a3, int a4, char a5)
{
  ULONG_PTR *v9; // r8
  ULONG_PTR *v10; // rdx
  ULONG_PTR *v11; // rsi
  ULONG_PTR *v12; // rbp
  ULONG_PTR *v13; // r9
  ULONG_PTR *v14; // r14
  int v15; // eax
  int v16; // r11d
  ULONG_PTR v18; // rax
  ULONG_PTR v19; // rcx

  if ( !(_DWORD)HalpRegisteredTimerCount )
    return 0LL;
  v9 = (ULONG_PTR *)HalpRegisteredTimers;
  v10 = 0LL;
  while ( v9 != &HalpRegisteredTimers )
  {
    v11 = v9;
    v12 = v9;
    v13 = v9;
    v14 = v10;
    v9 = (ULONG_PTR *)*v9;
    v15 = *((_DWORD *)v11 + 46);
    if ( ((v15 & 0x100) == 0 || (a5 & 4) == 0)
      && (v15 & 1) == 0
      && ((v15 & 4) == 0 || (a5 & 1) != 0)
      && (!a1 || a1 == *((_DWORD *)v13 + 57)) )
    {
      v16 = *((_DWORD *)v13 + 56);
      if ( (a2 & v16) == a2 && (v16 & a3) == 0 && (!a4 || (v16 & a4) != 0) )
      {
        if ( v10 )
        {
          v18 = v11[24];
          v19 = v10[24];
          if ( (a5 & 2) != 0 )
          {
            v10 = v12;
            if ( v18 >= v19 )
              v10 = v14;
          }
          else if ( v18 > v19 )
          {
            v10 = v13;
          }
        }
        else
        {
          v10 = v13;
        }
      }
    }
  }
  if ( (a5 & 4) != 0 && v10 )
    *((_DWORD *)v10 + 46) |= 0x100u;
  return v10;
}
