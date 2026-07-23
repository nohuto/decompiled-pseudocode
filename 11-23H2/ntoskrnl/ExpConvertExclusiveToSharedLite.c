/*
 * XREFs of ExpConvertExclusiveToSharedLite @ 0x140347A6C
 * Callers:
 *     ExConvertExclusiveToSharedLite @ 0x140347950 (ExConvertExclusiveToSharedLite.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeWakeWaitChain @ 0x140260BD0 (KeWakeWaitChain.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpApplyPriorityBoost @ 0x1402A87D0 (ExpApplyPriorityBoost.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpConvertExclusiveToSharedLite(__int64 a1)
{
  int v2; // ebp
  volatile signed __int32 *v3; // rax
  char v4; // si
  unsigned __int64 OldIrql; // rdi
  __int64 result; // rax
  __int64 v7; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  struct _KLOCK_QUEUE_HANDLE v13; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int32 *v14; // [rsp+50h] [rbp+8h] BYREF

  memset(&v13, 0, sizeof(v13));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 96), &v13);
  v2 = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 72) = 0;
  *(_WORD *)(a1 + 26) &= ~0x80u;
  v3 = *(volatile signed __int32 **)(a1 + 32);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 64) += v2;
  v4 = *(_BYTE *)(a1 + 27);
  v14 = v3;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v13);
  OldIrql = v13.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v13.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v11 = ~(unsigned __int16)(-1LL << (v13.OldIrql + 1));
      v12 = (v11 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  result = KeWakeWaitChain(&v14, 0, 0);
  if ( v2 && v4 )
    result = ExpApplyPriorityBoost(a1, 65280LL, (__int64)KeGetCurrentThread(), v7);
  __incgsdword(0x8A74u);
  return result;
}
