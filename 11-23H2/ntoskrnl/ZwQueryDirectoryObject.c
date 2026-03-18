/*
 * XREFs of ZwQueryDirectoryObject @ 0x14041D6E0
 * Callers:
 *     DifZwQueryDirectoryObjectWrapper @ 0x1405F3E70 (DifZwQueryDirectoryObjectWrapper.c)
 *     BcdEnumerateDisks @ 0x140680EC0 (BcdEnumerateDisks.c)
 *     IopGetLegacyVetoListDrivers @ 0x1406C23F4 (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14077D958 (SepCleanupLUIDDeviceMapDirectory.c)
 *     BiGetNtPartitionPath @ 0x140807310 (BiGetNtPartitionPath.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x140812E50 (PiDrvDbEnumDriverStoreNodes.c)
 *     ExpFindArcName @ 0x1409FC330 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x140A5FA40 (SiGetEfiSystemDevice.c)
 *     CmGetSystemDriverList @ 0x140B3E4A0 (CmGetSystemDriverList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryDirectoryObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
