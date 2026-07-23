/*
 * XREFs of ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8F70
 * Callers:
 *     PspJobDelete @ 0x140207000 (PspJobDelete.c)
 *     ExpReturnPoolQuota @ 0x140207F24 (ExpReturnPoolQuota.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14023D950 (ExpReleaseResourceSharedForThreadLite.c)
 *     KiSwapThread @ 0x14023F4C0 (KiSwapThread.c)
 *     KiDispatchInterrupt @ 0x140249600 (KiDispatchInterrupt.c)
 *     PspRevertContainerImpersonation @ 0x14025A0CC (PspRevertContainerImpersonation.c)
 *     CcUnpinFileDataEx @ 0x14025DAA0 (CcUnpinFileDataEx.c)
 *     MiCompleteProtoPteFault @ 0x140268E70 (MiCompleteProtoPteFault.c)
 *     MiFlushSectionInternal @ 0x1402759E0 (MiFlushSectionInternal.c)
 *     MiLogPageAccess @ 0x14027CE40 (MiLogPageAccess.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402A2790 (ObFastDereferenceObjectDeferDelete.c)
 *     IopCallDriverReference @ 0x1402A7BD0 (IopCallDriverReference.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1402A7EC0 (IoSetDiskIoAttributionFromThread.c)
 *     ExpApplyPriorityBoost @ 0x1402A87D0 (ExpApplyPriorityBoost.c)
 *     ExDeleteResourceLite @ 0x1402A9050 (ExDeleteResourceLite.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A9440 (NtWaitForWorkViaWorkerFactory.c)
 *     IopCompleteRequest @ 0x1402AB710 (IopCompleteRequest.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402BAFD0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     IopDeleteFileObjectExtension @ 0x1402BBAA0 (IopDeleteFileObjectExtension.c)
 *     KiAbProcessThreadLocks @ 0x1402BC5E0 (KiAbProcessThreadLocks.c)
 *     IoReferenceIoAttributionFromThread @ 0x1402C11C0 (IoReferenceIoAttributionFromThread.c)
 *     CcMapAndCopyInToCache @ 0x1402CCB80 (CcMapAndCopyInToCache.c)
 *     MiFinishHardFault @ 0x1402D9590 (MiFinishHardFault.c)
 *     MiEmptyPageAccessLog @ 0x1402E21D0 (MiEmptyPageAccessLog.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFEEC (MiTrimSharedPageFromViews.c)
 *     MmFreeAccessPfnBuffer @ 0x1402F583C (MmFreeAccessPfnBuffer.c)
 *     FsRtlpClearOwner @ 0x1402FD8BC (FsRtlpClearOwner.c)
 *     ExReinitializeResourceLite @ 0x140318C30 (ExReinitializeResourceLite.c)
 *     MmChangeSectionBackingFile @ 0x14035F158 (MmChangeSectionBackingFile.c)
 *     IopBoostThreadCallback @ 0x140361EB0 (IopBoostThreadCallback.c)
 *     MiUnlockStealVm @ 0x1403BDC60 (MiUnlockStealVm.c)
 *     MiStoreWriteModifiedPages @ 0x14046DEAA (MiStoreWriteModifiedPages.c)
 *     CcChangeBackingFileObject @ 0x1405356B8 (CcChangeBackingFileObject.c)
 *     KiMonitorCacheErrata @ 0x140579830 (KiMonitorCacheErrata.c)
 *     PfpServiceMainThreadUnboost @ 0x140583410 (PfpServiceMainThreadUnboost.c)
 *     SmTerminateStoreProcess @ 0x1405CA158 (SmTerminateStoreProcess.c)
 *     MiStoreFreeWriteSupport @ 0x14065C7F4 (MiStoreFreeWriteSupport.c)
 *     VrpFreeKeyContext @ 0x14068EC34 (VrpFreeKeyContext.c)
 *     ObpUnlockDirectory @ 0x1406C3278 (ObpUnlockDirectory.c)
 *     ObOpenObjectByNameEx @ 0x1406ED010 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x1406ED750 (ObpLookupObjectName.c)
 *     PspChargeProcessWakeCounter @ 0x1407385C0 (PspChargeProcessWakeCounter.c)
 *     PspProcessDelete @ 0x1407612A0 (PspProcessDelete.c)
 *     VrpDestroyNamespaceNode @ 0x14077B7F4 (VrpDestroyNamespaceNode.c)
 *     ObpLockUnrelatedDirectoryShared @ 0x1407AA49C (ObpLockUnrelatedDirectoryShared.c)
 *     ObpLockChildDirectory @ 0x140874B30 (ObpLockChildDirectory.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14020B930 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1405830C8 (ObpPushStackInfo.c)
 */

void __stdcall ObDereferenceObjectDeferDeleteWithTag(PVOID Object, ULONG Tag)
{
  signed __int64 v3; // rax
  bool v4; // cc
  signed __int64 BugCheckParameter4; // rax

  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)Object - 48);
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object - 6, 0xFFFFFFFFFFFFFFFFuLL);
  v4 = v3 <= 1;
  BugCheckParameter4 = v3 - 1;
  if ( v4 )
  {
    if ( *((_QWORD *)Object - 5) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)],
        (ULONG_PTR)Object,
        3uLL,
        *((_QWORD *)Object - 5));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 4uLL, BugCheckParameter4);
    ObpDeferObjectDeletion((signed __int64)Object - 48);
  }
}
