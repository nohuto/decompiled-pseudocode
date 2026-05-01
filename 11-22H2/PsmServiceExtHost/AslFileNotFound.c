/*
 * XREFs of AslFileNotFound @ 0x1800988A4
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x180094DD0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x1800958F8 (SdbpCheckMatchingTextEntry.c)
 *     AslFileMappingCreate @ 0x1800999F8 (AslFileMappingCreate.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AslFileNotFound(int a1)
{
  return a1 == -1073741766 || a1 == -1073741772 || a1 == -1073741620;
}
