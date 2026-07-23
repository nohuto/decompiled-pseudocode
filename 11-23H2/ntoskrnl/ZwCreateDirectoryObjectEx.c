/*
 * XREFs of ZwCreateDirectoryObjectEx @ 0x14041C650
 * Callers:
 *     ObpInitializeRootNamespace @ 0x14081BD54 (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x14081C324 (MiCreatePartitionNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x1408588A0 (ObpCreateDosDevicesDirectory.c)
 *     ObCreateSiloRootDirectory @ 0x140A73DB0 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateDirectoryObjectEx(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ShadowDirectoryHandle,
        ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle);
}
