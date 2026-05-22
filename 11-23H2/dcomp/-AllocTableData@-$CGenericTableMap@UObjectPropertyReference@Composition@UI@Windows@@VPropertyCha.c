/*
 * XREFs of ?AllocTableData@?$CGenericTableMap@UObjectPropertyReference@Composition@UI@Windows@@VPropertyChangeCallbackMapEntry@234@@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x18007E0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall CGenericTableMap<Windows::UI::Composition::ObjectPropertyReference,Windows::UI::Composition::PropertyChangeCallbackMapEntry>::AllocTableData(
        struct _RTL_GENERIC_TABLE *Table,
        CLONG ByteSize)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  return HeapAlloc(ProcessHeap, 0, ByteSize);
}
