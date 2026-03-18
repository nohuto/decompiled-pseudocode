/*
 * XREFs of EtwpLockUnlockBufferList @ 0x1402E29C8
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x14079885C (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x1409E971C (EtwpBufferingModeFlush.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14024BA7C (ExfAcquireReleasePushLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall EtwpLockUnlockBufferList(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v5; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v7; // r8
  int v8; // eax
  bool v9; // zf
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = (KSPIN_LOCK *)(a1 + 696);
  if ( *(_DWORD *)(a1 + 300) == 1 )
  {
    _InterlockedOr(v10, 0);
    result = *v1;
    if ( (*v1 & 1) != 0 )
      return ExfAcquireReleasePushLockExclusive(a1 + 696);
  }
  else
  {
    result = *v1;
    if ( *v1 )
    {
      _mm_pause();
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
      }
      KxAcquireSpinLock(v1);
      KxReleaseSpinLock(v1);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v5 = KeGetCurrentIrql();
          if ( v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v7 = CurrentPrcb->SchedulerAssist;
            v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v9 = (v8 & v7[5]) == 0;
            v7[5] &= v8;
            if ( v9 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
