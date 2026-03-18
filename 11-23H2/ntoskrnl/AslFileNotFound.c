/*
 * XREFs of AslFileNotFound @ 0x1407591EC
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x140756900 (SdbpCheckMatchingFiles.c)
 *     AslFileMappingCreate @ 0x140757F3C (AslFileMappingCreate.c)
 *     SdbpCheckMatchingTextEntry @ 0x140A4FF54 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AslFileNotFound(int a1)
{
  return a1 == -1073741766 || a1 == -1073741772 || a1 == -1073741620;
}
