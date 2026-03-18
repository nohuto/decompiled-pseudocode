/*
 * XREFs of IopDequeueIrpFromFileObject @ 0x1403476D0
 * Callers:
 *     IopDropIrp @ 0x140234D58 (IopDropIrp.c)
 *     IopCompleteRequest @ 0x140347E10 (IopCompleteRequest.c)
 *     IopCopyCompleteReadRequest @ 0x140418160 (IopCopyCompleteReadRequest.c)
 *     IopIoRingCompleteIrp @ 0x140559FA8 (IopIoRingCompleteIrp.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IopDequeueIrpFromFileObject(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // rsi
  KIRQL v4; // al
  _QWORD *v5; // r8
  _QWORD *v6; // rdx
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v13; // zf

  v2 = (KSPIN_LOCK *)(a2 + 184);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 184));
  v5 = *(_QWORD **)(a1 + 40);
  v6 = (_QWORD *)(a1 + 32);
  v7 = v4;
  v8 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(v8 + 8) != a1 + 32 || (_QWORD *)*v5 != v6 )
    __fastfail(3u);
  *v5 = v8;
  *(_QWORD *)(v8 + 8) = v5;
  v9 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 40) = a1 + 32;
  *v6 = v6;
  ObfDereferenceObjectWithTag((PVOID)(v9 & 0xFFFFFFFFFFFFFFF9uLL), 0x70436F49u);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 16) & 0xFFFF5FFF | 0x8000;
  KxReleaseSpinLock(v2);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v13 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v13 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
