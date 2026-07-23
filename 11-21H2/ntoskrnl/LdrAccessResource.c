/*
 * XREFs of LdrAccessResource @ 0x1408550E0
 * Callers:
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 *     sub_140B25A50 @ 0x140B25A50 (sub_140B25A50.c)
 * Callees:
 *     sub_14075883C @ 0x14075883C (sub_14075883C.c)
 */

NTSTATUS __cdecl LdrAccessResource(
        PVOID DllHandle,
        PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry,
        PVOID *ResourceBuffer,
        ULONG *ResourceLength)
{
  return sub_14075883C(
           (unsigned __int64)DllHandle,
           &ResourceDataEntry->OffsetToData,
           (unsigned __int64 *)ResourceBuffer,
           ResourceLength);
}
