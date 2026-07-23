/*
 * XREFs of RtlpEtcGetDwordFromRegistry @ 0x1404111D4
 * Callers:
 *     RtlIsFeatureEnabledForEnterprise @ 0x140410F70 (RtlIsFeatureEnabledForEnterprise.c)
 *     RtlpEtcGetDwordFromPersistedState @ 0x140411118 (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlpEtcIsValidFeatureId @ 0x140411250 (RtlpEtcIsValidFeatureId.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 *     RtlQueryRegistryValuesEx @ 0x1406C7B10 (RtlQueryRegistryValuesEx.c)
 */

NTSTATUS __fastcall RtlpEtcGetDwordFromRegistry(PCWSTR Path, wchar_t *a2, void *a3)
{
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+30h] [rbp-78h] BYREF

  memset(QueryTable, 0, sizeof(QueryTable));
  QueryTable[0].Flags = 308;
  QueryTable[0].Name = a2;
  QueryTable[0].DefaultType = 0x4000000;
  QueryTable[0].EntryContext = a3;
  return RtlQueryRegistryValuesEx(0, Path, QueryTable, 0LL, 0LL);
}
