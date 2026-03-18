/*
 * XREFs of CmpReferenceKeyControlBlockUnsafe @ 0x1406D92C8
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402F659C (CmpLoadKeyCommon.c)
 *     CmpLinkHiveToMaster @ 0x14068F84C (CmpLinkHiveToMaster.c)
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     CmpCreateKeyControlBlock @ 0x1406D8790 (CmpCreateKeyControlBlock.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140768F14 (CmpTransMgrFreeVolatileData.c)
 *     CmLoadAppKey @ 0x140769640 (CmLoadAppKey.c)
 *     CmpCreateSiloKeyLockEntry @ 0x140847500 (CmpCreateSiloKeyLockEntry.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1408476CC (CmpCreateGlobalKeyLockEntry.c)
 *     CmpFreezeHive @ 0x1408750DC (CmpFreezeHive.c)
 *     CmpCloneToUnbackedKcb @ 0x140A16E04 (CmpCloneToUnbackedKcb.c)
 *     CmpCommitDiscardReplacePost @ 0x140A1F900 (CmpCommitDiscardReplacePost.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140A239E8 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpRefreshParent @ 0x140A2A050 (CmpRefreshParent.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpReferenceKeyControlBlockUnsafe(volatile signed __int64 *BugCheckParameter2)
{
  __int64 result; // rax

  result = _InterlockedIncrement64(BugCheckParameter2);
  if ( !result )
    KeBugCheckEx(0x51u, 0x24uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  if ( result == 1 )
    KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
  return result;
}
