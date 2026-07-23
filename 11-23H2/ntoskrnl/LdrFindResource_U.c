/*
 * XREFs of LdrFindResource_U @ 0x140822C80
 * Callers:
 *     FindBitmapResource @ 0x140B526E0 (FindBitmapResource.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x140755F00 (LdrpSearchResourceSection_U.c)
 */

NTSTATUS __cdecl LdrFindResource_U(
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DATA_ENTRY *ResourceDataEntry)
{
  return LdrpSearchResourceSection_U(
           (char *)DllHandle,
           (__int64 *)ResourceInfo,
           Level,
           0,
           (unsigned int **)ResourceDataEntry);
}
