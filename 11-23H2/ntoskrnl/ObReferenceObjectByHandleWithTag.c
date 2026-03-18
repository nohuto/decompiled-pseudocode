/*
 * XREFs of ObReferenceObjectByHandleWithTag @ 0x1407331A0
 * Callers:
 *     SepReferenceTokenByHandle @ 0x1402B02C0 (SepReferenceTokenByHandle.c)
 *     SeAccessCheckByType @ 0x1402B3AC0 (SeAccessCheckByType.c)
 *     NtGetWriteWatch @ 0x1402EA260 (NtGetWriteWatch.c)
 *     PopCreatePowerThread @ 0x140342ADC (PopCreatePowerThread.c)
 *     DbgkCaptureLiveKernelDump @ 0x14053C108 (DbgkCaptureLiveKernelDump.c)
 *     NtSignalAndWaitForSingleObject @ 0x1405827D0 (NtSignalAndWaitForSingleObject.c)
 *     PspTimerDelayProcess @ 0x1405A4AB0 (PspTimerDelayProcess.c)
 *     MiReferenceAweHandle @ 0x14064BD18 (MiReferenceAweHandle.c)
 *     NtSetInformationProcess @ 0x140774540 (NtSetInformationProcess.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140B6C83C (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6300 (ObpReferenceObjectByHandleWithTag.c)
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
