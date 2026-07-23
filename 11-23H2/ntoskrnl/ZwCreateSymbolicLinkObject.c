/*
 * XREFs of ZwCreateSymbolicLinkObject @ 0x14041C9B0
 * Callers:
 *     DifZwCreateSymbolicLinkObjectWrapper @ 0x1405EF430 (DifZwCreateSymbolicLinkObjectWrapper.c)
 *     IopProcessSetInterfaceState @ 0x1407938C4 (IopProcessSetInterfaceState.c)
 *     SeGetTokenDeviceMap @ 0x1407AF940 (SeGetTokenDeviceMap.c)
 *     PiDrvDbRegisterNode @ 0x140811A0C (PiDrvDbRegisterNode.c)
 *     ObpInitializeRootNamespace @ 0x14081BD54 (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x1408588A0 (ObpCreateDosDevicesDirectory.c)
 *     IoCreateUnprotectedSymbolicLink @ 0x1409474A0 (IoCreateUnprotectedSymbolicLink.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1409AD98C (PspSiloInitializeSystemRootSymlink.c)
 *     CmpInitializeDriverStores @ 0x140B37A4C (CmpInitializeDriverStores.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140B6BEC8 (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateSymbolicLinkObject(
        PHANDLE LinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING LinkTarget)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
