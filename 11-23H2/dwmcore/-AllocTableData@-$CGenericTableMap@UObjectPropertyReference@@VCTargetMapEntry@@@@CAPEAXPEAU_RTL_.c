/*
 * XREFs of ?AllocTableData@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x18002C9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::AllocTableData(
        struct _RTL_GENERIC_TABLE *Table,
        CLONG ByteSize)
{
  return DefaultHeap::Alloc(ByteSize);
}
