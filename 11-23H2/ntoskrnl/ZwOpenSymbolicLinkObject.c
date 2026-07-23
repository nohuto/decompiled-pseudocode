/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x14041D7B0
 * Callers:
 *     DifZwOpenSymbolicLinkObjectWrapper @ 0x1405F2C00 (DifZwOpenSymbolicLinkObjectWrapper.c)
 *     IopQueryRegistryKeySystemPath @ 0x14068ECA0 (IopQueryRegistryKeySystemPath.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14077DB48 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IopProcessSetInterfaceState @ 0x1407938C4 (IopProcessSetInterfaceState.c)
 *     SiTranslateSymbolicLink @ 0x1407C0288 (SiTranslateSymbolicLink.c)
 *     BiTranslateSymbolicLink @ 0x140807F84 (BiTranslateSymbolicLink.c)
 *     ExpTranslateSymbolicLink @ 0x14083EBA8 (ExpTranslateSymbolicLink.c)
 *     IoDeleteSymbolicLink @ 0x140873EC0 (IoDeleteSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x140948780 (IoIsValidNameGraftingBuffer.c)
 *     PiDrvDbUnregisterNode @ 0x140971674 (PiDrvDbUnregisterNode.c)
 *     SiOpenArcNameObject @ 0x140A60984 (SiOpenArcNameObject.c)
 *     IopStoreSystemPartitionInformation @ 0x140B3BE74 (IopStoreSystemPartitionInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenSymbolicLinkObject(
        PHANDLE LinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
