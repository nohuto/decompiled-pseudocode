/*
 * XREFs of sub_14024FFE4 @ 0x14024FFE4
 * Callers:
 *     sub_140308F00 @ 0x140308F00 (sub_140308F00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14024FFE4(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r9
  _QWORD *v3; // r8

  v2 = 0LL;
  v3 = (_QWORD *)(48 * a1 - 0x21FFFFFFFFD8LL);
  do
  {
    if ( a1 <= qword_140C50840 && ((*v3 >> 54) & 1) != 0 )
      break;
    ++v2;
    if ( !--a2 )
      break;
    ++a1;
    v3 += 6;
  }
  while ( (a1 & 0x1FF) != 0 );
  return v2;
}
