/*
 * XREFs of CmpFindSubKeyByName @ 0x140825C4C
 * Callers:
 *     CmpLoadServicesNode @ 0x140B59174 (CmpLoadServicesNode.c)
 *     CmpSortDriverList @ 0x140B59238 (CmpSortDriverList.c)
 *     CmpFindGroupOrderList @ 0x140B59450 (CmpFindGroupOrderList.c)
 *     CmpGetSystemControlValues @ 0x140B59984 (CmpGetSystemControlValues.c)
 *     CmpIsLoadType @ 0x140B5AAC0 (CmpIsLoadType.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140B5AD9C (CmpGetStateSepKeysRedirectionPathValue.c)
 *     CmpLoadManufacturingModeNode @ 0x140B98FFC (CmpLoadManufacturingModeNode.c)
 *     CmpLoadManufacturingProfileNode @ 0x140B99124 (CmpLoadManufacturingProfileNode.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x140B99214 (CmpLoadManufacturingProfileServicesNode.c)
 * Callees:
 *     CmpFindSubKeyByNameWithStatus @ 0x140825C70 (CmpFindSubKeyByNameWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyByName(ULONG_PTR a1)
{
  CmpFindSubKeyByNameWithStatus(a1);
  return 0LL;
}
