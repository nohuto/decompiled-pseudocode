/*
 * XREFs of ZwCreateDirectoryObject @ 0x14041C630
 * Callers:
 *     DifZwCreateDirectoryObjectWrapper @ 0x1405EE780 (DifZwCreateDirectoryObjectWrapper.c)
 *     SeGetTokenDeviceMap @ 0x1407AF940 (SeGetTokenDeviceMap.c)
 *     ObpInitializeRootNamespace @ 0x14081BD54 (ObpInitializeRootNamespace.c)
 *     ExInitializeNls @ 0x140821B84 (ExInitializeNls.c)
 *     SepInitializationPhase1 @ 0x140822D40 (SepInitializationPhase1.c)
 *     ObpGetSilosRootDirectory @ 0x140A74280 (ObpGetSilosRootDirectory.c)
 *     CmpInitializeDriverStores @ 0x140B37A4C (CmpInitializeDriverStores.c)
 *     PspInitializeCpuPartitionsPhase1 @ 0x140B4D4BC (PspInitializeCpuPartitionsPhase1.c)
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
