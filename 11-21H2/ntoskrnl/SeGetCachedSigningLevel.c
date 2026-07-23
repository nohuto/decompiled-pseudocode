/*
 * XREFs of SeGetCachedSigningLevel @ 0x1406BE930
 * Callers:
 *     sub_1406BE690 @ 0x1406BE690 (sub_1406BE690.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall SeGetCachedSigningLevel(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !qword_140C1B8B0 )
    return 3221225473LL;
  if ( a1 && a2 && a3 )
    return sub_14042A5E0(a1, a3);
  return 3221225485LL;
}
