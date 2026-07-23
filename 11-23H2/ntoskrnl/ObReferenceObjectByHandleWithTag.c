/*
 * XREFs of ObReferenceObjectByHandleWithTag @ 0x140733390
 * Callers:
 *     SepReferenceTokenByHandle @ 0x1402B0550 (SepReferenceTokenByHandle.c)
 *     SeAccessCheckByType @ 0x1402B3D50 (SeAccessCheckByType.c)
 *     NtGetWriteWatch @ 0x1402EA4F0 (NtGetWriteWatch.c)
 *     PopCreatePowerThread @ 0x140342D6C (PopCreatePowerThread.c)
 *     DbgkCaptureLiveKernelDump @ 0x14053C658 (DbgkCaptureLiveKernelDump.c)
 *     NtSignalAndWaitForSingleObject @ 0x140582CC0 (NtSignalAndWaitForSingleObject.c)
 *     PspTimerDelayProcess @ 0x1405A5020 (PspTimerDelayProcess.c)
 *     MiReferenceAweHandle @ 0x14064C268 (MiReferenceAweHandle.c)
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140B6C83C (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall ObReferenceObjectByHandleWithTag(
        HANDLE Handle,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        ULONG Tag,
        PVOID *Object,
        POBJECT_HANDLE_INFORMATION HandleInformation)
{
  return ObpReferenceObjectByHandleWithTag(
           (ULONG_PTR)Handle,
           DesiredAccess,
           (__int64)ObjectType,
           AccessMode,
           Tag,
           Object,
           HandleInformation,
           0LL);
}
