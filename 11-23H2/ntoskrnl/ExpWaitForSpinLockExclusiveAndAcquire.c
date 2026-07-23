/*
 * XREFs of ExpWaitForSpinLockExclusiveAndAcquire @ 0x140207740
 * Callers:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x140207670 (RtlpHpAcquireQueuedLockExclusive.c)
 *     MiIdentifyPfn @ 0x14023E590 (MiIdentifyPfn.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     RtlpHpSegPageRangeAllocate @ 0x14024DDC0 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x14024E790 (RtlpHpSegPageRangeShrink.c)
 *     ExpAcquireSpinLockExclusive @ 0x14025B690 (ExpAcquireSpinLockExclusive.c)
 *     MiAgePte @ 0x14027BFF0 (MiAgePte.c)
 *     MiLogPageAccess @ 0x14027CE40 (MiLogPageAccess.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x140287B70 (MmDoesFileHaveUserWritableReferences.c)
 *     MiAddViewsForSection @ 0x140288A00 (MiAddViewsForSection.c)
 *     MiGetVadWakeList @ 0x14028A400 (MiGetVadWakeList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExDeleteResourceLite @ 0x1402A9050 (ExDeleteResourceLite.c)
 *     MiMakePageAvoidRead @ 0x1402CE290 (MiMakePageAvoidRead.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402D2120 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertLargePageInNodeList @ 0x1402D6E70 (MiInsertLargePageInNodeList.c)
 *     MiGetLargePage @ 0x1402D7D10 (MiGetLargePage.c)
 *     MiLockFreeLargePageLists @ 0x1402D8280 (MiLockFreeLargePageLists.c)
 *     MiPfPutPagesInTransition @ 0x1402DE2D0 (MiPfPutPagesInTransition.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x140337550 (RtlpHpVsSubsegmentCommitPages.c)
 * Callees:
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403CD4A0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403CD4D0 (HvlNotifyLongSpinWait.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpWaitForSpinLockExclusiveAndAcquire(int *a1, unsigned __int8 a2)
{
  unsigned int v2; // edi
  int i; // eax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  _DWORD *v12; // r9
  __int64 v13; // rdx

  v2 = 0;
  do
  {
    _m_prefetchw(a1);
    for ( i = *a1; *a1 < 0; i = *a1 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr(a1, 0x40000000u);
      if ( a2 != 0xFF )
      {
        if ( (_DWORD)KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && a2 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v10 = ~(unsigned __int16)(-1LL << (a2 + 1));
            v11 = (v10 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v10;
            if ( v11 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(a2);
      }
      if ( (++v2 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v2);
      }
      else
      {
        _mm_pause();
      }
      if ( a2 != 0xFF )
      {
        a2 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (_DWORD)KiIrqlFlags )
        {
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && a2 <= 0xFu )
          {
            v12 = KeGetCurrentPrcb()->SchedulerAssist;
            if ( a2 == 2 )
              LODWORD(v13) = 4;
            else
              v13 = (-1LL << (a2 + 1)) & 4;
            v12[5] |= v13;
          }
        }
      }
    }
  }
  while ( _interlockedbittestandset(a1, 0x1Fu) );
  return v2;
}
