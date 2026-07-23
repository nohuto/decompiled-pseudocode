/*
 * XREFs of NtDeleteKey @ 0x1800A29E0
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180076F0C (RtlpOpenImageFileOptionsKeyEx.c)
 *     RXactpCommit @ 0x180080228 (RXactpCommit.c)
 *     RtlInitializeRXact @ 0x18008E0C0 (RtlInitializeRXact.c)
 *     RtlpDeleteEmptyImageFileOptionsKey @ 0x1800EF57C (RtlpDeleteEmptyImageFileOptionsKey.c)
 *     RtlpCleanupRegistryKeys @ 0x1800FBD00 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800FCEB0 (RtlpSetInstallLanguage.c)
 *     RtlpNtMakeTemporaryKey @ 0x1801162B0 (RtlpNtMakeTemporaryKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtDeleteKey(HANDLE KeyHandle)
{
  NTSTATUS result; // eax

  result = 218;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
