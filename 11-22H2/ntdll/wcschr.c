/*
 * XREFs of wcschr @ 0x180094960
 * Callers:
 *     EtwpGenerateFileName @ 0x180062318 (EtwpGenerateFileName.c)
 *     RtlpGetDirPath @ 0x18006AB10 (RtlpGetDirPath.c)
 *     LdrSetDllDirectory @ 0x1800788C0 (LdrSetDllDirectory.c)
 *     RtlGetExePath @ 0x1800837E0 (RtlGetExePath.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  wchar_t v2; // ax
  wchar_t v3; // r8

  v2 = *Str;
  if ( *Str )
  {
    v3 = *Str;
    do
    {
      v2 = v3;
      if ( v3 == Ch )
        break;
      v2 = *++Str;
      v3 = *Str;
    }
    while ( *Str );
  }
  if ( v2 != Ch )
    return 0LL;
  return (wchar_t *)Str;
}
