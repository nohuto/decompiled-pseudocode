/*
 * XREFs of CmpFreeKeyByCell @ 0x1407164DC
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x1402089E0 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x14053F5E8 (CmDeleteLayeredKey.c)
 *     CmpCreateTombstone @ 0x14053FB50 (CmpCreateTombstone.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14065B3DC (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x14065C008 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpCleanupLightWeightUoWData @ 0x14065CFD4 (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14065DF64 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmDeleteKey @ 0x14067E1BC (CmDeleteKey.c)
 *     CmpCreateChild @ 0x140719278 (CmpCreateChild.c)
 *     CmpTransMgrFreeVolatileData @ 0x14071BC94 (CmpTransMgrFreeVolatileData.c)
 *     CmRestoreKey @ 0x14090C34C (CmRestoreKey.c)
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140920AB4 (CmpSyncSubKeysAfterDelete.c)
 *     CmpDeleteTree @ 0x1409222C0 (CmpDeleteTree.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x1409237B4 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140923ED0 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpFreeSecurityDescriptor @ 0x140715D90 (CmpFreeSecurityDescriptor.c)
 *     CmpFreeKeyBody @ 0x1407166AC (CmpFreeKeyBody.c)
 *     CmpMarkKeyDirty @ 0x140716758 (CmpMarkKeyDirty.c)
 *     CmpRemoveSubKey @ 0x140716ED0 (CmpRemoveSubKey.c)
 *     CmpFreeValue @ 0x14079B22C (CmpFreeValue.c)
 *     HvFreeCell @ 0x14079BD98 (HvFreeCell.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmUnlockHiveSecurity @ 0x140AB4484 (CmUnlockHiveSecurity.c)
 */

__int64 __fastcall CmpFreeKeyByCell(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3)
{
  unsigned int v3; // r14d
  unsigned int v6; // esi
  signed int v7; // edi
  __int64 CellFlat; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 CellPaged; // rax
  __int64 v12; // r15
  _QWORD v14[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+30h] BYREF
  __int64 v16; // [rsp+78h] [rbp+48h] BYREF

  v15 = 0xFFFFFFFFLL;
  v16 = 0xFFFFFFFFLL;
  v3 = BugCheckParameter4;
  v14[0] = 0xFFFFFFFFLL;
  ExAcquirePushLockExclusiveEx(BugCheckParameter3 + 1784, 0LL);
  v6 = 0;
  v7 = CmpMarkKeyDirty(BugCheckParameter3, v3);
  if ( v7 < 0 )
    goto LABEL_29;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v3, &v15);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v9 = CellFlat;
  if ( !CellFlat )
  {
    v7 = -1073741670;
    goto LABEL_29;
  }
  if ( a3 == 1 )
  {
    if ( !(unsigned __int8)CmpRemoveSubKey(BugCheckParameter3) )
      goto LABEL_36;
    v10 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
        ? HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(v9 + 16), &v16)
        : HvpGetCellPaged(BugCheckParameter3);
    if ( !v10 )
      goto LABEL_36;
    if ( !(*(_DWORD *)(v10 + 20) + *(_DWORD *)(v10 + 24)) )
    {
      *(_WORD *)(v10 + 52) = 0;
      *(_DWORD *)(v10 + 56) = 0;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v16);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v16);
  }
  if ( (*(_BYTE *)(v9 + 2) & 0x42) == 0 )
  {
    if ( !*(_DWORD *)(v9 + 36) )
    {
LABEL_24:
      if ( *(_DWORD *)(v9 + 44) != -1 )
        CmpFreeSecurityDescriptor(BugCheckParameter3, v3);
      goto LABEL_26;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(v9 + 40), v14);
    else
      CellPaged = HvpGetCellPaged(BugCheckParameter3);
    v12 = CellPaged;
    if ( CellPaged )
    {
      if ( *(_DWORD *)(v9 + 36) )
      {
        do
          CmpFreeValue(BugCheckParameter3, *(unsigned int *)(v12 + 4LL * v6++));
        while ( v6 < *(_DWORD *)(v9 + 36) );
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, v14);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v14);
      HvFreeCell(BugCheckParameter3, *(unsigned int *)(v9 + 40));
      goto LABEL_24;
    }
LABEL_36:
    v7 = -1073741670;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v15);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v15);
    goto LABEL_29;
  }
LABEL_26:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v15);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v15);
  v7 = (unsigned __int8)CmpFreeKeyBody(BugCheckParameter3, v3) == 0 ? 0xC000009A : 0;
LABEL_29:
  CmUnlockHiveSecurity(BugCheckParameter3);
  return (unsigned int)v7;
}
