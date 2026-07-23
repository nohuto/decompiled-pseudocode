/*
 * XREFs of CmpCloneKCBValueListForTrans @ 0x1407D76BC
 * Callers:
 *     CmSetValueKey @ 0x1406D3270 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14070F134 (CmDeleteValueKey.c)
 * Callees:
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1406E02CC (HvpGetCellContextReinitialize.c)
 *     HvDuplicateCell @ 0x1407D77A0 (HvDuplicateCell.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpCloneKCBValueListForTrans(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v6; // edi
  ULONG_PTR v8; // rcx
  ULONG_PTR v9; // rdx
  __int64 CellFlat; // rax
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  HvpGetCellContextReinitialize(&v13);
  if ( *(_QWORD *)(a1 + 288) )
  {
    *a3 = 0;
    return 0;
  }
  v8 = *(_QWORD *)(a1 + 32);
  v9 = *(unsigned int *)(a1 + 40);
  if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v8, v9);
  else
    CellFlat = HvpGetCellPaged(v8, v9, (unsigned int *)&v13);
  v11 = CellFlat;
  if ( *(_DWORD *)(CellFlat + 36) )
  {
    v6 = HvDuplicateCell(*(_QWORD *)(a1 + 32), *(unsigned int *)(CellFlat + 40), a1 + 284);
    if ( v6 < 0 )
      goto LABEL_10;
    *(_DWORD *)(a1 + 280) = *(_DWORD *)(v11 + 36);
  }
  else
  {
    *(_DWORD *)(a1 + 280) = 0;
    *(_DWORD *)(a1 + 284) = -1;
  }
  v6 = 0;
  *a3 = 1;
  *(_QWORD *)(a1 + 288) = a2;
LABEL_10:
  v12 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v12 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v12, &v13);
  else
    HvpReleaseCellPaged(v12, (unsigned int *)&v13);
  return (unsigned int)v6;
}
