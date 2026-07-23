/*
 * XREFs of CmpDereferenceKeyControlBlockUnsafe @ 0x1407690E0
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402F682C (CmpLoadKeyCommon.c)
 *     CmpCreateKeyControlBlock @ 0x1406D87C0 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x1406DD850 (CmpWalkOneLevel.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7EC0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     CmpCreateKeyBody @ 0x14072FA00 (CmpCreateKeyBody.c)
 *     CmpRundownUnitOfWork @ 0x140768FC8 (CmpRundownUnitOfWork.c)
 *     CmpCreateSiloKeyLockEntry @ 0x140847800 (CmpCreateSiloKeyLockEntry.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1408479CC (CmpCreateGlobalKeyLockEntry.c)
 *     CmpFreezeHive @ 0x14087531C (CmpFreezeHive.c)
 *     CmRenameKey @ 0x140A1465C (CmRenameKey.c)
 *     CmpCommitDiscardReplacePost @ 0x140A1FBB0 (CmpCommitDiscardReplacePost.c)
 *     CmpRefreshParent @ 0x140A2A300 (CmpRefreshParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

signed __int64 __fastcall CmpDereferenceKeyControlBlockUnsafe(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedExchangeAdd64(a1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
    KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
  return result;
}
