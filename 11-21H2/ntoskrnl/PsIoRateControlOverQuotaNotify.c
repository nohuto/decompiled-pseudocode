/*
 * XREFs of PsIoRateControlOverQuotaNotify @ 0x14025B0B8
 * Callers:
 *     IoNotifyQuotaState @ 0x14025AFF0 (IoNotifyQuotaState.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1402F5718 (KiQueryUnbiasedInterruptTime.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PsIoRateControlOverQuotaNotify(__int64 a1, int a2, int a3, int a4, int a5)
{
  __int64 v8; // rbx
  __int64 UnbiasedInterruptTime; // rsi
  KIRQL v10; // al
  __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v16; // zf

  v8 = a1;
  if ( a5 )
  {
    LOBYTE(a1) = 1;
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(a1);
  }
  else
  {
    UnbiasedInterruptTime = 0LL;
  }
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 1648));
  v11 = *(_QWORD *)(v8 + 1672);
  v12 = v10;
  if ( a4 != *(_DWORD *)(v8 + 1692) )
  {
    ++*(_DWORD *)(v8 + 1680);
    v11 *= 2LL;
  }
  *(_DWORD *)(v8 + 1688) = a3;
  *(_QWORD *)(v8 + 1672) = v11 | (a2 != 0);
  if ( a5 )
    *(_QWORD *)(v8 + 1696) = UnbiasedInterruptTime;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 1648));
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v12 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v16 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v16 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v12);
  return result;
}
