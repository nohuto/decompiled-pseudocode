/*
 * XREFs of ?FreeTableData@?$CGenericTableMap@IVPropertyMapEntry@Composition@UI@Windows@@@@CAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x18007E060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGenericTableMap<unsigned int,Windows::UI::Composition::PropertyMapEntry>::FreeTableData(
        struct _RTL_GENERIC_TABLE *Table,
        PVOID Buffer)
{
  HANDLE ProcessHeap; // rax

  if ( Buffer )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, Buffer);
  }
}
