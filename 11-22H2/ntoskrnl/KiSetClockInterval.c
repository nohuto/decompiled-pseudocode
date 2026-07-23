/*
 * XREFs of KiSetClockInterval @ 0x1403B1914
 * Callers:
 *     ExpUpdateTimerConfigurationWorker @ 0x1403C24A0 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x140462020 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024B910 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14024CCA0 (RtlRbInsertNodeEx.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x1402C1C34 (KiSetClockTimerKTimerDeadlines.c)
 *     KiSetNextClockTickDueTime @ 0x1402C84E0 (KiSetNextClockTickDueTime.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140340704 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1405700EC (KiSetClockIntervalToMinimumRequested.c)
 */

__int64 __fastcall KiSetClockInterval(unsigned int a1, char a2, __int64 a3)
{
  unsigned __int64 Root; // rdx
  BOOLEAN v7; // r8
  unsigned __int64 v8; // rax
  unsigned int ClockTickDueTime; // eax
  int v10; // edx
  unsigned int v11; // ebx

  if ( *(_BYTE *)(a3 + 24) )
    RtlRbRemoveNode(&KiClockIntervalRequests, (PRTL_BALANCED_NODE)a3);
  *(_DWORD *)(a3 + 28) = a1;
  if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
  {
    if ( KiClockIntervalRequests.Root )
      Root = (unsigned __int64)KiClockIntervalRequests.Root ^ (unsigned __int64)&KiClockIntervalRequests;
    else
      Root = 0LL;
  }
  else
  {
    Root = (unsigned __int64)KiClockIntervalRequests.Root;
  }
  v7 = 0;
  if ( Root )
  {
    while ( 1 )
    {
      if ( a1 >= *(_DWORD *)(Root + 28) )
      {
        v8 = *(_QWORD *)(Root + 8);
        if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_16;
          v8 ^= Root;
        }
        if ( !v8 )
        {
LABEL_16:
          v7 = 1;
          break;
        }
      }
      else
      {
        v8 = *(_QWORD *)Root;
        if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
        {
          if ( !v8 )
            break;
          v8 ^= Root;
        }
        if ( !v8 )
          break;
      }
      Root = v8;
    }
  }
  RtlRbInsertNodeEx(&KiClockIntervalRequests, (PRTL_BALANCED_NODE)Root, v7, (PRTL_BALANCED_NODE)a3);
  *(_BYTE *)(a3 + 24) = 1;
  if ( a2 )
    KePseudoHrTimeIncrement = a1;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    KiSetClockTimerKTimerDeadlines((int)KeGetCurrentPrcb(), 0);
    ClockTickDueTime = KiSetNextClockTickDueTime(1);
  }
  else
  {
    ClockTickDueTime = KiSetClockIntervalToMinimumRequested();
  }
  v10 = *(_DWORD *)(a3 + 32);
  v11 = ClockTickDueTime;
  if ( v10 )
    PoTraceSystemTimerResolutionKernel(a1, v10, 1);
  return v11;
}
