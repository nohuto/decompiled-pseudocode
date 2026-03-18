/*
 * XREFs of CmpCleanupKeyNodeStack @ 0x1407D1CB0
 * Callers:
 *     CmQueryLayeredKey @ 0x14035DC84 (CmQueryLayeredKey.c)
 *     CmSaveKey @ 0x140A0B990 (CmSaveKey.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140A20620 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140A23510 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackCleanup @ 0x140A23980 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140A242EC (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140A2585C (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140A25D00 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140A268F0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140A26A8C (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208C40 (CmSiFreeMemory.c)
 *     HvpReleaseCellPaged @ 0x1406E0260 (HvpReleaseCellPaged.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1407D1D10 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     HvpReleaseCellFlat @ 0x1407D9470 (HvpReleaseCellFlat.c)
 */

void __fastcall CmpCleanupKeyNodeStack(__int64 a1)
{
  unsigned __int16 i; // bx
  _QWORD *EntryAtLayerHeight; // rax
  struct _PRIVILEGE_SET *v4; // rcx
  __int64 v5; // rcx
  unsigned int *v6; // rdx

  for ( i = 0; i <= *(_WORD *)a1; ++i )
  {
    EntryAtLayerHeight = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(a1, i);
    if ( EntryAtLayerHeight[2] )
    {
      v5 = *EntryAtLayerHeight;
      v6 = (unsigned int *)(EntryAtLayerHeight + 3);
      if ( (*(_BYTE *)(*EntryAtLayerHeight + 140LL) & 1) != 0 )
        HvpReleaseCellFlat(v5, v6);
      else
        HvpReleaseCellPaged(v5, v6);
    }
  }
  v4 = *(struct _PRIVILEGE_SET **)(a1 + 72);
  if ( v4 )
    CmSiFreeMemory(v4);
}
