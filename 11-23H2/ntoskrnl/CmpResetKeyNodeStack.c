/*
 * XREFs of CmpResetKeyNodeStack @ 0x140A203EC
 * Callers:
 *     CmpSubtreeEnumeratorReset @ 0x140A20980 (CmpSubtreeEnumeratorReset.c)
 *     CmpKeyEnumStackReset @ 0x140A2448C (CmpKeyEnumStackReset.c)
 * Callees:
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1406E02CC (HvpGetCellContextReinitialize.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1407D1FE0 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 */

void __fastcall CmpResetKeyNodeStack(__int16 *a1)
{
  __int16 i; // di
  __int64 *EntryAtLayerHeight; // rax
  __int64 *v4; // rbx
  __int64 v5; // rcx
  unsigned int *v6; // rdx

  for ( i = 0; i <= *a1; ++i )
  {
    EntryAtLayerHeight = (__int64 *)CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a1, i);
    v4 = EntryAtLayerHeight;
    if ( EntryAtLayerHeight[2] )
    {
      v5 = *EntryAtLayerHeight;
      v6 = (unsigned int *)(EntryAtLayerHeight + 3);
      if ( (*(_BYTE *)(*EntryAtLayerHeight + 140) & 1) != 0 )
        HvpReleaseCellFlat(v5, v6);
      else
        HvpReleaseCellPaged(v5, v6);
    }
    *(_OWORD *)v4 = 0LL;
    *((_OWORD *)v4 + 1) = 0LL;
    *((_DWORD *)v4 + 2) = -1;
    HvpGetCellContextReinitialize(v4 + 3);
  }
}
