/*
 * XREFs of ?CompareTableData@?$CGenericTableMap@IVPropertyMapEntry@Composition@UI@Windows@@@@CA?AW4_RTL_GENERIC_COMPARE_RESULTS@@PEAU_RTL_GENERIC_TABLE@@PEAX1@Z @ 0x180073CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGenericTableMap<unsigned int,Windows::UI::Composition::PropertyMapEntry>::CompareTableData(
        struct _RTL_GENERIC_TABLE *Table,
        _DWORD *FirstStruct,
        _DWORD *SecondStruct)
{
  if ( *FirstStruct < *SecondStruct )
    return 0LL;
  else
    return (unsigned int)(*FirstStruct == *SecondStruct) + 1;
}
