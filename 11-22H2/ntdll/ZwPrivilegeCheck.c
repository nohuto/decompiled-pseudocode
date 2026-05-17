/*
 * XREFs of ZwPrivilegeCheck @ 0x1800A15E0
 * Callers:
 *     RtlpNewSecurityObject @ 0x180016E10 (RtlpNewSecurityObject.c)
 *     RtlpValidOwnerSubjectContext @ 0x180084CDC (RtlpValidOwnerSubjectContext.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800E1D40 (RtlNewSecurityGrantedAccess.c)
 *     RtlpValidLabelSubjectContext @ 0x1800F347C (RtlpValidLabelSubjectContext.c)
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
