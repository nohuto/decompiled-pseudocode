/*
 * XREFs of ZwGetNlsSectionPtr @ 0x1800A2EA0
 * Callers:
 *     RtlpGetNormalization @ 0x180089D98 (RtlpGetNormalization.c)
 *     RtlpInitCodePageTables @ 0x1800AFEE0 (RtlpInitCodePageTables.c)
 *     RtlpInitUppercaseTables @ 0x1800B0020 (RtlpInitUppercaseTables.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetNlsSectionPtr()
{
  __int64 result; // rax

  result = 256LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
