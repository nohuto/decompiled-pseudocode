/*
 * XREFs of NtOpenThreadTokenEx @ 0x18009F3D0
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x180014560 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x180018740 (RtlCheckTokenCapability.c)
 *     RtlpOpenThreadToken @ 0x180078FD8 (RtlpOpenThreadToken.c)
 *     RtlpIsAppContainer @ 0x1800F3070 (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenThreadTokenEx()
{
  __int64 result; // rax

  result = 47LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
