/*
 * XREFs of HalpAcpiCacheTable @ 0x14037E140
 * Callers:
 *     HalpAcpiGetTableWork @ 0x140337300 (HalpAcpiGetTableWork.c)
 *     HalpAcpiGetAllTablesWork @ 0x14037DDC8 (HalpAcpiGetAllTablesWork.c)
 *     HalpAcpiTableCacheInit @ 0x140B48D28 (HalpAcpiTableCacheInit.c)
 *     HalpAcpiCacheOverrideTables @ 0x140B90F18 (HalpAcpiCacheOverrideTables.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1403A58A0 (HalpMmAllocCtxFree.c)
 */

__int64 *__fastcall HalpAcpiCacheTable(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rdx
  __int64 *result; // rax

  v2 = *(_QWORD *)(a2 - 8);
  v3 = (_QWORD *)(a2 - 24);
  if ( v2 )
  {
    for ( result = (__int64 *)HalpAcpiTableCacheList; result != &HalpAcpiTableCacheList; result = (__int64 *)*result )
    {
      if ( v2 == result[2] )
      {
        if ( a1 )
          return (__int64 *)HalpMmAllocCtxFree(a1, v3, v2, &HalpAcpiTableCacheList);
        return result;
      }
    }
  }
  result = (__int64 *)qword_140CF8518;
  if ( *(__int64 **)qword_140CF8518 != &HalpAcpiTableCacheList )
    __fastfail(3u);
  *v3 = &HalpAcpiTableCacheList;
  v3[1] = result;
  *result = (__int64)v3;
  qword_140CF8518 = (__int64)v3;
  return result;
}
