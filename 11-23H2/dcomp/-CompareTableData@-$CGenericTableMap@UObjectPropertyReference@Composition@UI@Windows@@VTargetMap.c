/*
 * XREFs of ?CompareTableData@?$CGenericTableMap@UObjectPropertyReference@Composition@UI@Windows@@VTargetMapEntry@234@@@CA?AW4_RTL_GENERIC_COMPARE_RESULTS@@PEAU_RTL_GENERIC_TABLE@@PEAX1@Z @ 0x180072D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGenericTableMap<Windows::UI::Composition::ObjectPropertyReference,Windows::UI::Composition::TargetMapEntry>::CompareTableData(
        struct _RTL_GENERIC_TABLE *Table,
        _DWORD *FirstStruct,
        _DWORD *SecondStruct)
{
  unsigned int v3; // r9d

  v3 = SecondStruct[1];
  if ( *FirstStruct < *SecondStruct )
    return 0LL;
  if ( *FirstStruct != *SecondStruct )
    return 1LL;
  if ( FirstStruct[1] < v3 )
    return 0LL;
  if ( FirstStruct[1] == v3 )
    return 2LL;
  else
    return 1LL;
}
