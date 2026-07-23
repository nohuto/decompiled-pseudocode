/*
 * XREFs of RtlpHpVaMgrCtxAlloc @ 0x1403100EC
 * Callers:
 *     RtlpHpAllocVA @ 0x140286D50 (RtlpHpAllocVA.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7E90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     RtlpHpVaMgrAlloc @ 0x14031015C (RtlpHpVaMgrAlloc.c)
 *     ExAcquireSpinLockShared @ 0x1403148B0 (ExAcquireSpinLockShared.c)
 *     RtlpHpVaMgrCtxAllocatorFind @ 0x140389824 (RtlpHpVaMgrCtxAllocatorFind.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxAlloc(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 v4; // rax
  ULONG_PTR v7; // rdi
  volatile LONG *v9; // rbx
  unsigned __int64 v10; // rsi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf

  v4 = *a4;
  if ( (_DWORD)v4 == -1 )
  {
    v9 = (volatile LONG *)(a1 + 2144);
    v10 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 2144));
    v7 = RtlpHpVaMgrCtxAllocatorFind(a1, a4, 0LL, 0LL);
    ExReleaseSpinLockSharedFromDpcLevel(v9);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v10 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v10);
  }
  else
  {
    v7 = a1 + 48 * (v4 + 45);
  }
  return RtlpHpVaMgrAlloc(v7);
}
