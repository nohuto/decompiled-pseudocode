/*
 * XREFs of MiFreeInPageSupportBlock @ 0x1402BD2CC
 * Callers:
 *     MiResolveTransitionFault @ 0x1402623B0 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x140262D30 (MiHandleTransitionFault.c)
 *     MiFinishHardFault @ 0x1402D9300 (MiFinishHardFault.c)
 *     MiPfPutPagesInTransition @ 0x1402DE040 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x1402E05E0 (MiResolveMappedFileFault.c)
 *     MiAllocateInPageSupport @ 0x1402E0CE4 (MiAllocateInPageSupport.c)
 *     MiPrivateFixup @ 0x1402ED678 (MiPrivateFixup.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402EF008 (MiWaitForCollidedFaultComplete.c)
 *     MiFaultGetFileExtents @ 0x140645EF4 (MiFaultGetFileExtents.c)
 *     MiResolvePageFileFault @ 0x14066B52C (MiResolvePageFileFault.c)
 *     MmPrefetchPagesEx @ 0x14073EBE8 (MmPrefetchPagesEx.c)
 *     MiPfAllocateMdls @ 0x1407465B0 (MiPfAllocateMdls.c)
 *     MiFreeRotateVadEvent @ 0x140A31330 (MiFreeRotateVadEvent.c)
 *     MiGetReadyInPageBlock @ 0x140A313A0 (MiGetReadyInPageBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     MiInsertInPageBlock @ 0x1402BD368 (MiInsertInPageBlock.c)
 *     MiDereferenceInPageAutoBoostLock @ 0x1402BD3E8 (MiDereferenceInPageAutoBoostLock.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
