/*
 * XREFs of CmpValueEnumStackGetEntryAtLayerHeight @ 0x14069F434
 * Callers:
 *     CmpValueEnumStackGetCurrentValueHive @ 0x14020004C (CmpValueEnumStackGetCurrentValueHive.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140200068 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackAdvance @ 0x14065AED8 (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x14065B030 (CmpValueEnumStackMatchingValueInUpperLayer.c)
 *     CmpValueEnumStackCleanup @ 0x14069F3D4 (CmpValueEnumStackCleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpValueEnumStackGetEntryAtLayerHeight(__int64 a1, __int16 a2)
{
  if ( a2 >= 2 )
    return *(_QWORD *)(a1 + 80) + 32 * (a2 - 2LL);
  else
    return a1 + 32LL * a2 + 16;
}
