/*
 * XREFs of CmpKeyEnumStackReset @ 0x14065BC50
 * Callers:
 *     CmpSubtreeEnumeratorAdvance @ 0x14065B81C (CmpSubtreeEnumeratorAdvance.c)
 *     CmpSubtreeEnumeratorReset @ 0x14091D284 (CmpSubtreeEnumeratorReset.c)
 * Callees:
 *     CmpResetKeyNodeStack @ 0x14065BCB0 (CmpResetKeyNodeStack.c)
 *     CmpKeyEnumStackEntryCleanup @ 0x14069F090 (CmpKeyEnumStackEntryCleanup.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x14069F130 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x14069F244 (CmpKeyEnumStackEntryInitialize.c)
 */

__int64 __fastcall CmpKeyEnumStackReset(__int64 a1)
{
  __int16 v1; // di
  __int64 result; // rax
  __int64 EntryAtLayerHeight; // rbx

  v1 = 0;
  *(_BYTE *)(a1 + 4) = 0;
  result = CmpResetKeyNodeStack(a1 + 8);
  while ( v1 <= *(__int16 *)a1 )
  {
    EntryAtLayerHeight = CmpKeyEnumStackGetEntryAtLayerHeight(a1);
    CmpKeyEnumStackEntryCleanup(EntryAtLayerHeight);
    result = CmpKeyEnumStackEntryInitialize(EntryAtLayerHeight);
    ++v1;
  }
  return result;
}
