/*
 * XREFs of ?CompareTableData@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@CA?AW4_RTL_GENERIC_COMPARE_RESULTS@@PEAU_RTL_GENERIC_TABLE@@PEAX1@Z @ 0x180050700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::CompareTableData(
        struct _RTL_GENERIC_TABLE *Table,
        _QWORD *FirstStruct,
        _QWORD *SecondStruct)
{
  if ( *FirstStruct < *SecondStruct )
    return 0LL;
  else
    return (unsigned int)(*FirstStruct == *SecondStruct) + 1;
}
