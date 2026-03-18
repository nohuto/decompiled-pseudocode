/*
 * XREFs of ?FreeTableData@?$CGenericTableMap@PEAXULSEENTRY@CLogicalSurfaceHandleMap@@@@CAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x1800E9570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGenericTableMap<void *,CLogicalSurfaceHandleMap::LSEENTRY>::FreeTableData(
        struct _RTL_GENERIC_TABLE *Table,
        PVOID Buffer)
{
  DefaultHeap::Free(Buffer);
}
