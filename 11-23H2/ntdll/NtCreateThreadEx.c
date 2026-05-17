/*
 * XREFs of NtCreateThreadEx @ 0x1800A2780
 * Callers:
 *     RtlpCreateUserThreadEx @ 0x18005C2F0 (RtlpCreateUserThreadEx.c)
 *     LdrHotPatchNotify @ 0x1800D9440 (LdrHotPatchNotify.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateThreadEx()
{
  __int64 result; // rax

  result = 199LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
