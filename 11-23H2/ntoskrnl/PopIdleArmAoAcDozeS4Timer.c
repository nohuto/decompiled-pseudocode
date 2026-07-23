/*
 * XREFs of PopIdleArmAoAcDozeS4Timer @ 0x14059E668
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x1407A6E44 (PopUmpoProcessPowerMessage.c)
 *     PopUpdateSystemIdleContext @ 0x140824C78 (PopUpdateSystemIdleContext.c)
 *     PopIdleCsStateChanged @ 0x14099C03C (PopIdleCsStateChanged.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14099C16C (PopUpdateSmartUserPresencePredictions.c)
 * Callees:
 *     KeSetTimer2 @ 0x140250220 (KeSetTimer2.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopIdleChooseDozeS4Time @ 0x14059E7B8 (PopIdleChooseDozeS4Time.c)
 *     PopFilterCapabilities @ 0x1407A8884 (PopFilterCapabilities.c)
 *     PopIsDozeSupported @ 0x140980D04 (PopIsDozeSupported.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerArmed @ 0x140992EB8 (PopTraceSystemIdleS0LowPowerDozeTimerArmed.c)
 */

__int64 PopIdleArmAoAcDozeS4Timer()
{
  __int64 result; // rax
  char v1; // di
  unsigned __int64 v2; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v5; // zf
  _BYTE v6[88]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v7; // [rsp+80h] [rbp+8h] BYREF
  __int64 v8; // [rsp+88h] [rbp+10h] BYREF

  v8 = 0LL;
  v7 = 0;
  result = (__int64)memset(v6, 0, 0x4CuLL);
  if ( PopPlatformAoAc )
  {
    PopFilterCapabilities(&PopCapabilities, v6);
    result = PopIsDozeSupported(v6);
    v1 = 0;
    if ( (_BYTE)result )
    {
      result = PopIdleChooseDozeS4Time(&v8, &v7);
      if ( (_BYTE)result )
      {
        v2 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
        if ( !byte_140C3CCE4 )
        {
          KeSetTimer2((__int64)&PopIdleAoAcDozeS4Timer, v8, 0LL, 0LL);
          v1 = 1;
          dword_140C3CCE8 = v7;
          byte_140C3CCE4 = 1;
        }
        result = KxReleaseSpinLock((volatile signed __int64 *)&PopIdleAoAcDozeS4Lock);
        if ( (_DWORD)KiIrqlFlags )
        {
          result = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
            && (unsigned __int8)result <= 0xFu
            && (unsigned __int8)v2 <= 0xFu
            && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
            v5 = ((unsigned int)result & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= result;
            if ( v5 )
              result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v2);
        if ( v1 )
          return PopTraceSystemIdleS0LowPowerDozeTimerArmed(v7, v8);
      }
    }
  }
  return result;
}
