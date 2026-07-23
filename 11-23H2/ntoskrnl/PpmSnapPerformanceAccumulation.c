/*
 * XREFs of PpmSnapPerformanceAccumulation @ 0x140256390
 * Callers:
 *     PpmPerfSnapDeliveredPerformance @ 0x140256040 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmResetPerfTimes @ 0x1403A7280 (PpmResetPerfTimes.c)
 *     PpmGetThroughputInfoCallback @ 0x1404635A0 (PpmGetThroughputInfoCallback.c)
 *     PpmCapturePerformanceDistributionCallback @ 0x140598140 (PpmCapturePerformanceDistributionCallback.c)
 * Callees:
 *     PpmUpdateTimeAccumulation @ 0x1402554C4 (PpmUpdateTimeAccumulation.c)
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 *     PpmUpdatePerformanceFeedback @ 0x1402C6FD0 (PpmUpdatePerformanceFeedback.c)
 *     PpmGetIdleGenerationCounter @ 0x14034B5E4 (PpmGetIdleGenerationCounter.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char __fastcall PpmSnapPerformanceAccumulation(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        char a4,
        __int64 a5,
        LARGE_INTEGER *a6)
{
  _QWORD *v6; // r13
  LARGE_INTEGER v7; // rsi
  unsigned __int8 v8; // di
  LARGE_INTEGER PerformanceCounter; // r12
  unsigned int LowPart; // edi
  unsigned int v12; // ebx
  unsigned int i; // eax
  unsigned int v14; // r10d
  unsigned int v15; // r11d
  __int64 v16; // rdx
  __int64 v17; // r9
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  LARGE_INTEGER *v20; // rbx
  char result; // al
  __int64 v22; // r8
  LARGE_INTEGER v23; // r9
  LARGE_INTEGER v24; // r10
  __int64 v25; // rcx
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  __int64 IdleGenerationCounter; // [rsp+38h] [rbp-60h]
  __int128 v32; // [rsp+40h] [rbp-58h] BYREF
  __int64 v33; // [rsp+50h] [rbp-48h]

  v6 = (_QWORD *)(a1 + 33680);
  v7.QuadPart = 0LL;
  v8 = a3;
  v33 = 0LL;
  IdleGenerationCounter = 0LL;
  v32 = 0LL;
  if ( a3 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    IdleGenerationCounter = PpmGetIdleGenerationCounter(a1);
    if ( !IdleGenerationCounter )
      return 0;
  }
  else
  {
    _disable();
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    PpmUpdateTimeAccumulation(a1, PerformanceCounter.QuadPart, 1);
  }
  *(_OWORD *)a5 = 0LL;
  *(_OWORD *)(a5 + 16) = 0LL;
  *(_OWORD *)(a5 + 32) = 0LL;
  *(_QWORD *)(a5 + 48) = 0LL;
  if ( a6 )
  {
    LowPart = a6[6].LowPart;
    memset(a6, 0, (int)(112 * LowPart + 56));
    a6[6].LowPart = LowPart;
    v12 = 0;
    a6[1].QuadPart = *(_QWORD *)(a1 + 33192) + *(_QWORD *)(a1 + 33400);
    a6[2] = *(LARGE_INTEGER *)(a1 + 33160);
    a6[3] = *(LARGE_INTEGER *)(a1 + 33168);
    a6[4] = *(LARGE_INTEGER *)(a1 + 33176);
    a6[5] = *(LARGE_INTEGER *)(a1 + 33184);
    do
    {
      for ( i = 0; i < 2; ++i )
      {
        v14 = 0;
        if ( LowPart )
        {
          v15 = i + 2 * v12;
          do
          {
            v16 = v14 + (_DWORD)KiHgsPlusConfiguration * v15;
            v17 = v14 + a6[6].LowPart * v15;
            ++v14;
            a6[v17 + 7] = *(LARGE_INTEGER *)(*(_QWORD *)(a1 + 33200) + 8 * v16);
          }
          while ( v14 < LowPart );
        }
      }
      ++v12;
    }
    while ( v12 < 7 );
    v8 = a3;
  }
  if ( !v8 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v26 = *SchedulerAssist;
      do
      {
        v27 = v26;
        v26 = _InterlockedCompareExchange(SchedulerAssist, v26 & 0xFFDFFFFF, v26);
      }
      while ( v27 != v26 );
      if ( (v26 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
  }
  v20 = 0LL;
  if ( *(_DWORD *)(a1 + 33824) == 3 )
    v20 = (LARGE_INTEGER *)&v32;
  result = PpmUpdatePerformanceFeedback(a1, a2, v8, 0, (__int64)v20);
  if ( result )
  {
    if ( a4 && PopSnapEnergyCounters )
    {
      LOBYTE(v22) = 1;
      PopSnapEnergyCounters(*(unsigned int *)(a1 + 36), v8, v22);
    }
    if ( v20 )
    {
      PerformanceCounter = *v20;
      v23 = v20[1];
      v24 = v20[2];
    }
    else
    {
      v7 = *(LARGE_INTEGER *)(a1 + 33640);
      if ( PerformanceCounter.QuadPart <= (unsigned __int64)v7.QuadPart )
        PerformanceCounter = *(LARGE_INTEGER *)(a1 + 33640);
      v23 = *(LARGE_INTEGER *)(a1 + 33624);
      v24 = (LARGE_INTEGER)v6[2];
    }
    if ( v6[3] )
    {
      v25 = v6[8];
    }
    else if ( v6[4] )
    {
      v25 = v6[9];
    }
    else
    {
      v25 = 100LL * v6[6];
    }
    *(_QWORD *)(a5 + 24) = v25;
    if ( v6[4] )
      v25 = v6[9];
    *(_QWORD *)(a5 + 32) = v25;
    *(_QWORD *)(a5 + 40) = v6[11];
    *(_QWORD *)(a5 + 16) = v6[16];
    *(_DWORD *)(a5 + 48) = *(_DWORD *)(a1 + 13148);
    if ( !v8 )
    {
      if ( !v20 )
        v23.QuadPart += *(_QWORD *)(a1 + 33616);
LABEL_33:
      *(LARGE_INTEGER *)a5 = PerformanceCounter;
      *(_QWORD *)(a5 + 8) = PerformanceCounter.QuadPart - v23.QuadPart;
      if ( a6 )
        *a6 = v24;
      return 1;
    }
    if ( IdleGenerationCounter == PpmGetIdleGenerationCounter(a1) )
    {
      if ( !v20 )
        v23.QuadPart += PerformanceCounter.QuadPart - v7.QuadPart;
      goto LABEL_33;
    }
    return 0;
  }
  return result;
}
