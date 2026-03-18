/*
 * XREFs of HvpMarkCellDirty @ 0x140746FA0
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x14067F1B8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpLightWeightPrepareRecreateKeyUoW @ 0x140680B00 (CmpLightWeightPrepareRecreateKeyUoW.c)
 *     CmpCreateChild @ 0x1406D0F70 (CmpCreateChild.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1406D231C (CmpUpdateKeyNodeAccessBits.c)
 *     CmSetValueKey @ 0x1406D3240 (CmSetValueKey.c)
 *     CmpCheckLeaf @ 0x1406DCAC0 (CmpCheckLeaf.c)
 *     CmpVEExecuteOpenLogic @ 0x1406DD4D0 (CmpVEExecuteOpenLogic.c)
 *     CmpCheckValueList @ 0x1406DE4C0 (CmpCheckValueList.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     CmpAddSubKeyEx @ 0x140708568 (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x1407089F4 (CmpAddToLeaf.c)
 *     CmpSetValueKeyNew @ 0x140709CD0 (CmpSetValueKeyNew.c)
 *     HvpFindFreeCellInBin @ 0x14070A950 (HvpFindFreeCellInBin.c)
 *     HvpIsFreeNeighbor @ 0x14070AE00 (HvpIsFreeNeighbor.c)
 *     CmpMarkKeyDirty @ 0x14070B460 (CmpMarkKeyDirty.c)
 *     CmpSetValueKeyExisting @ 0x14070B704 (CmpSetValueKeyExisting.c)
 *     CmpMarkValueDataDirty @ 0x14070BA48 (CmpMarkValueDataDirty.c)
 *     CmpMarkIndexDirtyInStorageType @ 0x14070C1CC (CmpMarkIndexDirtyInStorageType.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14070C9DC (CmpValidateHiveSecurityDescriptors.c)
 *     CmDeleteValueKey @ 0x14070EF24 (CmDeleteValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140768F14 (CmpTransMgrFreeVolatileData.c)
 *     CmpUpdateHiveRootCellFlags @ 0x1407D7F84 (CmpUpdateHiveRootCellFlags.c)
 *     CmpInsertSecurityCellList @ 0x1407DE120 (CmpInsertSecurityCellList.c)
 *     CmpMarkCurrentValueDirty @ 0x1408273B4 (CmpMarkCurrentValueDirty.c)
 *     CmpMarkCurrentProfileDirty @ 0x14084A84C (CmpMarkCurrentProfileDirty.c)
 *     CmpSelectLeaf @ 0x140874B10 (CmpSelectLeaf.c)
 *     CmpClearKeyAccessBits @ 0x1408859EC (CmpClearKeyAccessBits.c)
 *     HvMarkCellDirty @ 0x1408ABCF6 (HvMarkCellDirty.c)
 *     CmRestoreKey @ 0x140A0AC44 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140A0C890 (CmpRefreshHive.c)
 *     CmSetKeyFlags @ 0x140A159B4 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A15EE8 (CmSetLastWriteTimeKey.c)
 *     CmpSetValueKeyTombstone @ 0x140A16CF0 (CmpSetValueKeyTombstone.c)
 *     CmpDoBuildVirtualStack @ 0x140A190BC (CmpDoBuildVirtualStack.c)
 *     CmpCopySaclToVirtualKey @ 0x140A1B38C (CmpCopySaclToVirtualKey.c)
 *     CmpCopySyncTree2 @ 0x140A214A8 (CmpCopySyncTree2.c)
 *     CmpMarkKeyParentDirty @ 0x140A21FD0 (CmpMarkKeyParentDirty.c)
 *     CmpMarkKeyValuesDirty @ 0x140A22088 (CmpMarkKeyValuesDirty.c)
 *     CmpMarkAllChildrenDirty @ 0x140A2444C (CmpMarkAllChildrenDirty.c)
 *     CmpMarkEntireIndexDirty @ 0x140A24518 (CmpMarkEntireIndexDirty.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x140A246EC (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpSplitLeaf @ 0x140A24A2C (CmpSplitLeaf.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140A25DD4 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140A26218 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpLightWeightCreateSetValueData @ 0x140A28AC4 (CmpLightWeightCreateSetValueData.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140A28CF0 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140A28FA8 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140A2917C (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140A293A0 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x140A29774 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x140A29AB0 (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     HvpGetCellPaged @ 0x1406E0150 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0260 (HvpReleaseCellPaged.c)
 *     HvpMarkDirty @ 0x140747110 (HvpMarkDirty.c)
 *     HvpReleaseCellFlat @ 0x1407D9470 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FD9F0 (HvpGetCellFlat.c)
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
