/*
 * XREFs of SeQuerySecureBootPlatformManifest @ 0x1409CDBD0
 * Callers:
 *     <none>
 * Callees:
 *     bsearch_s @ 0x1403E1950 (bsearch_s.c)
 */

__int64 __fastcall SeQuerySecureBootPlatformManifest(const void *a1, int a2)
{
  if ( !qword_140C1B560 )
    return 3236626438LL;
  if ( !a1 )
    return 3221226021LL;
  if ( a2 == 32 )
    return bsearch_s(
             a1,
             *((const void **)qword_140C1B560 + 2),
             *((unsigned int *)qword_140C1B560 + 1),
             0x20uLL,
             sub_1409CE110,
             0LL) != 0LL
         ? 0
         : 0xC0000225;
  return 3221225485LL;
}
