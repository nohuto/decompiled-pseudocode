/*
 * XREFs of HalpBuddyAllocatorBltPopBuddy @ 0x1405322D4
 * Callers:
 *     HalpBuddyAllocatorFreeLogicalAddress @ 0x14045EA00 (HalpBuddyAllocatorFreeLogicalAddress.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 *__fastcall HalpBuddyAllocatorBltPopBuddy(__int64 *a1, __int64 a2)
{
  volatile signed __int64 *v2; // rbp
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 **v8; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v12; // edx
  bool v13; // zf

  v2 = (volatile signed __int64 *)(a2 + 104);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 104));
  v5 = a1[2];
  v6 = *(__int64 **)(v5 + 24);
  if ( a1 == v6 )
    v6 = *(__int64 **)(v5 + 32);
  if ( *((_BYTE *)v6 + 72) || (v7 = *v6, (__int64 *)*v6 == v6) )
  {
    v6 = 0LL;
  }
  else
  {
    v8 = (__int64 **)v6[1];
    if ( *(__int64 **)(v7 + 8) != v6 || *v8 != v6 )
      __fastfail(3u);
    *v8 = (__int64 *)v7;
    *(_QWORD *)(v7 + 8) = v8;
    v6[1] = (__int64)v6;
    *v6 = (__int64)v6;
  }
  KxReleaseSpinLock(v2);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v4 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v13 = (v12 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v4);
  return v6;
}
