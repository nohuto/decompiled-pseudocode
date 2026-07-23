/*
 * XREFs of LdrFindResourceEx_U @ 0x1409B67D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14075717C @ 0x14075717C (sub_14075717C.c)
 */

NTSTATUS __cdecl LdrFindResourceEx_U(
        ULONG Flags,
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DATA_ENTRY *ResourceDataEntry)
{
  return sub_14075717C((char *)DllHandle, (__int64 *)ResourceInfo, Level, Flags, (char **)ResourceDataEntry);
}
