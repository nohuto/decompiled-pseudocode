/*
 * XREFs of PpmIdlePrevetoWatchdog @ 0x1405852E0
 * Callers:
 *     PopDripsWatchdogTakeAction @ 0x1409A125C (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlGetInterruptTimePrecise @ 0x1402C42B0 (RtlGetInterruptTimePrecise.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall PpmIdlePrevetoWatchdog(unsigned __int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 v4; // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  LARGE_INTEGER InterruptTimePrecise; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // r10d
  __int64 v13; // r11
  unsigned __int64 v14; // rdx
  __int64 v15; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp+10h] BYREF

  PerformanceCounter.QuadPart = 0LL;
  v4 = PpmPlatformStates;
  *a2 = 0;
  *a3 = 0LL;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 4) )
    {
      v7 = (unsigned int)dword_140CF7E40;
      if ( dword_140CF7E40 != -1 )
      {
        v8 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
        v10 = 0LL;
        v11 = PpmPlatformStates + 448 * v7;
        v12 = *(_DWORD *)(v11 + 108);
        if ( v12 )
        {
          v13 = *(_QWORD *)(v11 + 112);
          while ( 1 )
          {
            v14 = (unsigned __int64)(unsigned int)v10 << 6;
            v15 = *(_QWORD *)(v14 + v13 + 32);
            if ( v15 )
            {
              if ( InterruptTimePrecise.QuadPart - v15 >= a1 )
                break;
            }
            v10 = (unsigned int)(v10 + 1);
            if ( (unsigned int)v10 >= v12 )
              goto LABEL_11;
          }
          *a2 = *(_DWORD *)(v14 + v13 + 16);
          *a3 = *((_QWORD *)PpmIdleVetoList + 3 * v10 + 3);
        }
LABEL_11:
        KxReleaseSpinLock((volatile signed __int64 *)&PpmIdleVetoLock);
        if ( (_DWORD)KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
            && CurrentIrql <= 0xFu
            && (unsigned __int8)v8 <= 0xFu
            && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
            v20 = (v19 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v19;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v8);
      }
    }
  }
}
