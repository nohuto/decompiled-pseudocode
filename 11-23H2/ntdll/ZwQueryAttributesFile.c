/*
 * XREFs of ZwQueryAttributesFile @ 0x1800A1650
 * Callers:
 *     LdrpIsReparsePoint @ 0x1800086DC (LdrpIsReparsePoint.c)
 *     RtlDoesFileExists_UstrEx @ 0x18001E0B8 (RtlDoesFileExists_UstrEx.c)
 *     LdrpGetNtPathFromDosPath @ 0x18002B124 (LdrpGetNtPathFromDosPath.c)
 *     LdrAddDllDirectory @ 0x180078AB0 (LdrAddDllDirectory.c)
 *     AvrfMiniLoadDll @ 0x1800E6DE8 (AvrfMiniLoadDll.c)
 *     LdrpResValidateFilePath @ 0x1800F10C8 (LdrpResValidateFilePath.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  NTSTATUS result; // eax

  result = 61;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
