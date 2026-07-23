/*
 * XREFs of sub_1403BD04C @ 0x1403BD04C
 * Callers:
 *     sub_140AF82A8 @ 0x140AF82A8 (sub_140AF82A8.c)
 * Callees:
 *     sub_1403B3594 @ 0x1403B3594 (sub_1403B3594.c)
 *     sub_1403BD0FC @ 0x1403BD0FC (sub_1403BD0FC.c)
 *     sub_1403BE4F0 @ 0x1403BE4F0 (sub_1403BE4F0.c)
 *     sub_1403BE664 @ 0x1403BE664 (sub_1403BE664.c)
 */

__int64 sub_1403BD04C()
{
  __int64 v0; // rbx
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rax

  qword_140C4AD28 = 0LL;
  v0 = sub_1403BE664(1128878145LL);
  if ( !v0 )
    return 3221225858LL;
  result = sub_1403B3594();
  if ( (int)result >= 0 )
  {
    v2 = *(unsigned int *)(v0 + 36);
    qword_140C4AD28 = v2;
    result = sub_1403BE4F0(v2, 1024LL);
    if ( (int)result >= 0 )
    {
      v3 = v0 + 44;
      v4 = v0 + *(unsigned int *)(v0 + 4);
      while ( v3 + 2 <= v4 )
      {
        v5 = *(unsigned __int8 *)(v3 + 1);
        if ( (unsigned __int8)v5 < 2u || v3 + v5 > v4 )
          break;
        v6 = v3;
        v3 += v5;
        if ( *(_BYTE *)v6 == 1 && (_BYTE)v5 == 12 )
          sub_1403BD0FC(*(unsigned int *)(v6 + 4), *(unsigned __int8 *)(v6 + 2), *(unsigned int *)(v6 + 8));
      }
      return 0LL;
    }
  }
  return result;
}
