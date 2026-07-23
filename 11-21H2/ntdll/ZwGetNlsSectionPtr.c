/*
 * XREFs of ZwGetNlsSectionPtr @ 0x1800A6040
 * Callers:
 *     RtlpGetNormalization @ 0x180090770 (RtlpGetNormalization.c)
 *     RtlpInitCodePageTables @ 0x1800B0A42 (RtlpInitCodePageTables.c)
 *     RtlpInitUppercaseTables @ 0x1800B0B82 (RtlpInitUppercaseTables.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetNlsSectionPtr(
        ULONG SectionType,
        ULONG SectionData,
        PVOID ContextData,
        PVOID *SectionPointer,
        PULONG SectionSize)
{
  NTSTATUS result; // eax

  result = 255;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
