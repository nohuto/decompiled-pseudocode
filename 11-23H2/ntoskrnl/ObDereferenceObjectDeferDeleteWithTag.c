/*
 * XREFs of ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8CE0
 * Callers:
 *     PspJobDelete @ 0x140207000 (PspJobDelete.c)
 *     ExpReturnPoolQuota @ 0x140207F24 (ExpReturnPoolQuota.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14023D880 (ExpReleaseResourceSharedForThreadLite.c)
 *     KiSwapThread @ 0x14023F3F0 (KiSwapThread.c)
 *     KiDispatchInterrupt @ 0x140249530 (KiDispatchInterrupt.c)
 *     PspRevertContainerImpersonation @ 0x140259E3C (PspRevertContainerImpersonation.c)
 *     CcUnpinFileDataEx @ 0x14025D810 (CcUnpinFileDataEx.c)
 *     MiCompleteProtoPteFault @ 0x140268BE0 (MiCompleteProtoPteFault.c)
 *     MiFlushSectionInternal @ 0x140275750 (MiFlushSectionInternal.c)
 *     MiLogPageAccess @ 0x14027CBB0 (MiLogPageAccess.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402A2500 (ObFastDereferenceObjectDeferDelete.c)
 *     IopCallDriverReference @ 0x1402A7940 (IopCallDriverReference.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1402A7C30 (IoSetDiskIoAttributionFromThread.c)
 *     ExpApplyPriorityBoost @ 0x1402A8540 (ExpApplyPriorityBoost.c)
 *     ExDeleteResourceLite @ 0x1402A8DC0 (ExDeleteResourceLite.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A91B0 (NtWaitForWorkViaWorkerFactory.c)
 *     IopCompleteRequest @ 0x1402AB480 (IopCompleteRequest.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402BAD40 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     IopDeleteFileObjectExtension @ 0x1402BB810 (IopDeleteFileObjectExtension.c)
 *     KiAbProcessThreadLocks @ 0x1402BC350 (KiAbProcessThreadLocks.c)
 *     IoReferenceIoAttributionFromThread @ 0x1402C0F30 (IoReferenceIoAttributionFromThread.c)
 *     CcMapAndCopyInToCache @ 0x1402CC8F0 (CcMapAndCopyInToCache.c)
 *     MiFinishHardFault @ 0x1402D9300 (MiFinishHardFault.c)
 *     MiEmptyPageAccessLog @ 0x1402E1F40 (MiEmptyPageAccessLog.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MmFreeAccessPfnBuffer @ 0x1402F55AC (MmFreeAccessPfnBuffer.c)
 *     FsRtlpClearOwner @ 0x1402FD62C (FsRtlpClearOwner.c)
 *     ExReinitializeResourceLite @ 0x1403189A0 (ExReinitializeResourceLite.c)
 *     MmChangeSectionBackingFile @ 0x14035EFB8 (MmChangeSectionBackingFile.c)
 *     IopBoostThreadCallback @ 0x140361D10 (IopBoostThreadCallback.c)
 *     MiUnlockStealVm @ 0x1403BDA80 (MiUnlockStealVm.c)
 *     MiStoreWriteModifiedPages @ 0x14046DAAA (MiStoreWriteModifiedPages.c)
 *     CcChangeBackingFileObject @ 0x140535168 (CcChangeBackingFileObject.c)
 *     KiMonitorCacheErrata @ 0x140579340 (KiMonitorCacheErrata.c)
 *     PfpServiceMainThreadUnboost @ 0x140582F20 (PfpServiceMainThreadUnboost.c)
 *     SmTerminateStoreProcess @ 0x1405C9BE8 (SmTerminateStoreProcess.c)
 *     MiStoreFreeWriteSupport @ 0x14065C2A4 (MiStoreFreeWriteSupport.c)
 *     VrpFreeKeyContext @ 0x14068EC34 (VrpFreeKeyContext.c)
 *     ObpUnlockDirectory @ 0x1406C3248 (ObpUnlockDirectory.c)
 *     ObOpenObjectByNameEx @ 0x1406ECFE0 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x1406ED720 (ObpLookupObjectName.c)
 *     PspChargeProcessWakeCounter @ 0x1407383D0 (PspChargeProcessWakeCounter.c)
 *     PspProcessDelete @ 0x1407610B0 (PspProcessDelete.c)
 *     VrpDestroyNamespaceNode @ 0x14077B604 (VrpDestroyNamespaceNode.c)
 *     ObpLockUnrelatedDirectoryShared @ 0x1407AA2AC (ObpLockUnrelatedDirectoryShared.c)
 *     ObpLockChildDirectory @ 0x1408748F0 (ObpLockChildDirectory.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14020B930 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140582BD8 (ObpPushStackInfo.c)
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
