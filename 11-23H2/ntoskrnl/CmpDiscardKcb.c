/*
 * XREFs of CmpDiscardKcb @ 0x14076AD08
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x140207A94 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x1406168EC (CmDeleteLayeredKey.c)
 *     CmpInvalidateSubtreeWorker @ 0x140682700 (CmpInvalidateSubtreeWorker.c)
 *     CmpCompleteUnloadKey @ 0x140688D18 (CmpCompleteUnloadKey.c)
 *     CmDeleteKey @ 0x14070FFEC (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140768F14 (CmpTransMgrFreeVolatileData.c)
 *     CmpRefreshWorkerRoutine @ 0x140A0CE20 (CmpRefreshWorkerRoutine.c)
 *     CmRenameKey @ 0x140A143AC (CmRenameKey.c)
 *     CmpCommitDiscardReplacePost @ 0x140A1F900 (CmpCommitDiscardReplacePost.c)
 *     CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x140A1FD80 (CmpInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A28168 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140A284D8 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x140769590 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpRemoveKeyHash @ 0x14076ACB0 (CmpRemoveKeyHash.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x14076AE28 (CmpUnlockDeletedHashEntryByKcb.c)
 */

__int64 __fastcall CmpDiscardKcb(ULONG_PTR BugCheckParameter4)
{
  _QWORD *v1; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rcx
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 **v14; // rdx

  v1 = *(_QWORD **)(BugCheckParameter4 + 192);
  if ( v1 )
  {
    v8 = v1[3];
    if ( v8 )
    {
      v9 = *v1;
      v10 = *(_QWORD *)(v8 + 16);
      if ( *(_QWORD **)(*v1 + 8LL) != v1
        || (v11 = (_QWORD *)v1[1], (_QWORD *)*v11 != v1)
        || (*v11 = v9,
            *(_QWORD *)(v9 + 8) = v11,
            v12 = *(__int64 **)(BugCheckParameter4 + 192),
            v13 = *(_QWORD *)(v10 + 192) + 48LL,
            v14 = *(__int64 ***)(*(_QWORD *)(v10 + 192) + 56LL),
            *v14 != (__int64 *)v13) )
      {
        __fastfail(3u);
      }
      *v12 = v13;
      v12[1] = (__int64)v14;
      *v14 = v12;
      *(_QWORD *)(v13 + 8) = v12;
    }
  }
  v3 = *(_QWORD *)(BugCheckParameter4 + 32);
  ++*(_QWORD *)(BugCheckParameter4 + 304);
  *(_DWORD *)(BugCheckParameter4 + 8) |= 0x20000u;
  CmpRemoveKeyHash(v3, (_DWORD *)(BugCheckParameter4 + 16));
  CmpLockDeletedHashEntryExclusiveByKcb(BugCheckParameter4);
  v4 = *(_QWORD *)(BugCheckParameter4 + 32);
  v5 = *(_QWORD *)(v4 + 1664);
  v6 = 3
     * ((unsigned int)(*(_DWORD *)(v4 + 1672) - 1) & ((unsigned int)(101027
                                                                   * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) >> 9)));
  *(_QWORD *)(BugCheckParameter4 + 24) = *(_QWORD *)(v5
                                                   + 24
                                                   * ((unsigned int)(*(_DWORD *)(v4 + 1672) - 1) & ((unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) >> 9)))
                                                   + 16);
  *(_QWORD *)(v5 + 8 * v6 + 16) = BugCheckParameter4 + 16;
  return CmpUnlockDeletedHashEntryByKcb(BugCheckParameter4);
}
