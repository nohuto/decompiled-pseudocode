/*
 * XREFs of ?FreeTableData@?$CGenericTableMap@IVPropertyChangeIdsMapEntry@Composition@UI@Windows@@@@CAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x180060370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGenericTableMap<unsigned int,Windows::UI::Composition::PropertyChangeIdsMapEntry>::FreeTableData(
        struct _RTL_GENERIC_TABLE *Table,
        PVOID Buffer)
{
  operator delete(Buffer);
}
