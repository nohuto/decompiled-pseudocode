/*
 * XREFs of wcschr @ 0x1800998A0
 * Callers:
 *     EtwpGenerateFileName @ 0x18000ACA8 (EtwpGenerateFileName.c)
 *     RtlpGetDirPath @ 0x180032FB0 (RtlpGetDirPath.c)
 *     LdrSetDllDirectory @ 0x180060540 (LdrSetDllDirectory.c)
 *     RtlGetExePath @ 0x180088710 (RtlGetExePath.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  while ( *Str )
  {
    if ( *Str == Ch )
      return (wchar_t *)Str;
    ++Str;
  }
  if ( !Ch )
    return (wchar_t *)Str;
  return 0LL;
}
