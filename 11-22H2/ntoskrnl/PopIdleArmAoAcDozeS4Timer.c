/*
 * XREFs of PopIdleArmAoAcDozeS4Timer @ 0x14059E208
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1407A7164 (PopUmpoProcessPowerMessage.c)
 *     PopUpdateSystemIdleContext @ 0x1408258D8 (PopUpdateSystemIdleContext.c)
 *     PopIdleCsStateChanged @ 0x14099BEEC (PopIdleCsStateChanged.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14099C01C (PopUpdateSmartUserPresencePredictions.c)
 * Callees:
 *     KeSetTimer2 @ 0x140250130 (KeSetTimer2.c)
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     PopIdleChooseDozeS4Time @ 0x14059E358 (PopIdleChooseDozeS4Time.c)
 *     PopFilterCapabilities @ 0x1407A8C44 (PopFilterCapabilities.c)
 *     PopIsDozeSupported @ 0x140980BB4 (PopIsDozeSupported.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerArmed @ 0x140992D68 (PopTraceSystemIdleS0LowPowerDozeTimerArmed.c)
 */

void PopIdleArmAoAcDozeS4Timer()
{
  char v0; // di
  unsigned __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v5; // eax
  bool v6; // zf
  _BYTE v7[88]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v8; // [rsp+80h] [rbp+8h] BYREF
  __int64 v9; // [rsp+88h] [rbp+10h] BYREF

  v9 = 0LL;
  v8 = 0;
  memset(v7, 0, 0x4CuLL);
  if ( PopPlatformAoAc )
  {
    PopFilterCapabilities(&PopCapabilities, v7);
    v0 = 0;
    if ( (unsigned __int8)PopIsDozeSupported(v7) )
    {
      if ( (unsigned __int8)PopIdleChooseDozeS4Time(&v9, &v8) )
      {
        v1 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
        if ( !byte_140C3CD84 )
        {
          KeSetTimer2((__int64)&PopIdleAoAcDozeS4Timer, v9, 0LL, 0LL);
          v0 = 1;
          dword_140C3CD88 = v8;
          byte_140C3CD84 = 1;
        }
        KxReleaseSpinLock((volatile signed __int64 *)&PopIdleAoAcDozeS4Lock);
        if ( (_DWORD)KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
            && CurrentIrql <= 0xFu
            && (unsigned __int8)v1 <= 0xFu
            && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v5 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
            v6 = (v5 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v5;
            if ( v6 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v1);
        if ( v0 )
          PopTraceSystemIdleS0LowPowerDozeTimerArmed(v8, v9);
      }
    }
  }
}
