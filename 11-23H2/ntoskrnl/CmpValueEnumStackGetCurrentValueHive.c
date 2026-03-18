/*
 * XREFs of CmpValueEnumStackGetCurrentValueHive @ 0x14046B854
 * Callers:
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140A25DD4 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x140A25320 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpValueEnumStackGetCurrentValueHive(__int64 a1)
{
  return *(_QWORD *)CmpValueEnumStackGetEntryAtLayerHeight(a1, *(unsigned __int16 *)(a1 + 6));
}
