/*
 * XREFs of PopEnableIrpWatchdog @ 0x14028EB98
 * Callers:
 *     PoHandleIrp @ 0x14028D65C (PoHandleIrp.c)
 *     PopDequeueQuerySetIrp @ 0x14028E29C (PopDequeueQuerySetIrp.c)
 *     PopQueueQuerySetIrp @ 0x14028E8AC (PopQueueQuerySetIrp.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x140252700 (KiSetTimerEx.c)
 *     PopComputeWatchdogTimeout @ 0x14028ECD8 (PopComputeWatchdogTimeout.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E7464 (KiQueryUnbiasedInterruptTime.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopEnableIrpWatchdog(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf

  v1 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 288));
  if ( !*(_DWORD *)(v1 + 296) )
  {
    v5 = *(_QWORD *)(v1 + 24);
    v6 = v5 ? *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL) : 0LL;
    if ( *(_DWORD *)(v1 + 188) != 1
      || !v6
      || (_m_prefetchw((const void *)(v6 + 296)),
          (_InterlockedOr((volatile signed __int32 *)(v6 + 296), 0) & 0x8000) == 0) )
    {
      v7 = PopComputeWatchdogTimeout(v1, v6, v3, v4);
      if ( v7 )
      {
        *(_DWORD *)(v1 + 120) = 275;
        *(_QWORD *)(v1 + 152) = v1;
        *(_QWORD *)(v1 + 144) = &PopIrpWatchdog;
        *(_QWORD *)(v1 + 176) = 0LL;
        *(_QWORD *)(v1 + 136) = 0LL;
        *(_QWORD *)(v1 + 56) = 0LL;
        *(_BYTE *)(v1 + 56) = 8;
        *(_QWORD *)(v1 + 72) = v1 + 64;
        *(_QWORD *)(v1 + 64) = v1 + 64;
        *(_QWORD *)(v1 + 80) = 0LL;
        *(_DWORD *)(v1 + 116) = 0;
        *(_WORD *)(v1 + 112) = 0;
        KiSetTimerEx(v1 + 56, -10000000LL * v7, 0, 0, v1 + 120);
        LOBYTE(v8) = 1;
        *(_QWORD *)(v1 + 48) = KiQueryUnbiasedInterruptTime(v8);
        *(_DWORD *)(v1 + 296) = 1;
      }
    }
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)(v1 + 288));
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
      v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v12 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  return result;
}
