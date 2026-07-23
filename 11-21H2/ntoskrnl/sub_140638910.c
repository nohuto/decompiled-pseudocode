/*
 * XREFs of sub_140638910 @ 0x140638910
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140638910(int a1, int a2)
{
  unsigned int v2; // eax

  v2 = a2 & 0x3000000;
  if ( (a1 & 0x3000000) != 0 || !v2 )
    return 3221225485LL;
  if ( (_QWORD)xmmword_140C15BA0 )
    return sub_14042A5E0(v2, 0LL);
  return 3221225659LL;
}
