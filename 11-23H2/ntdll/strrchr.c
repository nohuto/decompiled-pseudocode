/*
 * XREFs of strrchr @ 0x180094720
 * Callers:
 *     LdrpSnapModule @ 0x180023EA0 (LdrpSnapModule.c)
 *     LdrpParseForwarderDescription @ 0x180073010 (LdrpParseForwarderDescription.c)
 * Callees:
 *     <none>
 */

char *__cdecl strrchr(const char *Str, int Ch)
{
  const char *v2; // r9
  char *v3; // r8

  v2 = Str;
  v3 = 0LL;
  while ( *Str++ )
    ;
  while ( --Str != v2 )
  {
    if ( *Str == (_BYTE)Ch )
      return (char *)Str;
  }
  if ( *Str == (_BYTE)Ch )
    return (char *)Str;
  return v3;
}
