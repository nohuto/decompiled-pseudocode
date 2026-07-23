/*
 * XREFs of LdrFindResourceDirectory_U @ 0x1409B67B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14075717C @ 0x14075717C (sub_14075717C.c)
 */

NTSTATUS __cdecl LdrFindResourceDirectory_U(
        PVOID DllHandle,
        PLDR_RESOURCE_INFO ResourceInfo,
        ULONG Level,
        PIMAGE_RESOURCE_DIRECTORY *ResourceDirectory)
{
  return sub_14075717C((char *)DllHandle, (__int64 *)ResourceInfo, Level, 2, (char **)ResourceDirectory);
}
