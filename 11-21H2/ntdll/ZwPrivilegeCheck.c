/*
 * XREFs of ZwPrivilegeCheck @ 0x1800A6820
 * Callers:
 *     RtlpValidOwnerSubjectContext @ 0x18000E418 (RtlpValidOwnerSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x18000F5FC (RtlpNewSecurityObject.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800E30D0 (RtlNewSecurityGrantedAccess.c)
 *     RtlpValidLabelSubjectContext @ 0x1800F3758 (RtlpValidLabelSubjectContext.c)
 * Callees:
 *     <none>
 */

__int64 ZwPrivilegeCheck()
{
  __int64 result; // rax

  result = 318LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
