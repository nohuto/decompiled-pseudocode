/*
 * XREFs of AslFileNotFound @ 0x180098544
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x180094A70 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x180095598 (SdbpCheckMatchingTextEntry.c)
 *     AslFileMappingCreate @ 0x180099698 (AslFileMappingCreate.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AslFileNotFound(int a1)
{
  return a1 == -1073741766 || a1 == -1073741772 || a1 == -1073741620;
}
