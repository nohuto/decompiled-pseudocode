/*
 * XREFs of ZwQueryDirectoryObject @ 0x14041DA70
 * Callers:
 *     DifZwQueryDirectoryObjectWrapper @ 0x1405F43E0 (DifZwQueryDirectoryObjectWrapper.c)
 *     BcdEnumerateDisks @ 0x140680EC0 (BcdEnumerateDisks.c)
 *     IopGetLegacyVetoListDrivers @ 0x1406C2424 (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14077DB48 (SepCleanupLUIDDeviceMapDirectory.c)
 *     BiGetNtPartitionPath @ 0x1408075E0 (BiGetNtPartitionPath.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x140813120 (PiDrvDbEnumDriverStoreNodes.c)
 *     ExpFindArcName @ 0x1409FC5C0 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x140A5FCF0 (SiGetEfiSystemDevice.c)
 *     CmGetSystemDriverList @ 0x140B3E4A0 (CmGetSystemDriverList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDirectoryObject(
        HANDLE DirectoryHandle,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        BOOLEAN RestartScan,
        PULONG Context,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle);
}
