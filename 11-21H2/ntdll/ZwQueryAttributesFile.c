/*
 * XREFs of ZwQueryAttributesFile @ 0x1800A4810
 * Callers:
 *     RtlDoesFileExists_UstrEx @ 0x180044304 (RtlDoesFileExists_UstrEx.c)
 *     LdrpGetNtPathFromDosPath @ 0x18004F9CC (LdrpGetNtPathFromDosPath.c)
 *     LdrAddDllDirectory @ 0x180060070 (LdrAddDllDirectory.c)
 *     LdrpIsReparsePoint @ 0x180067580 (LdrpIsReparsePoint.c)
 *     AvrfMiniLoadDll @ 0x1800E6C5C (AvrfMiniLoadDll.c)
 *     LdrpResValidateFilePath @ 0x1800EFF60 (LdrpResValidateFilePath.c)
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
