/*
 * XREFs of NtOpenThreadTokenEx @ 0x1800A1490
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x180014350 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x180018530 (RtlCheckTokenCapability.c)
 *     RtlpOpenThreadToken @ 0x180079648 (RtlpOpenThreadToken.c)
 *     RtlpIsAppContainer @ 0x1800F4480 (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  NTSTATUS result; // eax

  result = 47;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
