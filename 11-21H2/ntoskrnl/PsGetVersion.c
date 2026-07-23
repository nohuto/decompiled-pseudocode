/*
 * XREFs of PsGetVersion @ 0x14025B4D0
 * Callers:
 *     sub_14061A610 @ 0x14061A610 (sub_14061A610.c)
 *     sub_140965830 @ 0x140965830 (sub_140965830.c)
 *     sub_140965910 @ 0x140965910 (sub_140965910.c)
 *     sub_1409659F0 @ 0x1409659F0 (sub_1409659F0.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsGetVersion(
        PULONG MajorVersion,
        PULONG MinorVersion,
        PULONG BuildNumber,
        PUNICODE_STRING CSDVersion)
{
  if ( MajorVersion )
    *MajorVersion = 10;
  if ( MinorVersion )
    *MinorVersion = 0;
  if ( BuildNumber )
    *BuildNumber = (unsigned __int16)NtBuildNumber;
  if ( CSDVersion )
    *CSDVersion = stru_140C4E570;
  return (NtBuildNumber & 0xF0000000) == -1073741824;
}
