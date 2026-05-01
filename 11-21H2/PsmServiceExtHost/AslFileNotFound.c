/*
 * XREFs of AslFileNotFound @ 0x18009DEB4
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x180099D10 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x18009A828 (SdbpCheckMatchingTextEntry.c)
 *     AslFileMappingCreate @ 0x18009F03C (AslFileMappingCreate.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AslFileNotFound(int a1)
{
  return a1 == -1073741766 || a1 == -1073741772 || a1 == -1073741620;
}
