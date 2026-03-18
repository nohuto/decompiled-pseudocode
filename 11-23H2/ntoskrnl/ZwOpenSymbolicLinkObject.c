/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x14041D420
 * Callers:
 *     DifZwOpenSymbolicLinkObjectWrapper @ 0x1405F2690 (DifZwOpenSymbolicLinkObjectWrapper.c)
 *     IopQueryRegistryKeySystemPath @ 0x14068ECA0 (IopQueryRegistryKeySystemPath.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14077D958 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IopProcessSetInterfaceState @ 0x1407936D4 (IopProcessSetInterfaceState.c)
 *     SiTranslateSymbolicLink @ 0x1407BFFB8 (SiTranslateSymbolicLink.c)
 *     BiTranslateSymbolicLink @ 0x140807CB4 (BiTranslateSymbolicLink.c)
 *     ExpTranslateSymbolicLink @ 0x14083E8A8 (ExpTranslateSymbolicLink.c)
 *     IoDeleteSymbolicLink @ 0x140873C80 (IoDeleteSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x140948580 (IoIsValidNameGraftingBuffer.c)
 *     PiDrvDbUnregisterNode @ 0x140971474 (PiDrvDbUnregisterNode.c)
 *     SiOpenArcNameObject @ 0x140A606D4 (SiOpenArcNameObject.c)
 *     IopStoreSystemPartitionInformation @ 0x140B3BE74 (IopStoreSystemPartitionInformation.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenSymbolicLinkObject(
        PHANDLE LinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle, *(_QWORD *)&DesiredAccess);
}
