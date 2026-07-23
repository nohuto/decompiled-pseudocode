/*
 * XREFs of RtlQueryRegistryValues @ 0x1407E9B00
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1406C5A00 (RtlpQueryRegistryValues.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall RtlQueryRegistryValues(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  return RtlpQueryRegistryValues(*(__int64 *)&RelativeTo, Path, QueryTable, (__int64)Context);
}
