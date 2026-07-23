/*
 * XREFs of LdrFindResourceDirectory_U @ 0x1800ECC00
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x180027170 (LdrpSearchResourceSection_U.c)
 */

NTSTATUS __cdecl LdrFindResourceDirectory_U(
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DIRECTORY *ResourceDirectory)
{
  return LdrpSearchResourceSection_U((unsigned __int64)DllHandle, (__int64 *)ResourceInfo, Level, 2u, ResourceDirectory);
}
