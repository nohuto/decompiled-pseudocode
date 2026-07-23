/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x1800882B0
 * Callers:
 *     RtlpEtcGetDwordFromRegistry @ 0x1800A00A0 (RtlpEtcGetDwordFromRegistry.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x180008C2C (RtlpQueryRegistryValues.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlQueryRegistryValuesEx(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  return RtlpQueryRegistryValues(*(__int64 *)&RelativeTo, Path, (__int64)QueryTable, (__int64)Context, Environment, 1);
}
