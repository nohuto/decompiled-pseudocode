/*
 * XREFs of strrchr @ 0x180098E80
 * Callers:
 *     LdrpResolveForwarder @ 0x18003F350 (LdrpResolveForwarder.c)
 *     LdrpParseForwarderDescription @ 0x18007A3C8 (LdrpParseForwarderDescription.c)
 * Callees:
 *     <none>
 */

char *__cdecl strrchr(const char *Str, int Ch)
{
  const char *v2; // r8

  v2 = Str;
  while ( *Str++ )
    ;
  while ( --Str != v2 )
  {
    if ( *Str == (_BYTE)Ch )
      return (char *)Str;
  }
  if ( *Str == (_BYTE)Ch )
    return (char *)Str;
  return 0LL;
}
