/*
 * XREFs of MiFreeInPageSupportBlock @ 0x1402BD58C
 * Callers:
 *     MiResolveTransitionFault @ 0x140262760 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x1402630E0 (MiHandleTransitionFault.c)
 *     MiFinishHardFault @ 0x1402D9590 (MiFinishHardFault.c)
 *     MiPfPutPagesInTransition @ 0x1402DE2D0 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x1402E0870 (MiResolveMappedFileFault.c)
 *     MiAllocateInPageSupport @ 0x1402E0F74 (MiAllocateInPageSupport.c)
 *     MiPrivateFixup @ 0x1402ED908 (MiPrivateFixup.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402EF298 (MiWaitForCollidedFaultComplete.c)
 *     MiFaultGetFileExtents @ 0x1406463D4 (MiFaultGetFileExtents.c)
 *     MiResolvePageFileFault @ 0x14066BA0C (MiResolvePageFileFault.c)
 *     MmPrefetchPagesEx @ 0x14073E8C8 (MmPrefetchPagesEx.c)
 *     MiPfAllocateMdls @ 0x140746290 (MiPfAllocateMdls.c)
 *     MiFreeRotateVadEvent @ 0x140A31570 (MiFreeRotateVadEvent.c)
 *     MiGetReadyInPageBlock @ 0x140A315E0 (MiGetReadyInPageBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MiInsertInPageBlock @ 0x1402BD628 (MiInsertInPageBlock.c)
 *     MiDereferenceInPageAutoBoostLock @ 0x1402BD6A8 (MiDereferenceInPageAutoBoostLock.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeInPageSupportBlock(PSLIST_ENTRY ListEntry)
{
  _SLIST_ENTRY *v2; // rcx
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY *v4; // rcx

  v2 = (_SLIST_ENTRY *)*((_QWORD *)&ListEntry[13].Next + 1);
  if ( v2 == ListEntry && *((struct _KTHREAD **)&ListEntry[9].Next + 1) == KeGetCurrentThread() )
    KeAbPostRelease((ULONG_PTR)v2);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&ListEntry[11], 0xFFFFFFFF) == 1 )
  {
    Next = ListEntry[16].Next;
    if ( Next && Next != &ListEntry[17] )
      ExFreePoolWithTag(Next, 0);
    v4 = (_SLIST_ENTRY *)*((_QWORD *)&ListEntry[13].Next + 1);
    if ( v4 && v4 != ListEntry )
      MiDereferenceInPageAutoBoostLock();
    if ( !(unsigned int)MiInsertInPageBlock(ListEntry) )
      ExFreePoolWithTag(ListEntry, 0);
  }
}
