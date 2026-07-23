/*
 * XREFs of ZwSetValueKey @ 0x1800A4C60
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x18007C3A8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RXactpCommit @ 0x1800863C8 (RXactpCommit.c)
 *     RtlWriteRegistryValue @ 0x180092180 (RtlWriteRegistryValue.c)
 *     RtlInitializeRXact @ 0x180092D10 (RtlInitializeRXact.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800E0708 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     RtlSetImageMitigationPolicy @ 0x1800ED690 (RtlSetImageMitigationPolicy.c)
 *     RtlApplyRXact @ 0x1800F1170 (RtlApplyRXact.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800FC298 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800FC470 (RtlpSetPreferredUILanguages.c)
 *     RtlpNtSetValueKey @ 0x1801149F0 (RtlpNtSetValueKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        ULONG TitleIndex,
        ULONG Type,
        PVOID Data,
        ULONG DataSize)
{
  NTSTATUS result; // eax

  result = 96;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
