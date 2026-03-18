/*
 * XREFs of CmpFindSubKeyByName @ 0x1408264AC
 * Callers:
 *     CmpLoadServicesNode @ 0x140B5C124 (CmpLoadServicesNode.c)
 *     CmpSortDriverList @ 0x140B5C1E8 (CmpSortDriverList.c)
 *     CmpFindGroupOrderList @ 0x140B5C400 (CmpFindGroupOrderList.c)
 *     CmpGetSystemControlValues @ 0x140B5C934 (CmpGetSystemControlValues.c)
 *     CmpIsLoadType @ 0x140B5DA70 (CmpIsLoadType.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140B5DD4C (CmpGetStateSepKeysRedirectionPathValue.c)
 *     CmpLoadManufacturingModeNode @ 0x140B99FFC (CmpLoadManufacturingModeNode.c)
 *     CmpLoadManufacturingProfileNode @ 0x140B9A124 (CmpLoadManufacturingProfileNode.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x140B9A214 (CmpLoadManufacturingProfileServicesNode.c)
 * Callees:
 *     CmpFindSubKeyByNameWithStatus @ 0x1408264D0 (CmpFindSubKeyByNameWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyByName(ULONG_PTR a1)
{
  CmpFindSubKeyByNameWithStatus(a1);
  return 0LL;
}
