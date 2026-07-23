/*
 * XREFs of ZwCreateMailslotFile @ 0x1800A04C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateMailslotFile(
        PHANDLE FileHandle,
        ULONG DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CreateOptions,
        ULONG MailslotQuota,
        ULONG MaximumMessageSize,
        PLARGE_INTEGER ReadTimeout)
{
  NTSTATUS result; // eax

  result = 183;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
