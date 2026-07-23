/*
 * XREFs of RtlpEtcGetDwordFromRegistry @ 0x1800A00A0
 * Callers:
 *     RtlIsFeatureEnabledForEnterprise @ 0x18009FE40 (RtlIsFeatureEnabledForEnterprise.c)
 *     RtlpEtcGetDwordFromPersistedState @ 0x18009FFE4 (RtlpEtcGetDwordFromPersistedState.c)
 *     RtlpEtcIsValidFeatureId @ 0x1800A011C (RtlpEtcIsValidFeatureId.c)
 * Callees:
 *     RtlQueryRegistryValuesEx @ 0x1800882B0 (RtlQueryRegistryValuesEx.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall RtlpEtcGetDwordFromRegistry(PCWSTR Path, WCHAR *a2, void *a3)
{
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-78h] BYREF

  memset_thunk_772440563353939046(&QueryTable, 0, 0x70uLL);
  QueryTable.Flags = 308;
  QueryTable.Name = a2;
  QueryTable.DefaultType = 0x4000000;
  QueryTable.EntryContext = a3;
  return RtlQueryRegistryValuesEx(0, Path, &QueryTable, 0LL, 0LL);
}
