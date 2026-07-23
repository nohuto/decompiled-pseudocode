/*
 * XREFs of NtSetSecurityObject @ 0x1800A24A0
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18006C714 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolTakeOwnership @ 0x180102AD0 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetSecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  NTSTATUS result; // eax

  result = 438;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
