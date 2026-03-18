/*
 * XREFs of CmpFreeValue @ 0x14079B22C
 * Callers:
 *     CmpCleanupLightWeightUoWData @ 0x14065CFD4 (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14065D320 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14065D7C4 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x14065DC44 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmDeleteValueKey @ 0x140714E58 (CmDeleteValueKey.c)
 *     CmpFreeKeyByCell @ 0x1407164DC (CmpFreeKeyByCell.c)
 *     CmpTransMgrFreeVolatileData @ 0x14071BC94 (CmpTransMgrFreeVolatileData.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 *     CmpSetValueKeyNew @ 0x14079B2C0 (CmpSetValueKeyNew.c)
 *     CmpSetValueKeyTombstone @ 0x140914BEC (CmpSetValueKeyTombstone.c)
 *     CmpFreeKeyValueList @ 0x14091F7C8 (CmpFreeKeyValueList.c)
 *     CmpFreeKeyValues @ 0x14091F87C (CmpFreeKeyValues.c)
 *     CmpSyncKeyValues @ 0x1409207EC (CmpSyncKeyValues.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvFreeCell @ 0x14079BD98 (HvFreeCell.c)
 *     CmpFreeValueData @ 0x14079CF44 (CmpFreeValueData.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

char __fastcall CmpFreeValue(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // edi
  __int64 CellFlat; // rax
  char v5; // al
  char v6; // cl
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0xFFFFFFFFLL;
  v2 = BugCheckParameter3;
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter2, BugCheckParameter3, &v8);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter2);
  if ( !CellFlat )
    return 0;
  v5 = CmpFreeValueData(BugCheckParameter2, *(unsigned int *)(CellFlat + 8));
  v6 = *(_BYTE *)(BugCheckParameter2 + 140);
  if ( !v5 )
  {
    if ( (v6 & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter2, &v8);
    else
      HvpReleaseCellPaged(BugCheckParameter2, &v8);
    return 0;
  }
  if ( (v6 & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter2, &v8);
  else
    HvpReleaseCellPaged(BugCheckParameter2, &v8);
  HvFreeCell(BugCheckParameter2, v2);
  return 1;
}
