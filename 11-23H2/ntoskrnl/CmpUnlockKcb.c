/*
 * XREFs of CmpUnlockKcb @ 0x140AF55A0
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x140207A94 (CmpRemoveHiveFromNamespace.c)
 *     CmpDoQueryKeyName @ 0x140208F88 (CmpDoQueryKeyName.c)
 *     CmpDrainDelayDerefContext @ 0x14022D4F0 (CmpDrainDelayDerefContext.c)
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryMultipleValueKey @ 0x1406CFB38 (CmQueryMultipleValueKey.c)
 *     CmpUnlockKcbStack @ 0x1406D5368 (CmpUnlockKcbStack.c)
 *     CmQueryKey @ 0x1406D71D0 (CmQueryKey.c)
 *     CmpCreateKeyControlBlock @ 0x1406D8790 (CmpCreateKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1406DB340 (CmpDeleteKeyObject.c)
 *     CmpUnlockTwoKcbs @ 0x1406DBD14 (CmpUnlockTwoKcbs.c)
 *     CmpVEExecuteOpenLogic @ 0x1406DD4D0 (CmpVEExecuteOpenLogic.c)
 *     CmpWalkOneLevel @ 0x1406DD820 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x1406E02C0 (CmQueryValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E2300 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7E90 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     CmEnumerateValueKey @ 0x14070E840 (CmEnumerateValueKey.c)
 *     CmpCreateKeyBody @ 0x14072F810 (CmpCreateKeyBody.c)
 *     NtNotifyChangeMultipleKeys @ 0x140766B30 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x140768090 (CmpCloseKeyObject.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1407692E0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpDelayCloseWorker @ 0x14076A130 (CmpDelayCloseWorker.c)
 *     CmpDereferenceKeyControlBlock @ 0x14076AB10 (CmpDereferenceKeyControlBlock.c)
 *     NtFlushKey @ 0x1407AC4C0 (NtFlushKey.c)
 *     CmpVEExecuteCreateLogic @ 0x1407BA444 (CmpVEExecuteCreateLogic.c)
 *     CmpEnlistKeyBody @ 0x1407C026C (CmpEnlistKeyBody.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1407E251C (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmLockKeyForWrite @ 0x1408472CC (CmLockKeyForWrite.c)
 *     CmDumpKeyToFile @ 0x140A0AAA4 (CmDumpKeyToFile.c)
 *     CmRestoreKey @ 0x140A0AC44 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140A0C890 (CmpRefreshHive.c)
 *     CmpResolveHiveLoadConflict @ 0x140A16A18 (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A17744 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140A17EE0 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A17F74 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A18238 (CmKeyBodyReplicateToVirtual.c)
 *     CmpReplicateKeyToVirtual @ 0x140A19FA8 (CmpReplicateKeyToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140A1BDC4 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A1FABC (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpDumpKeyToBuffer @ 0x140AF58F4 (CmpDumpKeyToBuffer.c)
 *     CmpCreateRegistryRoot @ 0x140B36088 (CmpCreateRegistryRoot.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BD830 (ExfReleasePushLock.c)
 *     CmpDecommisssionKcb @ 0x140699D14 (CmpDecommisssionKcb.c)
 *     CmpIsKcbLockedExclusive @ 0x1406E90E0 (CmpIsKcbLockedExclusive.c)
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
