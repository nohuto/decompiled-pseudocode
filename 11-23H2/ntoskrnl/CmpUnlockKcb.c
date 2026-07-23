/*
 * XREFs of CmpUnlockKcb @ 0x140AF55A0
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x140207A94 (CmpRemoveHiveFromNamespace.c)
 *     CmpDoQueryKeyName @ 0x140208F88 (CmpDoQueryKeyName.c)
 *     CmpDrainDelayDerefContext @ 0x14022D600 (CmpDrainDelayDerefContext.c)
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryMultipleValueKey @ 0x1406CFB68 (CmQueryMultipleValueKey.c)
 *     CmpUnlockKcbStack @ 0x1406D5398 (CmpUnlockKcbStack.c)
 *     CmQueryKey @ 0x1406D7200 (CmQueryKey.c)
 *     CmpCreateKeyControlBlock @ 0x1406D87C0 (CmpCreateKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1406DB370 (CmpDeleteKeyObject.c)
 *     CmpUnlockTwoKcbs @ 0x1406DBD44 (CmpUnlockTwoKcbs.c)
 *     CmpVEExecuteOpenLogic @ 0x1406DD500 (CmpVEExecuteOpenLogic.c)
 *     CmpWalkOneLevel @ 0x1406DD850 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x1406E02F0 (CmQueryValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E2330 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7EC0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     CmEnumerateValueKey @ 0x14070EA50 (CmEnumerateValueKey.c)
 *     CmpCreateKeyBody @ 0x14072FA00 (CmpCreateKeyBody.c)
 *     NtNotifyChangeMultipleKeys @ 0x140766D20 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x140768280 (CmpCloseKeyObject.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1407694D0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpDelayCloseWorker @ 0x14076A320 (CmpDelayCloseWorker.c)
 *     CmpDereferenceKeyControlBlock @ 0x14076AD00 (CmpDereferenceKeyControlBlock.c)
 *     NtFlushKey @ 0x1407AC6B0 (NtFlushKey.c)
 *     CmpVEExecuteCreateLogic @ 0x1407BA724 (CmpVEExecuteCreateLogic.c)
 *     CmpEnlistKeyBody @ 0x1407C053C (CmpEnlistKeyBody.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1407E27EC (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmLockKeyForWrite @ 0x1408475CC (CmLockKeyForWrite.c)
 *     CmDumpKeyToFile @ 0x140A0AD54 (CmDumpKeyToFile.c)
 *     CmRestoreKey @ 0x140A0AEF4 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140A0CB40 (CmpRefreshHive.c)
 *     CmpResolveHiveLoadConflict @ 0x140A16CC8 (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A179F4 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140A18190 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A18224 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A184E8 (CmKeyBodyReplicateToVirtual.c)
 *     CmpReplicateKeyToVirtual @ 0x140A1A258 (CmpReplicateKeyToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140A1C074 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A1FD6C (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpDumpKeyToBuffer @ 0x140AF58F4 (CmpDumpKeyToBuffer.c)
 *     CmpCreateRegistryRoot @ 0x140B36088 (CmpCreateRegistryRoot.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BDAC0 (ExfReleasePushLock.c)
 *     CmpDecommisssionKcb @ 0x140699D14 (CmpDecommisssionKcb.c)
 *     CmpIsKcbLockedExclusive @ 0x1406E9110 (CmpIsKcbLockedExclusive.c)
 */

signed __int32 __fastcall CmpUnlockKcb(ULONG_PTR a1)
{
  int v2; // esi
  __int64 v3; // rcx
  signed __int64 v4; // rax
  signed __int64 v5; // rdx
  signed __int32 result; // eax

  v2 = *(_DWORD *)(a1 + 8) & 0x80000;
  if ( CmpIsKcbLockedExclusive(a1) )
    *(_QWORD *)(v3 + 56) = 0LL;
  else
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 56));
  _m_prefetchw((const void *)(v3 + 48));
  v4 = *(_QWORD *)(v3 + 48);
  v5 = v4 - 16;
  if ( (v4 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v5 = 0LL;
  if ( (v4 & 2) != 0 || v4 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), v5, v4) )
    ExfReleasePushLock((_QWORD *)(a1 + 48));
  result = KeAbPostRelease(a1 + 48);
  if ( v2 )
    return CmpDecommisssionKcb(a1);
  return result;
}
