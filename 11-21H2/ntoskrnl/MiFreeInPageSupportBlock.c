/*
 * XREFs of MiFreeInPageSupportBlock @ 0x14027456C
 * Callers:
 *     MiPrivateFixup @ 0x14024076C (MiPrivateFixup.c)
 *     MiPfPutPagesInTransition @ 0x1402715A0 (MiPfPutPagesInTransition.c)
 *     MiWaitForCollidedFaultComplete @ 0x14027FEF8 (MiWaitForCollidedFaultComplete.c)
 *     MiResolveTransitionFault @ 0x140325B30 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x1403265B0 (MiHandleTransitionFault.c)
 *     MiFinishHardFault @ 0x140334C40 (MiFinishHardFault.c)
 *     MiResolveMappedFileFault @ 0x140339520 (MiResolveMappedFileFault.c)
 *     MiAllocateInPageSupport @ 0x140339CA0 (MiAllocateInPageSupport.c)
 *     MiResolvePageFileFault @ 0x1403927C4 (MiResolvePageFileFault.c)
 *     MiFaultGetFileExtents @ 0x1405A7158 (MiFaultGetFileExtents.c)
 *     MiFreeRotateVadEvent @ 0x1406EB238 (MiFreeRotateVadEvent.c)
 *     MiPfAllocateMdls @ 0x1406F4A80 (MiPfAllocateMdls.c)
 *     MmPrefetchPagesEx @ 0x1406FA730 (MmPrefetchPagesEx.c)
 *     MiGetReadyInPageBlock @ 0x14096D038 (MiGetReadyInPageBlock.c)
 * Callees:
 *     MiInsertInPageBlock @ 0x1402745EC (MiInsertInPageBlock.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeInPageSupportBlock(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // rcx

  if ( *((struct _KTHREAD **)&ListEntry[9].Next + 1) == KeGetCurrentThread() && *((_QWORD *)&ListEntry[13].Next + 1) )
    KeAbPostRelease((ULONG_PTR)ListEntry);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&ListEntry[11], 0xFFFFFFFF) == 1 )
  {
    Next = ListEntry[16].Next;
    if ( Next && Next != &ListEntry[17] )
      ExFreePoolWithTag(Next, 0);
    if ( !(unsigned int)MiInsertInPageBlock(ListEntry) )
      ExFreePoolWithTag(ListEntry, 0);
  }
}
