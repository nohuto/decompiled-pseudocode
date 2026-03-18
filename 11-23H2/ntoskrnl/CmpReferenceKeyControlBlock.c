/*
 * XREFs of CmpReferenceKeyControlBlock @ 0x14076A6F0
 * Callers:
 *     CmpTransEnlistUowInKcb @ 0x140302E30 (CmpTransEnlistUowInKcb.c)
 *     CmpFindSubKeyByNumberEx @ 0x1406DAFD0 (CmpFindSubKeyByNumberEx.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1407692E0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpCreateLayerLink @ 0x1407DA59C (CmpCreateLayerLink.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1407E251C (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmRenameKey @ 0x140A143AC (CmRenameKey.c)
 *     CmpResolveHiveLoadConflict @ 0x140A16A18 (CmpResolveHiveLoadConflict.c)
 *     CmpGetVirtualStoreRoot @ 0x140A19C84 (CmpGetVirtualStoreRoot.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A1FABC (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardReplacePost @ 0x140A20000 (CmpPrepareDiscardReplacePost.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140A293A0 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     CmpRemoveFromDelayedClose @ 0x14076BDB8 (CmpRemoveFromDelayedClose.c)
 */

__int64 __fastcall CmpReferenceKeyControlBlock(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x80000) != 0 )
    KeBugCheckEx(0x51u, 0x20uLL, BugCheckParameter2, 0LL, 0LL);
  if ( !_InterlockedIncrement64((volatile signed __int64 *)BugCheckParameter2) )
    KeBugCheckEx(0x51u, 0x24uLL, BugCheckParameter2, 0LL, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter2 + 64) & 2) != 0 )
    return CmpRemoveFromDelayedClose(BugCheckParameter2);
  return result;
}
