/*
 * XREFs of ZwOpenDirectoryObject @ 0x14041C260
 * Callers:
 *     DifZwOpenDirectoryObjectWrapper @ 0x140621660 (DifZwOpenDirectoryObjectWrapper.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14069CEC8 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IopGetLegacyVetoListDrivers @ 0x140799218 (IopGetLegacyVetoListDrivers.c)
 *     BiGetNtPartitionPath @ 0x140802BE0 (BiGetNtPartitionPath.c)
 *     PiDrvDbRegisterNode @ 0x14082666C (PiDrvDbRegisterNode.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x1408276AC (PiDrvDbEnumDriverStoreNodes.c)
 *     ObpInitializeRootNamespace @ 0x14082C020 (ObpInitializeRootNamespace.c)
 *     PiDrvDbUnregisterNode @ 0x14095E00C (PiDrvDbUnregisterNode.c)
 *     ExpFindArcName @ 0x1409FC2D0 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x140A21C40 (SiGetEfiSystemDevice.c)
 *     ObCreateSiloRootDirectory @ 0x140A34510 (ObCreateSiloRootDirectory.c)
 *     CmGetSystemDriverList @ 0x140B12C84 (CmGetSystemDriverList.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle, *(_QWORD *)&DesiredAccess);
}
