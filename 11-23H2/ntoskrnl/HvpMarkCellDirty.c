/*
 * XREFs of HvpMarkCellDirty @ 0x140747190
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x14067F1B8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpLightWeightPrepareRecreateKeyUoW @ 0x140680B00 (CmpLightWeightPrepareRecreateKeyUoW.c)
 *     CmpCreateChild @ 0x1406D0FA0 (CmpCreateChild.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1406D234C (CmpUpdateKeyNodeAccessBits.c)
 *     CmSetValueKey @ 0x1406D3270 (CmSetValueKey.c)
 *     CmpCheckLeaf @ 0x1406DCAF0 (CmpCheckLeaf.c)
 *     CmpVEExecuteOpenLogic @ 0x1406DD500 (CmpVEExecuteOpenLogic.c)
 *     CmpCheckValueList @ 0x1406DE4F0 (CmpCheckValueList.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     CmpAddSubKeyEx @ 0x140708778 (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x140708C04 (CmpAddToLeaf.c)
 *     CmpSetValueKeyNew @ 0x140709EE0 (CmpSetValueKeyNew.c)
 *     HvpFindFreeCellInBin @ 0x14070AB60 (HvpFindFreeCellInBin.c)
 *     HvpIsFreeNeighbor @ 0x14070B010 (HvpIsFreeNeighbor.c)
 *     CmpMarkKeyDirty @ 0x14070B670 (CmpMarkKeyDirty.c)
 *     CmpSetValueKeyExisting @ 0x14070B914 (CmpSetValueKeyExisting.c)
 *     CmpMarkValueDataDirty @ 0x14070BC58 (CmpMarkValueDataDirty.c)
 *     CmpMarkIndexDirtyInStorageType @ 0x14070C3DC (CmpMarkIndexDirtyInStorageType.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14070CBEC (CmpValidateHiveSecurityDescriptors.c)
 *     CmDeleteValueKey @ 0x14070F134 (CmDeleteValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140769104 (CmpTransMgrFreeVolatileData.c)
 *     CmpUpdateHiveRootCellFlags @ 0x1407D8254 (CmpUpdateHiveRootCellFlags.c)
 *     CmpInsertSecurityCellList @ 0x1407DE3F0 (CmpInsertSecurityCellList.c)
 *     CmpMarkCurrentValueDirty @ 0x1408276B4 (CmpMarkCurrentValueDirty.c)
 *     CmpMarkCurrentProfileDirty @ 0x14084AB4C (CmpMarkCurrentProfileDirty.c)
 *     CmpSelectLeaf @ 0x140874D50 (CmpSelectLeaf.c)
 *     CmpClearKeyAccessBits @ 0x140885C2C (CmpClearKeyAccessBits.c)
 *     HvMarkCellDirty @ 0x1408ABF46 (HvMarkCellDirty.c)
 *     CmRestoreKey @ 0x140A0AEF4 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140A0CB40 (CmpRefreshHive.c)
 *     CmSetKeyFlags @ 0x140A15C64 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A16198 (CmSetLastWriteTimeKey.c)
 *     CmpSetValueKeyTombstone @ 0x140A16FA0 (CmpSetValueKeyTombstone.c)
 *     CmpDoBuildVirtualStack @ 0x140A1936C (CmpDoBuildVirtualStack.c)
 *     CmpCopySaclToVirtualKey @ 0x140A1B63C (CmpCopySaclToVirtualKey.c)
 *     CmpCopySyncTree2 @ 0x140A21758 (CmpCopySyncTree2.c)
 *     CmpMarkKeyParentDirty @ 0x140A22280 (CmpMarkKeyParentDirty.c)
 *     CmpMarkKeyValuesDirty @ 0x140A22338 (CmpMarkKeyValuesDirty.c)
 *     CmpMarkAllChildrenDirty @ 0x140A246FC (CmpMarkAllChildrenDirty.c)
 *     CmpMarkEntireIndexDirty @ 0x140A247C8 (CmpMarkEntireIndexDirty.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x140A2499C (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpSplitLeaf @ 0x140A24CDC (CmpSplitLeaf.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140A26084 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140A264C8 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpLightWeightCreateSetValueData @ 0x140A28D74 (CmpLightWeightCreateSetValueData.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140A28FA0 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140A29258 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140A2942C (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140A29650 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x140A29A24 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x140A29D60 (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpMarkDirty @ 0x140747300 (HvpMarkDirty.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 *     HvpGetCellMap @ 0x140AF5280 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpMarkCellDirty(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3)
{
  ULONG_PTR v3; // rdi
  int v4; // eax
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 CellFlat; // rax
  int v11; // edi
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+54h] [rbp+Ch]

  v3 = (unsigned int)BugCheckParameter4;
  v13 = 0;
  v4 = *(_DWORD *)(BugCheckParameter3 + 160);
  v12 = -1;
  if ( (v4 & 1) != 0 || (BugCheckParameter4 & 0x80000000) != 0LL )
    return 0LL;
  if ( !a3 )
  {
    v8 = KeAbPreAcquire(BugCheckParameter3 + 80, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter3 + 80), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter3 + 80), v8, BugCheckParameter3 + 80);
    if ( v9 )
      *(_BYTE *)(v9 + 18) = 1;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, (unsigned int)v3);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v3, &v12);
  if ( !CellFlat || CellFlat == 4 )
  {
    if ( !a3 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter3 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter3 + 80));
      KeAbPostRelease(BugCheckParameter3 + 80);
    }
    return 3221225626LL;
  }
  else
  {
    if ( !HvpGetCellMap(BugCheckParameter3, (unsigned int)v3) )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter3, v3, 0x2A7uLL);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v12);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v12);
    v11 = HvpMarkDirty(BugCheckParameter3);
    if ( !a3 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter3 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter3 + 80));
      KeAbPostRelease(BugCheckParameter3 + 80);
    }
    if ( v11 < 0 )
    {
      return (unsigned int)v11;
    }
    else
    {
      *(_BYTE *)(BugCheckParameter3 + 141) = 1;
      return 0LL;
    }
  }
}
