/*
 * XREFs of ZwOpenDirectoryObject @ 0x14041B860
 * Callers:
 *     DifZwOpenDirectoryObjectWrapper @ 0x1405F14F0 (DifZwOpenDirectoryObjectWrapper.c)
 *     BcdEnumerateDisks @ 0x140680EC0 (BcdEnumerateDisks.c)
 *     IopGetLegacyVetoListDrivers @ 0x1406C23F4 (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14077D958 (SepCleanupLUIDDeviceMapDirectory.c)
 *     BiGetNtPartitionPath @ 0x140807310 (BiGetNtPartitionPath.c)
 *     PiDrvDbRegisterNode @ 0x14081173C (PiDrvDbRegisterNode.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x140812E50 (PiDrvDbEnumDriverStoreNodes.c)
 *     ObpInitializeRootNamespace @ 0x14081BA84 (ObpInitializeRootNamespace.c)
 *     PiDrvDbUnregisterNode @ 0x140971474 (PiDrvDbUnregisterNode.c)
 *     ExpFindArcName @ 0x1409FC330 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x140A5FA40 (SiGetEfiSystemDevice.c)
 *     ObCreateSiloRootDirectory @ 0x140A73B00 (ObCreateSiloRootDirectory.c)
 *     CmGetSystemDriverList @ 0x140B3E4A0 (CmGetSystemDriverList.c)
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
