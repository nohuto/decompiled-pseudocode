/*
 * XREFs of CmpLockKcbExclusive @ 0x1406D8468
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x140207A94 (CmpRemoveHiveFromNamespace.c)
 *     CmpDrainDelayDerefContext @ 0x14022D4F0 (CmpDrainDelayDerefContext.c)
 *     CmpCreateKeyControlBlock @ 0x1406D8790 (CmpCreateKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1406DB340 (CmpDeleteKeyObject.c)
 *     CmpVEExecuteOpenLogic @ 0x1406DD4D0 (CmpVEExecuteOpenLogic.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7E90 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14070FB48 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpLockKcbStackExclusive @ 0x1407107B8 (CmpLockKcbStackExclusive.c)
 *     CmpCreateKeyBody @ 0x14072F810 (CmpCreateKeyBody.c)
 *     CmpDelayCloseWorker @ 0x14076A130 (CmpDelayCloseWorker.c)
 *     CmpDereferenceKeyControlBlock @ 0x14076AB10 (CmpDereferenceKeyControlBlock.c)
 *     CmpVEExecuteCreateLogic @ 0x1407BA444 (CmpVEExecuteCreateLogic.c)
 *     CmpEnlistKeyBody @ 0x1407C026C (CmpEnlistKeyBody.c)
 *     CmLockKeyForWrite @ 0x1408472CC (CmLockKeyForWrite.c)
 *     CmpResolveHiveLoadConflict @ 0x140A16A18 (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A17744 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A18238 (CmKeyBodyReplicateToVirtual.c)
 *     CmpReplicateKeyToVirtual @ 0x140A19FA8 (CmpReplicateKeyToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140A1BDC4 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A1FABC (CmpEnumerateAllHigherLayerKcbs.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
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
