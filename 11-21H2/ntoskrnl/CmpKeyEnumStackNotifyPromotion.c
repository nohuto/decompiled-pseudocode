/*
 * XREFs of CmpKeyEnumStackNotifyPromotion @ 0x14065CB84
 * Callers:
 *     CmpPromoteSubtree @ 0x14065B6A0 (CmpPromoteSubtree.c)
 *     CmpPartialPromoteSubkeys @ 0x1409224D4 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     CmpKeyEnumStackEntryNotifyPromotion @ 0x14065CBDC (CmpKeyEnumStackEntryNotifyPromotion.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x14069F130 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14069F1CC (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpKeyEnumStackNotifyPromotion(__int64 a1)
{
  __int64 EntryAtLayerHeight; // rsi
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  ULONG_PTR v7; // rcx
  ULONG_PTR v8; // rdx

  EntryAtLayerHeight = CmpKeyEnumStackGetEntryAtLayerHeight(a1);
  CmpKeyEnumStackEntryNotifyPromotion(EntryAtLayerHeight);
  result = CmpKeyNodeStackGetEntryAtLayerHeight(a1 + 8);
  v4 = result;
  if ( *(_DWORD *)(result + 8) == -1 )
  {
    if ( *(_QWORD *)(result + 16) )
    {
      v5 = *(_QWORD *)result;
      v6 = result + 24;
      if ( (*(_BYTE *)(*(_QWORD *)result + 140LL) & 1) != 0 )
        HvpReleaseCellFlat(v5, v6);
      else
        HvpReleaseCellPaged(v5, v6);
    }
    *(_OWORD *)v4 = 0LL;
    *(_OWORD *)(v4 + 16) = 0LL;
    *(_DWORD *)(v4 + 8) = -1;
    HvpGetCellContextReinitialize(v4 + 24);
    v7 = *(_QWORD *)EntryAtLayerHeight;
    v8 = *(unsigned int *)(EntryAtLayerHeight + 112);
    *(_QWORD *)v4 = *(_QWORD *)EntryAtLayerHeight;
    *(_DWORD *)(v4 + 8) = v8;
    if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
      result = HvpGetCellFlat(v7, v8);
    else
      result = HvpGetCellPaged(v7);
    *(_QWORD *)(v4 + 16) = result;
  }
  return result;
}
