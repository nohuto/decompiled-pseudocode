/*
 * XREFs of CmpFreeValue @ 0x14070AEC8
 * Callers:
 *     CmSetValueKey @ 0x1406D3240 (CmSetValueKey.c)
 *     CmpSetValueKeyNew @ 0x140709CD0 (CmpSetValueKeyNew.c)
 *     CmpFreeKeyByCell @ 0x14070B214 (CmpFreeKeyByCell.c)
 *     CmDeleteValueKey @ 0x14070EF24 (CmDeleteValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140768F14 (CmpTransMgrFreeVolatileData.c)
 *     CmpSetValueKeyTombstone @ 0x140A16CF0 (CmpSetValueKeyTombstone.c)
 *     CmpCleanupLightWeightUoWData @ 0x140A1C344 (CmpCleanupLightWeightUoWData.c)
 *     CmpFreeKeyValueList @ 0x140A21DBC (CmpFreeKeyValueList.c)
 *     CmpFreeKeyValues @ 0x140A21E70 (CmpFreeKeyValues.c)
 *     CmpSyncKeyValues @ 0x140A22DD4 (CmpSyncKeyValues.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x140A2839C (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x140A28890 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x140A29AB0 (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     HvpGetCellPaged @ 0x1406E0150 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0260 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x14070ABE0 (HvFreeCell.c)
 *     CmpFreeValueData @ 0x14070AF5C (CmpFreeValueData.c)
 *     HvpReleaseCellFlat @ 0x1407D9470 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FD9F0 (HvpGetCellFlat.c)
 */

char __fastcall CmpFreeValue(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // edi
  bool v3; // zf
  __int64 CellPaged; // rax
  char v6; // al
  char v7; // cl
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  v9 = -1;
  v2 = BugCheckParameter3;
  v3 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) == 0;
  v10 = 0;
  if ( v3 )
    CellPaged = HvpGetCellPaged(BugCheckParameter2, BugCheckParameter3, &v9);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter2, BugCheckParameter3);
  if ( !CellPaged )
    return 0;
  v6 = CmpFreeValueData(BugCheckParameter2, *(unsigned int *)(CellPaged + 8));
  v7 = *(_BYTE *)(BugCheckParameter2 + 140) & 1;
  if ( !v6 )
  {
    if ( v7 )
      HvpReleaseCellFlat(BugCheckParameter2, &v9);
    else
      HvpReleaseCellPaged(BugCheckParameter2, &v9);
    return 0;
  }
  if ( v7 )
    HvpReleaseCellFlat(BugCheckParameter2, &v9);
  else
    HvpReleaseCellPaged(BugCheckParameter2, &v9);
  HvFreeCell(BugCheckParameter2, v2);
  return 1;
}
