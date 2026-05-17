/*
 * XREFs of ZwCreateKey @ 0x1800A1250
 * Callers:
 *     RtlpGetRegistryHandle @ 0x18000AAF8 (RtlpGetRegistryHandle.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180076F0C (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x1800773C0 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     RXactpOpenTargetKey @ 0x18008C350 (RXactpOpenTargetKey.c)
 *     RtlInitializeRXact @ 0x18008E0C0 (RtlInitializeRXact.c)
 *     RtlpCreateIFEOKeyFilterKey @ 0x1800EF460 (RtlpCreateIFEOKeyFilterKey.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800FD398 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800FD570 (RtlpSetPreferredUILanguages.c)
 *     RtlpNtCreateKey @ 0x1801162A0 (RtlpNtCreateKey.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateKey()
{
  __int64 result; // rax

  result = 29LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
