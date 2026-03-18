/*
 * XREFs of CmpDereferenceKeyControlBlockUnsafe @ 0x140768EF0
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402F659C (CmpLoadKeyCommon.c)
 *     CmpCreateKeyControlBlock @ 0x1406D8790 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x1406DD820 (CmpWalkOneLevel.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7E90 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     CmpCreateKeyBody @ 0x14072F810 (CmpCreateKeyBody.c)
 *     CmpRundownUnitOfWork @ 0x140768DD8 (CmpRundownUnitOfWork.c)
 *     CmpCreateSiloKeyLockEntry @ 0x140847500 (CmpCreateSiloKeyLockEntry.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1408476CC (CmpCreateGlobalKeyLockEntry.c)
 *     CmpFreezeHive @ 0x1408750DC (CmpFreezeHive.c)
 *     CmRenameKey @ 0x140A143AC (CmRenameKey.c)
 *     CmpCommitDiscardReplacePost @ 0x140A1F900 (CmpCommitDiscardReplacePost.c)
 *     CmpRefreshParent @ 0x140A2A050 (CmpRefreshParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

signed __int64 __fastcall CmpDereferenceKeyControlBlockUnsafe(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedExchangeAdd64(a1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
    KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
  return result;
}
