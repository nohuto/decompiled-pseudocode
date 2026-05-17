/*
 * XREFs of ZwQueryKey @ 0x1800A1170
 * Callers:
 *     RtlpValidateKeyTrust @ 0x180009378 (RtlpValidateKeyTrust.c)
 *     LdrpCodeAuthzInitialize @ 0x180009B8C (LdrpCodeAuthzInitialize.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryKey()
{
  __int64 result; // rax

  result = 22LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
