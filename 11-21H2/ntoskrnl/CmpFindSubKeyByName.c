/*
 * XREFs of CmpFindSubKeyByName @ 0x14082F108
 * Callers:
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140B132D0 (CmpGetStateSepKeysRedirectionPathValue.c)
 *     CmpLoadServicesNode @ 0x140B133D8 (CmpLoadServicesNode.c)
 *     CmpFindGroupOrderList @ 0x140B1349C (CmpFindGroupOrderList.c)
 *     CmpSortDriverList @ 0x140B13578 (CmpSortDriverList.c)
 *     CmpIsLoadType @ 0x140B143B0 (CmpIsLoadType.c)
 *     CmpGetSystemControlValues @ 0x140B14B1C (CmpGetSystemControlValues.c)
 *     CmpLoadManufacturingModeNode @ 0x140B4E2B0 (CmpLoadManufacturingModeNode.c)
 *     CmpLoadManufacturingProfileNode @ 0x140B4E3D8 (CmpLoadManufacturingProfileNode.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x140B4E4C8 (CmpLoadManufacturingProfileServicesNode.c)
 * Callees:
 *     CmpFindSubKeyByNameWithStatus @ 0x14082F12C (CmpFindSubKeyByNameWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyByName(ULONG_PTR a1)
{
  CmpFindSubKeyByNameWithStatus(a1);
  return 0LL;
}
