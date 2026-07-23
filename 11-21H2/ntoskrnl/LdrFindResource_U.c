/*
 * XREFs of LdrFindResource_U @ 0x140855100
 * Callers:
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 *     sub_140B25A50 @ 0x140B25A50 (sub_140B25A50.c)
 * Callees:
 *     sub_14075717C @ 0x14075717C (sub_14075717C.c)
 */

NTSTATUS __cdecl LdrFindResource_U(
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DATA_ENTRY *ResourceDataEntry)
{
  return sub_14075717C((char *)DllHandle, (__int64 *)ResourceInfo, Level, 0, (char **)ResourceDataEntry);
}
