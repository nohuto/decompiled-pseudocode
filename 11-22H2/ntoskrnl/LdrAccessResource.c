/*
 * XREFs of LdrAccessResource @ 0x140822C20
 * Callers:
 *     FindBitmapResource @ 0x140B526E0 (FindBitmapResource.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 * Callees:
 *     LdrpAccessResourceData @ 0x140755B5C (LdrpAccessResourceData.c)
 */

NTSTATUS __cdecl LdrAccessResource(
        PVOID DllHandle,
        PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry,
        PVOID *ResourceBuffer,
        ULONG *ResourceLength)
{
  return LdrpAccessResourceData((unsigned __int64)DllHandle, (unsigned __int64)ResourceDataEntry);
}
