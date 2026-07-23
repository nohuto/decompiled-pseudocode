/*
 * XREFs of sub_1406388D0 @ 0x1406388D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1406388D0(int a1, int a2)
{
  __int64 v2; // rdx

  v2 = a2 & 0x3000000;
  if ( (a1 & 0x3000000) == (_DWORD)v2 && *((_QWORD *)&xmmword_140C15BA0 + 1) )
    return sub_14042A5E0((unsigned int)v2, v2);
  else
    return 3221225659LL;
}
