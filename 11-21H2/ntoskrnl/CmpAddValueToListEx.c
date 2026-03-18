/*
 * XREFs of CmpAddValueToListEx @ 0x14079B920
 * Callers:
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14065AAAC (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14065D7C4 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpCopyKeyPartial @ 0x1406D3BF0 (CmpCopyKeyPartial.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 *     CmpSetValueKeyNew @ 0x14079B2C0 (CmpSetValueKeyNew.c)
 *     CmpSetValueKeyTombstone @ 0x140914BEC (CmpSetValueKeyTombstone.c)
 *     CmpMergeKeyValues @ 0x14091FCD8 (CmpMergeKeyValues.c)
 *     CmpSyncKeyValues @ 0x1409207EC (CmpSyncKeyValues.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvReallocateCell @ 0x14079BA7C (HvReallocateCell.c)
 *     HvAllocateCell @ 0x14079C8A4 (HvAllocateCell.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 */

__int64 __fastcall CmpAddValueToListEx(
        ULONG_PTR BugCheckParameter3,
        int a2,
        unsigned int a3,
        int a4,
        unsigned int *a5,
        int a6)
{
  __int64 v6; // r12
  __int64 v10; // rbx
  unsigned int v11; // esi
  int Cell; // eax
  __int64 v13; // rdx
  unsigned int v14; // r14d
  int v16; // edx
  _DWORD *v17; // r8
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h] BYREF
  __int64 v20[2]; // [rsp+50h] [rbp-10h] BYREF

  v6 = a3;
  LODWORD(v18) = 0;
  v19 = 0LL;
  v20[0] = 0LL;
  HvpGetCellContextReinitialize(&v19);
  v10 = *a5;
  v11 = v10 + 1;
  if ( (unsigned int)(v10 + 1) <= 1 )
  {
    v16 = 1;
    if ( a6 )
      v16 = a6;
    Cell = HvAllocateCell(BugCheckParameter3, 4 * v16, a4, (unsigned int)&v18, (__int64)v20, (__int64)&v19);
  }
  else
  {
    Cell = HvReallocateCell(BugCheckParameter3, a5[1], (__int64)&v18, (__int64)v20, (__int64)&v19);
  }
  v13 = v20[0];
  v14 = Cell;
  if ( Cell >= 0 )
  {
    a5[1] = v18;
    if ( (unsigned int)v10 > (unsigned int)v6 )
    {
      v17 = (_DWORD *)(v13 + 4 * v10);
      do
      {
        v10 = (unsigned int)(v10 - 1);
        *v17-- = *(_DWORD *)(v13 + 4 * v10);
      }
      while ( (unsigned int)v10 > (unsigned int)v6 );
    }
    *(_DWORD *)(v13 + 4 * v6) = a2;
    v14 = 0;
    *a5 = v11;
  }
  if ( v13 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v19);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v19);
  }
  return v14;
}
