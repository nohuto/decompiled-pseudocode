/*
 * XREFs of MiUnlockNestedPageTableWritePte @ 0x1402292C0
 * Callers:
 *     MiEvictPageTableLock @ 0x140229100 (MiEvictPageTableLock.c)
 *     MiWsleFlush @ 0x1402C1F50 (MiWsleFlush.c)
 *     MiClearPteAccessed @ 0x140332A80 (MiClearPteAccessed.c)
 *     MiRewritePteWithLockBit @ 0x1403C2C58 (MiRewritePteWithLockBit.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiShouldLockPteDirectly @ 0x14022948C (MiShouldLockPteDirectly.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1402746C0 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiWriteValidPteNewProtection @ 0x14033DBC0 (MiWriteValidPteNewProtection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUnlockNestedPageTableWritePte(__int64 a1, volatile __int64 *a2, __int64 a3, int a4)
{
  volatile __int64 *v4; // rdi
  int v8; // esi
  __int64 v9; // rcx
  unsigned __int64 OldIrql; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v4 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (((unsigned __int64)a2 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
  {
    v8 = 1;
    if ( !a4 )
      KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  }
  else
  {
    v8 = 0;
  }
  v9 = 0LL;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0
    && (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v4 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v9 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 592);
  }
  if ( v4 == (volatile __int64 *)0xFFFFF6FB7DBEDF68LL )
  {
    MI_INTERLOCKED_EXCHANGE_PTE(0xFFFFF6FB7DBEDF68uLL, a3);
    goto LABEL_13;
  }
  if ( v9 )
  {
    if ( (a3 & 1) != 0 )
      goto LABEL_13;
    if ( (unsigned int)MiPteInShadowRange(v4) && (unsigned int)MiPteHasShadow(v14, v13) )
    {
LABEL_34:
      *v4 = a3;
      MiWritePteShadow(v4, a3);
      goto LABEL_13;
    }
LABEL_25:
    *v4 = a3;
    goto LABEL_13;
  }
  if ( !(unsigned int)MiShouldLockPteDirectly(a1) )
  {
    if ( (a3 & 1) != 0 )
    {
      MiWriteValidPteNewProtection(v4, a3);
      goto LABEL_13;
    }
    if ( (unsigned int)MiPteInShadowRange(v4) && (unsigned int)MiPteHasShadow(v12, v11) )
      goto LABEL_34;
    goto LABEL_25;
  }
  if ( (MiFlags & 0x4000000) != 0 )
    _mm_lfence();
  _InterlockedExchange64(v4, a3);
  if ( (unsigned int)MiPteInShadowRange(v4) )
    MiWritePteShadow(v4, a3);
  v4 = 0LL;
LABEL_13:
  if ( v8 && !a4 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v19 = (v18 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v18;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  if ( v4 )
    MiUnlockPageTableInternal(a1, (unsigned __int64)v4);
}
