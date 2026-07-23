/*
 * XREFs of MiMakePageBad @ 0x14065E320
 * Callers:
 *     MiScrubLargeMappedPage @ 0x14065E4AC (MiScrubLargeMappedPage.c)
 *     MiScrubNode @ 0x140A466E0 (MiScrubNode.c)
 * Callees:
 *     MiIsPageOnBadList @ 0x1402186E0 (MiIsPageOnBadList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiAllocatePool @ 0x1402DF1A0 (MiAllocatePool.c)
 *     MiAcquireNonPagedResources @ 0x1402E4314 (MiAcquireNonPagedResources.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiSetPfnRemovalRequested @ 0x14064DF24 (MiSetPfnRemovalRequested.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall MiMakePageBad(ULONG_PTR a1, char a2)
{
  __int64 v4; // rdi
  PVOID Pool; // rbp
  unsigned __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v10; // eax
  bool v11; // zf

  v4 = 48 * a1 - 0x220000000000LL;
  Pool = MiAllocatePool(64, 0x20uLL, 0x6C42694Du);
  v6 = (unsigned __int8)MiLockPageInline(v4);
  if ( !MiIsPageOnBadList(v4) )
  {
    if ( (a2 & 1) != 0 && (*(_BYTE *)(v4 + 35) & 0x40) == 0 )
    {
      MiAcquireNonPagedResources(
        *(_QWORD *)(qword_140C674C8 + 8 * ((*(_QWORD *)(v4 + 40) >> 43) & 0x3FFLL)),
        1uLL,
        0LL,
        1u);
      MiSetPfnRemovalRequested(v4, 1, 0, (unsigned __int64)Pool);
      Pool = 0LL;
      _InterlockedIncrement(&dword_140C68094);
    }
    if ( (a2 & 2) != 0 )
      MiInsertPageInFreeOrZeroedList(a1, 2);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v6 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v6);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
}
