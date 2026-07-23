/*
 * XREFs of MiUnlockNestedPageTableWritePte @ 0x1402E5DC0
 * Callers:
 *     MiClearPteAccessed @ 0x14027C860 (MiClearPteAccessed.c)
 *     MiWsleFlush @ 0x1402810A0 (MiWsleFlush.c)
 *     MiEvictPageTableLock @ 0x1402E54C0 (MiEvictPageTableLock.c)
 *     MiRewritePteWithLockBit @ 0x140376630 (MiRewritePteWithLockBit.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiWriteValidPteNewProtection @ 0x140284A90 (MiWriteValidPteNewProtection.c)
 *     MiShouldLockPteDirectly @ 0x1402E5F94 (MiShouldLockPteDirectly.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1402E5FD0 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiUnlockPageTableInternal @ 0x140319850 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiReplicatePteChange @ 0x1403684A0 (MiReplicatePteChange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlockNestedPageTableWritePte(__int64 a1, __int64 *a2, __int64 a3, int a4)
{
  __int64 *v6; // rdi
  int v8; // r14d
  __int64 v9; // rcx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  BOOL v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v18; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = a2;
  if ( (((unsigned __int64)a2 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
  {
    v8 = 1;
    if ( !a4 )
      KeAcquireInStackQueuedSpinLock(&qword_140C697C0, &LockHandle);
  }
  else
  {
    v8 = 0;
  }
  v9 = 0LL;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0
    && (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v6 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v9 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 624);
  }
  result = 0xFFFFF6FB7DBEDF68uLL;
  if ( v6 == (__int64 *)0xFFFFF6FB7DBEDF68LL )
  {
    result = MI_INTERLOCKED_EXCHANGE_PTE(0xFFFFF6FB7DBEDF68uLL, a3);
    goto LABEL_9;
  }
  if ( v9 )
  {
    if ( (a3 & 1) != 0 )
      goto LABEL_9;
  }
  else
  {
    if ( (unsigned int)MiShouldLockPteDirectly(a1, v6) )
    {
      result = MI_INTERLOCKED_EXCHANGE_PTE(v6, a3);
      v6 = 0LL;
      goto LABEL_9;
    }
    if ( (a3 & 1) != 0 )
    {
      result = (__int64)MiWriteValidPteNewProtection((unsigned __int64)v6, a3);
      goto LABEL_9;
    }
  }
  v12 = 0;
  result = MiPteInShadowRange((unsigned __int64)v6);
  if ( (_DWORD)result )
  {
    result = MiPteHasShadow(v14, v13, v15);
    v12 = result != 0;
  }
  *v6 = a3;
  if ( v12 )
    result = MiWritePteShadow(v6, a3);
LABEL_9:
  if ( v8 )
  {
    if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
      result = MiReplicatePteChange(v6, a3, 1LL);
    if ( !a4 )
    {
      result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( (_DWORD)KiIrqlFlags )
      {
        result = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
          && (unsigned __int8)result <= 0xFu
          && LockHandle.OldIrql <= 0xFu
          && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v18 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v18 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
    }
  }
  if ( v6 )
    return MiUnlockPageTableInternal(a1, v6);
  return result;
}
