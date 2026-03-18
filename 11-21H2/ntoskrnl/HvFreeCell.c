/*
 * XREFs of HvFreeCell @ 0x14079BD98
 * Callers:
 *     CmpDereferenceSecurityNode @ 0x1402A2104 (CmpDereferenceSecurityNode.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140657670 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x140657ADC (CmpUndoDeleteKeyForTransEx.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14065AAAC (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCopyValue @ 0x14065B108 (CmpCopyValue.c)
 *     CmpConcatenateValueLists @ 0x14065C3B8 (CmpConcatenateValueLists.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x14065DDC4 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x14065DE48 (CmpLightWeightCreateSetValueData.c)
 *     CmpFreeIndexByCell @ 0x14065E7EC (CmpFreeIndexByCell.c)
 *     CmpDuplicateIndex @ 0x14065E880 (CmpDuplicateIndex.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140677DC0 (CmpSetSecurityDescriptorInfo.c)
 *     CmpSetValueDataNew @ 0x1406BE2FC (CmpSetValueDataNew.c)
 *     CmpRemoveValueFromList @ 0x1406BEFA0 (CmpRemoveValueFromList.c)
 *     CmpCreateHiveRootCell @ 0x1406C9FA0 (CmpCreateHiveRootCell.c)
 *     CmpCopyKeyPartial @ 0x1406D3BF0 (CmpCopyKeyPartial.c)
 *     CmpSetValueDataExisting @ 0x1406E3D54 (CmpSetValueDataExisting.c)
 *     CmDeleteValueKey @ 0x140714E58 (CmDeleteValueKey.c)
 *     CmpFreeKeyByCell @ 0x1407164DC (CmpFreeKeyByCell.c)
 *     CmpFreeKeyBody @ 0x1407166AC (CmpFreeKeyBody.c)
 *     CmpSetValueKeyExisting @ 0x1407169FC (CmpSetValueKeyExisting.c)
 *     CmpRemoveSubKeyFromList @ 0x140716F80 (CmpRemoveSubKeyFromList.c)
 *     CmpAddSubKeyEx @ 0x140718244 (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x1407187D4 (CmpAddToLeaf.c)
 *     CmpCreateChild @ 0x140719278 (CmpCreateChild.c)
 *     CmpTransMgrFreeVolatileData @ 0x14071BC94 (CmpTransMgrFreeVolatileData.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 *     CmpFreeValue @ 0x14079B22C (CmpFreeValue.c)
 *     CmpAddValueKeyNew @ 0x14079B758 (CmpAddValueKeyNew.c)
 *     HvReallocateCell @ 0x14079BA7C (HvReallocateCell.c)
 *     CmpFreeValueData @ 0x14079CF44 (CmpFreeValueData.c)
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 *     CmpFreeKeyValueList @ 0x14091F7C8 (CmpFreeKeyValueList.c)
 *     CmpFreeKeyValues @ 0x14091F87C (CmpFreeKeyValues.c)
 *     CmpSyncKeyValues @ 0x1409207EC (CmpSyncKeyValues.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x1409211E4 (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpSplitLeaf @ 0x140921510 (CmpSplitLeaf.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x1409239EC (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     HvpIsFreeNeighbor @ 0x14079BF50 (HvpIsFreeNeighbor.c)
 *     HvpRemoveFreeCellHint @ 0x14079C290 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x14079C440 (HvpEnlistFreeCell.c)
 *     HvpGetCellMap @ 0x140AB44C0 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140AB451C (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140AB4534 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvFreeCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rdi
  __int64 v4; // r13
  __int64 CellMap; // rax
  __int64 v6; // rcx
  __int64 BinAddress; // rax
  _QWORD *v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rsi
  int *v11; // rbx
  int v12; // edi
  int *v14; // rdx
  int v15; // ecx
  __int64 v16; // r9
  int v17; // r8d
  int v18; // eax
  __int64 v19; // rsi
  unsigned int v20; // r8d
  unsigned int v21; // r8d
  unsigned int v22; // r8d
  unsigned int v23; // eax
  unsigned int v24; // r8d
  unsigned int v25; // r11d
  __int64 v26; // rax
  int v27; // r8d
  _DWORD v28[2]; // [rsp+30h] [rbp-10h]
  ULONG_PTR BugCheckParameter3a; // [rsp+38h] [rbp-8h]
  __int16 v30; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v31; // [rsp+90h] [rbp+50h]
  int *v32; // [rsp+98h] [rbp+58h]

  v2 = (unsigned int)BugCheckParameter3;
  v30 = 0;
  v32 = 0LL;
  v4 = 0LL;
  HvpGetBinContextInitialize(&v30);
  ExAcquirePushLockExclusiveEx(BugCheckParameter2 + 80, 0LL);
  CellMap = HvpGetCellMap(BugCheckParameter2, (unsigned int)v2);
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v2, 0x654uLL);
  BinAddress = HvpMapEntryGetBinAddress(v6, CellMap, &v30);
  v10 = BinAddress;
  if ( (*(_BYTE *)(v9 + 8) & 4) != 0 )
  {
    v24 = *(_DWORD *)(BinAddress + 4);
    v25 = v24 + *(_DWORD *)(BinAddress + 8);
    while ( v24 < v25 )
    {
      v26 = HvpGetCellMap(BugCheckParameter2, v24);
      *(_QWORD *)(v26 + 8) &= ~4uLL;
      v24 = v27 + 4096;
    }
  }
  v11 = (int *)(v10 + *v8 + (v2 & 0xFFF));
  *v11 = -*v11;
  do
  {
    if ( (unsigned __int8)HvpIsFreeNeighbor(BugCheckParameter2, (unsigned int)v2 >> 31) != 1 )
      break;
    v14 = v32;
    v15 = *v11;
    v16 = (unsigned int)v4;
    v4 = (unsigned int)(v4 + 1);
    v17 = *v32;
    if ( v32 <= v11 )
    {
      *v32 = v17 + v15;
      v18 = v2 - v17;
      v11 = v14;
    }
    else
    {
      *v11 = v15 + v17;
      v18 = v15 + v2;
    }
    v28[v16] = v17;
    *((_DWORD *)&BugCheckParameter3a + v16) = v18;
  }
  while ( (unsigned int)v4 < 2 );
  v12 = (_DWORD)v11 + *(_DWORD *)(v10 + 4) + ((unsigned int)v2 >> 31 << 31) - v10;
  if ( (_DWORD)v4 )
  {
    v19 = 0LL;
    do
    {
      v20 = v28[v19];
      v31 = 0;
      v21 = (v20 >> 3) - 1;
      if ( v21 >= 0x10 )
      {
        v22 = v21 >> 4;
        if ( v22 <= 0xFF )
        {
          _BitScanReverse(&v23, v22);
          v31 = v23;
        }
      }
      HvpRemoveFreeCellHint(BugCheckParameter2, *(unsigned int *)((char *)&BugCheckParameter3a + v19 * 4), v12);
      ++v19;
      --v4;
    }
    while ( v4 );
  }
  HvpEnlistFreeCell(BugCheckParameter2);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2 + 80);
  return KeAbPostRelease(BugCheckParameter2 + 80);
}
