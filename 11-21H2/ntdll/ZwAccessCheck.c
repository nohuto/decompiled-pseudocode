/*
 * XREFs of ZwAccessCheck @ 0x1800A4070
 * Callers:
 *     RtlpNewSecurityObject @ 0x18000F5FC (RtlpNewSecurityObject.c)
 *     RtlCheckTokenMembershipEx @ 0x180048FB0 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x18004A710 (RtlCheckTokenCapability.c)
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
