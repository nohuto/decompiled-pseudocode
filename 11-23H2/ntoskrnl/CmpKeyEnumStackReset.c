/*
 * XREFs of CmpKeyEnumStackReset @ 0x140A241DC
 * Callers:
 *     CmpSubtreeEnumeratorAdvance @ 0x140A20398 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpSubtreeEnumeratorReset @ 0x140A206D0 (CmpSubtreeEnumeratorReset.c)
 * Callees:
 *     CmpResetKeyNodeStack @ 0x140A2013C (CmpResetKeyNodeStack.c)
 *     CmpKeyEnumStackEntryCleanup @ 0x140A23D94 (CmpKeyEnumStackEntryCleanup.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x140A23E4C (CmpKeyEnumStackEntryInitialize.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140A240A8 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 */

void __fastcall CmpKeyEnumStackReset(__int64 a1)
{
  __int16 v1; // di
  __int64 *EntryAtLayerHeight; // rbx

  v1 = 0;
  *(_BYTE *)(a1 + 4) = 0;
  CmpResetKeyNodeStack((__int16 *)(a1 + 8));
  while ( v1 <= *(__int16 *)a1 )
  {
    EntryAtLayerHeight = (__int64 *)CmpKeyEnumStackGetEntryAtLayerHeight(a1, v1);
    CmpKeyEnumStackEntryCleanup(EntryAtLayerHeight);
    CmpKeyEnumStackEntryInitialize(EntryAtLayerHeight);
    ++v1;
  }
}
