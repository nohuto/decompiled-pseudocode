/*
 * XREFs of CmpSortedValueEnumStackGetEntryAtLayerHeight @ 0x140921D5C
 * Callers:
 *     CmpSortedValueEnumStackCleanup @ 0x14069F374 (CmpSortedValueEnumStackCleanup.c)
 *     CmpSortedValueEnumStackAdvanceInternal @ 0x140921ADC (CmpSortedValueEnumStackAdvanceInternal.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140921D8C (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpSortedValueEnumStackGetEntryAtLayerHeight(__int64 a1, __int16 a2)
{
  if ( a2 < 2 )
    return a1 + 32LL * a2 + 16;
  else
    return *(_QWORD *)(a1 + 80) + 32 * (a2 - 2LL);
}
