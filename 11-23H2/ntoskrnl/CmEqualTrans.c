/*
 * XREFs of CmEqualTrans @ 0x1407691C0
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     CmpIsKeyStackDeleted @ 0x1406D3EAC (CmpIsKeyStackDeleted.c)
 *     CmGetKeyLastWriteTime @ 0x1406D51B4 (CmGetKeyLastWriteTime.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1406D52B8 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmGetKCBCacheSecurity @ 0x1406D57C0 (CmGetKCBCacheSecurity.c)
 *     CmpQueryKeyDataFromNode @ 0x1406DAA50 (CmpQueryKeyDataFromNode.c)
 *     CmpFindSubKeyByNumberEx @ 0x1406DAFD0 (CmpFindSubKeyByNumberEx.c)
 *     CmpWalkOneLevel @ 0x1406DD820 (CmpWalkOneLevel.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     CmDeleteKey @ 0x14070FFEC (CmDeleteKey.c)
 *     CmGetVisibleSubkeyCount @ 0x1407106E8 (CmGetVisibleSubkeyCount.c)
 *     CmpTransMgrFreeVolatileData @ 0x140768F14 (CmpTransMgrFreeVolatileData.c)
 *     CmpLockIXLockIntent @ 0x14076AC30 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x14076AF0C (CmpLockIXLockExclusive.c)
 *     CmRmIsKCBVisible @ 0x1407B39E0 (CmRmIsKCBVisible.c)
 *     CmGetKeyFlags @ 0x1407EAA30 (CmGetKeyFlags.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF5160 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AF52F0 (CmpIsKeyDeletedForKeyBody.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x140A1C2D0 (CmpTransUowIsEqual.c)
 */

char __fastcall CmEqualTrans(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8

  if ( !a1 || !a2 )
    return 0;
  if ( a1 == a2 )
    return 1;
  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 && (v4 = *(_QWORD *)(a2 + 56)) != 0 )
    return v3 == v4;
  else
    return CmpTransUowIsEqual(a1 + 88, a2 + 88);
}
