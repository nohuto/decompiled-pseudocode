/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x14041CD60
 * Callers:
 *     DifZwOpenSymbolicLinkObjectWrapper @ 0x1405F2720 (DifZwOpenSymbolicLinkObjectWrapper.c)
 *     IopQueryRegistryKeySystemPath @ 0x14068ECA0 (IopQueryRegistryKeySystemPath.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14077DE68 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IopProcessSetInterfaceState @ 0x140793BE4 (IopProcessSetInterfaceState.c)
 *     SiTranslateSymbolicLink @ 0x1407C0548 (SiTranslateSymbolicLink.c)
 *     BiTranslateSymbolicLink @ 0x14080A234 (BiTranslateSymbolicLink.c)
 *     ExpTranslateSymbolicLink @ 0x140840638 (ExpTranslateSymbolicLink.c)
 *     IoDeleteSymbolicLink @ 0x140874150 (IoDeleteSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x140948630 (IoIsValidNameGraftingBuffer.c)
 *     PiDrvDbUnregisterNode @ 0x140971524 (PiDrvDbUnregisterNode.c)
 *     SiOpenArcNameObject @ 0x140A60744 (SiOpenArcNameObject.c)
 *     IopStoreSystemPartitionInformation @ 0x140B3F574 (IopStoreSystemPartitionInformation.c)
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
