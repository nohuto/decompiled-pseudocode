/*
 * XREFs of CmpEnumerateAllHigherLayerKcbs @ 0x1406E93C0
 * Callers:
 *     CmDeleteKey @ 0x14067E1BC (CmDeleteKey.c)
 *     CmpCleanupDiscardReplaceContext @ 0x14067E8A8 (CmpCleanupDiscardReplaceContext.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x1406E9370 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmRestoreKey @ 0x14090C34C (CmRestoreKey.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14091CB44 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x14091CDE8 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14091CF4C (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x14091D070 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x1409237B4 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140923ED0 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406FEA54 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpReferenceKeyControlBlock @ 0x14071B250 (CmpReferenceKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x1407C0854 (CmpLockKcbExclusive.c)
 *     CmpLockKcbShared @ 0x140AB42D0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 */

_UNKNOWN **__fastcall CmpEnumerateAllHigherLayerKcbs(
        __int64 a1,
        unsigned int (__fastcall *a2)(ULONG_PTR, __int64),
        unsigned int (__fastcall *a3)(ULONG_PTR, __int64, __int64),
        __int64 a4,
        __int64 a5,
        char a6,
        char a7)
{
  _UNKNOWN **result; // rax
  _QWORD *v8; // rdi
  bool v9; // bp
  unsigned int (__fastcall *v11)(ULONG_PTR, __int64, __int64); // r9
  _QWORD *v13; // rbx
  char v14; // r10
  ULONG_PTR v15; // rsi
  _QWORD *v16; // r15
  ULONG_PTR v17; // rcx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v8 = *(_QWORD **)(a1 + 192);
  v9 = 0;
  v11 = a3;
  if ( v8 )
  {
    v13 = (_QWORD *)v8[4];
    result = (_UNKNOWN **)(v8 + 4);
    v14 = 0;
    if ( v13 != v8 + 4 )
    {
      while ( v13 == v8 + 4 )
      {
        v13 = v8;
        v14 = 1;
        v8 = (_QWORD *)v8[3];
LABEL_19:
        result = (_UNKNOWN **)(*(_QWORD *)(a1 + 192) + 32LL);
        if ( v13 == result )
          return result;
      }
      v15 = v13[2];
      v16 = v13;
      if ( v14 )
      {
        v13 = (_QWORD *)*v13;
        if ( !v9 )
          v9 = v11(v15, a4, a5) == 1;
        if ( a6 )
          CmpDereferenceKeyControlBlockWithLock(v15);
        else
          CmpUnlockKcb(v15);
        if ( v9 )
        {
          v13 = v8;
          v14 = 1;
          v8 = (_QWORD *)v8[3];
          goto LABEL_18;
        }
      }
      else
      {
        v17 = v13[2];
        if ( a6 )
        {
          CmpReferenceKeyControlBlock(v17);
        }
        else if ( a7 )
        {
          CmpLockKcbExclusive(v17);
        }
        else
        {
          CmpLockKcbShared(v17);
        }
        if ( a2(v15, a5) == 1 )
        {
          v13 = (_QWORD *)v13[4];
          v8 = v16;
        }
        else
        {
          v13 = (_QWORD *)*v13;
          if ( a6 )
            CmpDereferenceKeyControlBlockWithLock(v15);
          else
            CmpUnlockKcb(v15);
        }
      }
      v14 = 0;
LABEL_18:
      v11 = a3;
      goto LABEL_19;
    }
  }
  return result;
}
