/*
 * XREFs of ZwAccessCheck @ 0x18009EDF0
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x180014560 (RtlCheckTokenMembershipEx.c)
 *     RtlpNewSecurityObject @ 0x180016E10 (RtlpNewSecurityObject.c)
 *     RtlCheckTokenCapability @ 0x180018740 (RtlCheckTokenCapability.c)
 * Callees:
 *     <none>
 */

__int64 ZwAccessCheck()
{
  __int64 result; // rax

  result = 0LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
