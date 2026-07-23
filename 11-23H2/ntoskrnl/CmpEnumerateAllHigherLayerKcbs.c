/*
 * XREFs of CmpEnumerateAllHigherLayerKcbs @ 0x140A1FD6C
 * Callers:
 *     CmDeleteKey @ 0x1407101FC (CmDeleteKey.c)
 *     CmpCleanupDiscardReplaceContext @ 0x140710990 (CmpCleanupDiscardReplaceContext.c)
 *     CmpSaveBootControlSet @ 0x140A0A7C8 (CmpSaveBootControlSet.c)
 *     CmRestoreKey @ 0x140A0AEF4 (CmRestoreKey.c)
 *     CmRenameKey @ 0x140A1465C (CmRenameKey.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A1FB44 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140A1FEF8 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x140A1FFE8 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A20204 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140A20330 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A28418 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140A29650 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     CmpLockKcbExclusive @ 0x1406D8498 (CmpLockKcbExclusive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x14073E698 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpReferenceKeyControlBlock @ 0x14076A8E0 (CmpReferenceKeyControlBlock.c)
 *     CmpLockKcbShared @ 0x140AF5530 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AF55A0 (CmpUnlockKcb.c)
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
  char v13; // r8
  _QWORD *v14; // rbx
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
    result = (_UNKNOWN **)(v8 + 4);
    v13 = 0;
    v14 = (_QWORD *)v8[4];
    if ( v14 != v8 + 4 )
    {
      while ( v14 == v8 + 4 )
      {
        v14 = v8;
        v13 = 1;
        v8 = (_QWORD *)v8[3];
LABEL_18:
        result = (_UNKNOWN **)(*(_QWORD *)(a1 + 192) + 32LL);
        if ( v14 == result )
          return result;
      }
      v15 = v14[2];
      v16 = v14;
      if ( v13 )
      {
        v14 = (_QWORD *)*v14;
        if ( !v9 )
          v9 = v11(v15, a4, a5) == 1;
        if ( a6 )
          CmpDereferenceKeyControlBlockWithLock(v15, a4, 0);
        else
          CmpUnlockKcb(v15);
        if ( v9 )
        {
          v14 = v8;
          v13 = 1;
          v8 = (_QWORD *)v8[3];
          goto LABEL_17;
        }
      }
      else
      {
        v17 = v14[2];
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
          v14 = (_QWORD *)v14[4];
          v8 = v16;
        }
        else
        {
          v14 = (_QWORD *)*v14;
          if ( a6 )
            CmpDereferenceKeyControlBlockWithLock(v15, a4, 0);
          else
            CmpUnlockKcb(v15);
        }
      }
      v13 = 0;
LABEL_17:
      v11 = a3;
      goto LABEL_18;
    }
  }
  return result;
}
