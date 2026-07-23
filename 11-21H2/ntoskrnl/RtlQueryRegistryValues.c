/*
 * XREFs of RtlQueryRegistryValues @ 0x1406E7C40
 * Callers:
 *     <none>
 * Callees:
 *     sub_140781F40 @ 0x140781F40 (sub_140781F40.c)
 */

NTSTATUS __stdcall RtlQueryRegistryValues(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  return sub_140781F40(RelativeTo, Path, QueryTable, Context);
}
