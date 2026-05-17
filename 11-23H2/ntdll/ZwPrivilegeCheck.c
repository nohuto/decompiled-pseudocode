/*
 * XREFs of ZwPrivilegeCheck @ 0x1800A36A0
 * Callers:
 *     RtlpNewSecurityObject @ 0x180016C00 (RtlpNewSecurityObject.c)
 *     RtlpValidOwnerSubjectContext @ 0x1800854DC (RtlpValidOwnerSubjectContext.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800E3070 (RtlNewSecurityGrantedAccess.c)
 *     RtlpValidLabelSubjectContext @ 0x1800F488C (RtlpValidLabelSubjectContext.c)
 * Callees:
 *     <none>
 */

__int64 ZwPrivilegeCheck()
{
  __int64 result; // rax

  result = 320LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
