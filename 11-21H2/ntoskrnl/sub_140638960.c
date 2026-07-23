/*
 * XREFs of sub_140638960 @ 0x140638960
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140638960(int a1, int a2)
{
  __int64 v3; // rdx
  unsigned int v4; // eax

  v3 = 50331648LL;
  v4 = a2 & 0x3000000;
  if ( (a1 & 0x3000000) != 0 || !v4 )
    return 3221225485LL;
  if ( !(_QWORD)xmmword_140C15BA0 )
    return 3221225659LL;
  LOBYTE(v3) = 1;
  return sub_14042A5E0(v4, v3);
}
