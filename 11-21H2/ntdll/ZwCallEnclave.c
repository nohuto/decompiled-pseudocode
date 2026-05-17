/*
 * XREFs of ZwCallEnclave @ 0x1800A5280
 * Callers:
 *     RtlEnclaveCallDispatcher @ 0x1800A8100 (RtlEnclaveCallDispatcher.c)
 *     RtlCallEnclave @ 0x1800A8170 (RtlCallEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800D8EB0 (LdrpIssueEnclaveCall.c)
 * Callees:
 *     <none>
 */

__int64 ZwCallEnclave()
{
  __int64 result; // rax

  result = 145LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
