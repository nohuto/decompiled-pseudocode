/*
 * XREFs of ?AllocTableData@?$CGenericTableMap@PEAVCompositionObject@Composition@UI@Windows@@UCWeakReferenceMappingEntry@@@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x18008E6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall CGenericTableMap<Windows::UI::Composition::CompositionObject *,CWeakReferenceMappingEntry>::AllocTableData(
        struct _RTL_GENERIC_TABLE *Table,
        CLONG ByteSize)
{
  return DefaultHeap::Alloc(ByteSize);
}
