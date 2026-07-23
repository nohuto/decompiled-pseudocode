/*
 * XREFs of ZwCreateDirectoryObject @ 0x14041BBE0
 * Callers:
 *     DifZwCreateDirectoryObjectWrapper @ 0x1405EE2A0 (DifZwCreateDirectoryObjectWrapper.c)
 *     SeGetTokenDeviceMap @ 0x1407AFD00 (SeGetTokenDeviceMap.c)
 *     ObpInitializeRootNamespace @ 0x14081E004 (ObpInitializeRootNamespace.c)
 *     ExInitializeNls @ 0x140822DEC (ExInitializeNls.c)
 *     SepInitializationPhase1 @ 0x140823D08 (SepInitializationPhase1.c)
 *     ObpGetSilosRootDirectory @ 0x140A74040 (ObpGetSilosRootDirectory.c)
 *     CmpInitializeDriverStores @ 0x140B3B144 (CmpInitializeDriverStores.c)
 *     PspInitializeCpuPartitionsPhase1 @ 0x140B54920 (PspInitializeCpuPartitionsPhase1.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle);
}
