/*
 * XREFs of CmpAddValueToListEx @ 0x140709CC4
 * Callers:
 *     CmSetValueKey @ 0x1406D3270 (CmSetValueKey.c)
 *     CmpSetValueKeyNew @ 0x140709EE0 (CmpSetValueKeyNew.c)
 *     CmpCopyKeyPartial @ 0x1407DDB28 (CmpCopyKeyPartial.c)
 *     CmpSetValueKeyTombstone @ 0x140A16FA0 (CmpSetValueKeyTombstone.c)
 *     CmpMergeKeyValues @ 0x140A22588 (CmpMergeKeyValues.c)
 *     CmpSyncKeyValues @ 0x140A23084 (CmpSyncKeyValues.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140A26084 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x140A29D60 (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1406E02CC (HvpGetCellContextReinitialize.c)
 *     HvReallocateCell @ 0x140709FC0 (HvReallocateCell.c)
 *     HvAllocateCell @ 0x14070A5D8 (HvAllocateCell.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpAddValueToListEx(
        ULONG_PTR BugCheckParameter3,
        int a2,
        unsigned int a3,
        int a4,
        unsigned int *a5,
        int a6)
{
  unsigned int *v6; // r15
  __int64 v9; // r12
  __int64 v11; // rbx
  unsigned int v12; // esi
  int Cell; // eax
  __int64 v14; // rdx
  unsigned int v15; // r14d
  int v17; // edx
  _DWORD *v18; // r8
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h] BYREF

  v6 = a5;
  LODWORD(a5) = 0;
  v19 = 0LL;
  v20 = 0LL;
  v9 = a3;
  HvpGetCellContextReinitialize(&v19);
  v11 = *v6;
  v12 = v11 + 1;
  if ( (unsigned int)(v11 + 1) <= 1 )
  {
    v17 = 1;
    if ( a6 )
      v17 = a6;
    Cell = HvAllocateCell(BugCheckParameter3, 4 * v17, a4, (unsigned int)&a5, (__int64)&v20, (__int64)&v19);
  }
  else
  {
    Cell = HvReallocateCell(BugCheckParameter3, v6[1], (__int64)&a5, (__int64)&v20, (__int64)&v19);
  }
  v14 = v20;
  v15 = Cell;
  if ( Cell >= 0 )
  {
    v6[1] = (unsigned int)a5;
    if ( (unsigned int)v11 > (unsigned int)v9 )
    {
      v18 = (_DWORD *)(v14 + 4 * v11);
      do
      {
        v11 = (unsigned int)(v11 - 1);
        *v18-- = *(_DWORD *)(v14 + 4 * v11);
      }
      while ( (unsigned int)v11 > (unsigned int)v9 );
    }
    *(_DWORD *)(v14 + 4 * v9) = a2;
    v15 = 0;
    *v6 = v12;
  }
  if ( v14 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v19);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v19);
  }
  return v15;
}
