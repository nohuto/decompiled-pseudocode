/*
 * XREFs of ZwCreateDirectoryObject @ 0x14041CC80
 * Callers:
 *     DifZwCreateDirectoryObjectWrapper @ 0x14061E280 (DifZwCreateDirectoryObjectWrapper.c)
 *     SeGetTokenDeviceMap @ 0x14069CC40 (SeGetTokenDeviceMap.c)
 *     ObpInitializeRootNamespace @ 0x14082C020 (ObpInitializeRootNamespace.c)
 *     SepInitializationPhase1 @ 0x140847FF0 (SepInitializationPhase1.c)
 *     ExInitializeNls @ 0x14085A828 (ExInitializeNls.c)
 *     ObpGetSilosRootDirectory @ 0x140A349F0 (ObpGetSilosRootDirectory.c)
 *     CmpInitializeDriverStores @ 0x140B2B730 (CmpInitializeDriverStores.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle, *(_QWORD *)&DesiredAccess);
}
