/*
 * XREFs of CmpFreeKeyByCell @ 0x14070B424
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x140207A94 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x140616E3C (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x14061739C (CmpCreateTombstone.c)
 *     CmpCreateChild @ 0x1406D0FA0 (CmpCreateChild.c)
 *     CmDeleteKey @ 0x1407101FC (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140769104 (CmpTransMgrFreeVolatileData.c)
 *     CmRestoreKey @ 0x140A0AEF4 (CmRestoreKey.c)
 *     CmRenameKey @ 0x140A1465C (CmRenameKey.c)
 *     CmpCleanupLightWeightUoWData @ 0x140A1C5F4 (CmpCleanupLightWeightUoWData.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140A21388 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140A2334C (CmpSyncSubKeysAfterDelete.c)
 *     CmpDeleteTree @ 0x140A25E70 (CmpDeleteTree.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140A264C8 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A28418 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140A28FA0 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140A29650 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x14070ADF0 (HvFreeCell.c)
 *     CmpFreeValue @ 0x14070B0D8 (CmpFreeValue.c)
 *     CmpMarkKeyDirty @ 0x14070B670 (CmpMarkKeyDirty.c)
 *     CmpFreeKeyBody @ 0x14070BDD4 (CmpFreeKeyBody.c)
 *     CmpRemoveSubKey @ 0x14070BE80 (CmpRemoveSubKey.c)
 *     CmpFreeSecurityDescriptor @ 0x14070C1E0 (CmpFreeSecurityDescriptor.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 *     CmUnlockHiveSecurity @ 0x140AF5100 (CmUnlockHiveSecurity.c)
 */

__int64 __fastcall CmpFreeKeyByCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter4, char a3)
{
  unsigned __int64 *v3; // rsi
  unsigned int v5; // r14d
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int v9; // esi
  signed int v10; // edi
  __int64 CellFlat; // rax
  __int64 v12; // rdi
  ULONG_PTR v13; // rdx
  __int64 v14; // rax
  ULONG_PTR v16; // rdx
  __int64 CellPaged; // rax
  __int64 v18; // r15
  unsigned int v19[4]; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+60h] [rbp+30h] BYREF
  int v21; // [rsp+64h] [rbp+34h]
  unsigned int v22; // [rsp+78h] [rbp+48h] BYREF
  int v23; // [rsp+7Ch] [rbp+4Ch]

  v20 = -1;
  v3 = (unsigned __int64 *)(BugCheckParameter2 + 1784);
  v22 = -1;
  v19[0] = -1;
  v5 = BugCheckParameter4;
  v21 = 0;
  v23 = 0;
  v19[1] = 0;
  v7 = KeAbPreAcquire(BugCheckParameter2 + 1784, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v7, (__int64)v3);
  v9 = 0;
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  v10 = CmpMarkKeyDirty(BugCheckParameter2);
  if ( v10 >= 0 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter2, v5);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter2, v5, &v20);
    v12 = CellFlat;
    if ( !CellFlat )
    {
      v10 = -1073741670;
      goto LABEL_25;
    }
    if ( a3 == 1 )
    {
      if ( !(unsigned __int8)CmpRemoveSubKey(BugCheckParameter2) )
        goto LABEL_40;
      v13 = *(unsigned int *)(v12 + 16);
      v14 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0
          ? HvpGetCellFlat(BugCheckParameter2, v13)
          : HvpGetCellPaged(BugCheckParameter2, v13, &v22);
      if ( !v14 )
        goto LABEL_40;
      if ( !(*(_DWORD *)(v14 + 20) + *(_DWORD *)(v14 + 24)) )
      {
        *(_WORD *)(v14 + 52) = 0;
        *(_DWORD *)(v14 + 56) = 0;
      }
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter2, &v22);
      else
        HvpReleaseCellPaged(BugCheckParameter2, &v22);
    }
    if ( (*(_BYTE *)(v12 + 2) & 0x42) != 0 )
    {
LABEL_22:
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter2, &v20);
      else
        HvpReleaseCellPaged(BugCheckParameter2, &v20);
      v10 = (unsigned __int8)CmpFreeKeyBody(BugCheckParameter2, v5) == 0 ? 0xC000009A : 0;
      goto LABEL_25;
    }
    if ( !*(_DWORD *)(v12 + 36) )
    {
LABEL_20:
      if ( *(_DWORD *)(v12 + 44) != -1 )
        CmpFreeSecurityDescriptor(BugCheckParameter2);
      goto LABEL_22;
    }
    v16 = *(unsigned int *)(v12 + 40);
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(BugCheckParameter2, v16);
    else
      CellPaged = HvpGetCellPaged(BugCheckParameter2, v16, v19);
    v18 = CellPaged;
    if ( CellPaged )
    {
      if ( *(_DWORD *)(v12 + 36) )
      {
        do
          CmpFreeValue(BugCheckParameter2, *(unsigned int *)(v18 + 4LL * v9++));
        while ( v9 < *(_DWORD *)(v12 + 36) );
      }
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter2, v19);
      else
        HvpReleaseCellPaged(BugCheckParameter2, v19);
      HvFreeCell(BugCheckParameter2, *(unsigned int *)(v12 + 40));
      goto LABEL_20;
    }
LABEL_40:
    v10 = -1073741670;
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, &v20);
    else
      HvpReleaseCellPaged(BugCheckParameter2, &v20);
  }
LABEL_25:
  CmUnlockHiveSecurity(BugCheckParameter2);
  return (unsigned int)v10;
}
