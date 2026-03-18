/*
 * XREFs of ZwCreateDirectoryObject @ 0x14041C2A0
 * Callers:
 *     DifZwCreateDirectoryObjectWrapper @ 0x1405EE210 (DifZwCreateDirectoryObjectWrapper.c)
 *     SeGetTokenDeviceMap @ 0x1407AF750 (SeGetTokenDeviceMap.c)
 *     ObpInitializeRootNamespace @ 0x14081BA84 (ObpInitializeRootNamespace.c)
 *     ExInitializeNls @ 0x140821884 (ExInitializeNls.c)
 *     SepInitializationPhase1 @ 0x140822A40 (SepInitializationPhase1.c)
 *     ObpGetSilosRootDirectory @ 0x140A73FD0 (ObpGetSilosRootDirectory.c)
 *     CmpInitializeDriverStores @ 0x140B37A4C (CmpInitializeDriverStores.c)
 *     PspInitializeCpuPartitionsPhase1 @ 0x140B4D4BC (PspInitializeCpuPartitionsPhase1.c)
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
