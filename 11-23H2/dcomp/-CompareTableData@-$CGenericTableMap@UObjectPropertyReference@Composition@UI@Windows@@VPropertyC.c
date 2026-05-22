/*
 * XREFs of ?CompareTableData@?$CGenericTableMap@UObjectPropertyReference@Composition@UI@Windows@@VPropertyChangeCallbackMapEntry@234@@@CA?AW4_RTL_GENERIC_COMPARE_RESULTS@@PEAU_RTL_GENERIC_TABLE@@PEAX1@Z @ 0x180073D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGenericTableMap<Windows::UI::Composition::ObjectPropertyReference,Windows::UI::Composition::PropertyChangeCallbackMapEntry>::CompareTableData(
        struct _RTL_GENERIC_TABLE *Table,
        _DWORD *FirstStruct,
        _DWORD *SecondStruct)
{
  unsigned int v3; // r9d

  v3 = SecondStruct[1];
  if ( *FirstStruct < *SecondStruct )
    return 0LL;
  if ( *FirstStruct == *SecondStruct )
  {
    if ( FirstStruct[1] >= v3 )
    {
      if ( FirstStruct[1] == v3 )
        return 2LL;
      return 1LL;
    }
    return 0LL;
  }
  return 1LL;
}
