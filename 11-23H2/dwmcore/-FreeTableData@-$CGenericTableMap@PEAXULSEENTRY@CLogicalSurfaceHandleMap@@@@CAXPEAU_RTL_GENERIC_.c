/*
 * XREFs of ?FreeTableData@?$CGenericTableMap@PEAXULSEENTRY@CLogicalSurfaceHandleMap@@@@CAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x1800ED460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGenericTableMap<void *,CLogicalSurfaceHandleMap::LSEENTRY>::FreeTableData(
        struct _RTL_GENERIC_TABLE *Table,
        PVOID Buffer)
{
  operator delete(Buffer);
}
