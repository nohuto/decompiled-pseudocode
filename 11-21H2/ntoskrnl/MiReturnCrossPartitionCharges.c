/*
 * XREFs of MiReturnCrossPartitionCharges @ 0x1405BF468
 * Callers:
 *     MiReturnCrossPartitionCombineCharges @ 0x1405B6318 (MiReturnCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x1405BBC9C (MiReturnCrossPartitionCloneCharges.c)
 *     MiCreateLargePfnList @ 0x1405C14D4 (MiCreateLargePfnList.c)
 *     MiFreeLargePages @ 0x1405C1CE0 (MiFreeLargePages.c)
 *     MiGetSubsectionCharges @ 0x1405C4980 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1405C4B8C (MiReturnCrossPartitionSectionCharges.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionCharge @ 0x1405BF3F0 (MiReturnCrossPartitionCharge.c)
 */

LONG __fastcall MiReturnCrossPartitionCharges(__int64 a1, int a2, char a3, __int64 a4)
{
  volatile LONG *v4; // r14
  struct _KEVENT *v9; // rdi
  unsigned __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // r8
  LONG result; // eax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v16; // zf

  v4 = (volatile LONG *)(a1 + 1344);
  v9 = 0LL;
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1344));
  v11 = MiReturnCrossPartitionCharge(a1, a2, a4);
  if ( (a3 & 1) != 0 )
    v11 = MiReturnCrossPartitionCharge(a1, a2 + 1, v12);
  if ( v11 )
    v9 = *(struct _KEVENT **)(a1 + 2344);
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  result = KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v10 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v16 = (result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v16 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  if ( v9 )
    return KeSetEvent(v9, 1, 0);
  return result;
}
