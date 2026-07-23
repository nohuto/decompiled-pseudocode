/*
 * XREFs of CmpLockKcbExclusive @ 0x1406D8498
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x140207A94 (CmpRemoveHiveFromNamespace.c)
 *     CmpDrainDelayDerefContext @ 0x14022D600 (CmpDrainDelayDerefContext.c)
 *     CmpCreateKeyControlBlock @ 0x1406D87C0 (CmpCreateKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1406DB370 (CmpDeleteKeyObject.c)
 *     CmpVEExecuteOpenLogic @ 0x1406DD500 (CmpVEExecuteOpenLogic.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7EC0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14070FD58 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpLockKcbStackExclusive @ 0x1407109C8 (CmpLockKcbStackExclusive.c)
 *     CmpCreateKeyBody @ 0x14072FA00 (CmpCreateKeyBody.c)
 *     CmpDelayCloseWorker @ 0x14076A320 (CmpDelayCloseWorker.c)
 *     CmpDereferenceKeyControlBlock @ 0x14076AD00 (CmpDereferenceKeyControlBlock.c)
 *     CmpVEExecuteCreateLogic @ 0x1407BA724 (CmpVEExecuteCreateLogic.c)
 *     CmpEnlistKeyBody @ 0x1407C053C (CmpEnlistKeyBody.c)
 *     CmLockKeyForWrite @ 0x1408475CC (CmLockKeyForWrite.c)
 *     CmpResolveHiveLoadConflict @ 0x140A16CC8 (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A179F4 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A184E8 (CmKeyBodyReplicateToVirtual.c)
 *     CmpReplicateKeyToVirtual @ 0x140A1A258 (CmpReplicateKeyToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140A1C074 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A1FD6C (CmpEnumerateAllHigherLayerKcbs.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *__fastcall CmpLockKcbExclusive(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  struct _KTHREAD *result; // rax

  v1 = (unsigned __int64 *)(a1 + 48);
  v3 = KeAbPreAcquire(a1 + 48, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v3, (__int64)v1);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  result = KeGetCurrentThread();
  *(_QWORD *)(a1 + 56) = result;
  return result;
}
