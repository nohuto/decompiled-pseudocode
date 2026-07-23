/*
 * XREFs of AslFileNotFound @ 0x1407593DC
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x140756AF0 (SdbpCheckMatchingFiles.c)
 *     AslFileMappingCreate @ 0x14075812C (AslFileMappingCreate.c)
 *     SdbpCheckMatchingTextEntry @ 0x140A50204 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AslFileNotFound(int a1)
{
  return a1 == -1073741766 || a1 == -1073741772 || a1 == -1073741620;
}
