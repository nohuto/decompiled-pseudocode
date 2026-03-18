/*
 * XREFs of CmpDrainDelayDerefContext @ 0x14022D4F0
 * Callers:
 *     CmDeleteLayeredKey @ 0x1406168EC (CmDeleteLayeredKey.c)
 *     CmpCompleteUnloadKey @ 0x140688D18 (CmpCompleteUnloadKey.c)
 *     CmpLinkHiveToMaster @ 0x14068F84C (CmpLinkHiveToMaster.c)
 *     CmpPerformUnloadKey @ 0x140699394 (CmpPerformUnloadKey.c)
 *     CmpCleanUpKCBCacheTable @ 0x140699C14 (CmpCleanUpKCBCacheTable.c)
 *     CmSetValueKey @ 0x1406D3240 (CmSetValueKey.c)
 *     CmQueryKey @ 0x1406D71D0 (CmQueryKey.c)
 *     CmpDeleteKeyObject @ 0x1406DB340 (CmpDeleteKeyObject.c)
 *     CmEnumerateKey @ 0x1406DC440 (CmEnumerateKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7E90 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     CmDeleteValueKey @ 0x14070EF24 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14070FFEC (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140768F14 (CmpTransMgrFreeVolatileData.c)
 *     CmpDelayCloseWorker @ 0x14076A130 (CmpDelayCloseWorker.c)
 *     CmpDereferenceKeyControlBlock @ 0x14076AB10 (CmpDereferenceKeyControlBlock.c)
 *     CmpSaveBootControlSet @ 0x140A0A518 (CmpSaveBootControlSet.c)
 *     CmRestoreKey @ 0x140A0AC44 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140A0C890 (CmpRefreshHive.c)
 *     CmpCloneHwProfile @ 0x140A101B4 (CmpCloneHwProfile.c)
 *     CmRenameKey @ 0x140A143AC (CmRenameKey.c)
 *     CmpEnumerateLayeredKey @ 0x140A16414 (CmpEnumerateLayeredKey.c)
 *     CmpUnfreezeHive @ 0x140A16DA8 (CmpUnfreezeHive.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A18238 (CmKeyBodyReplicateToVirtual.c)
 *     CmpCommitLightWeightTransaction @ 0x140A1C46C (CmpCommitLightWeightTransaction.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A1FF54 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140A20080 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140A293A0 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpLockKcbExclusive @ 0x1406D8468 (CmpLockKcbExclusive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x14073E4A8 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x14076A4D0 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpUnlockHashEntry @ 0x14076A5C0 (CmpUnlockHashEntry.c)
 *     CmpUnlockKcb @ 0x140AF55A0 (CmpUnlockKcb.c)
 */

void __fastcall CmpDrainDelayDerefContext(_QWORD **a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rcx
  ULONG_PTR v4; // rbp
  void *v5; // r14
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rcx

  if ( *a1 != a1 )
  {
    while ( 1 )
    {
      v2 = *a1;
      if ( *a1 == a1 )
        break;
      if ( (_QWORD **)v2[1] != a1 || (v3 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2) )
        __fastfail(3u);
      *a1 = v3;
      v4 = (ULONG_PTR)(v2 - 28);
      v3[1] = a1;
      *((_BYTE *)v2 - 160) &= ~1u;
      v5 = (void *)*(v2 - 24);
      v2[1] = v2;
      *v2 = v2;
      CmpLockHashEntryExclusiveByKcb((ULONG_PTR)(v2 - 28));
      CmpLockKcbExclusive(v4);
      v6 = *(_QWORD *)(v4 + 192);
      v7 = 0LL;
      if ( v6 )
      {
        v8 = *(_QWORD *)(v6 + 24);
        if ( v8 )
        {
          v7 = *(_QWORD *)(v8 + 16);
          CmpUnlockKcb(v4);
          CmpLockKcbExclusive(v7);
          CmpLockKcbExclusive(v4);
        }
      }
      CmpDereferenceKeyControlBlockWithLock(v4);
      CmpUnlockKcb(v4);
      if ( v7 )
        CmpUnlockKcb(v7);
      CmpUnlockHashEntry(v5);
    }
  }
}
