/*
 * XREFs of sub_140978260 @ 0x140978260
 * Callers:
 *     sub_140971068 @ 0x140971068 (sub_140971068.c)
 *     sub_140975FF0 @ 0x140975FF0 (sub_140975FF0.c)
 *     sub_140B09F98 @ 0x140B09F98 (sub_140B09F98.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406DF688 @ 0x1406DF688 (sub_1406DF688.c)
 *     sub_1406DF7A0 @ 0x1406DF7A0 (sub_1406DF7A0.c)
 */

_QWORD *__fastcall sub_140978260(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *result; // rax
  _QWORD *v6; // rsi
  unsigned __int64 *v7; // rcx

  if ( a1 == (__int64 *)-2LL )
  {
    v4 = 0LL;
  }
  else
  {
    v4 = 1LL;
    if ( ((unsigned __int8)a1 & 1) == 0 )
      v4 = *a1;
  }
  result = sub_1406DF7A0(v4 + 1);
  v6 = result;
  if ( result )
  {
    if ( v4 )
    {
      v7 = result + 1;
      if ( ((unsigned __int8)a1 & 1) != 0 )
        *v7 = (unsigned __int64)a1 & 0xFFFFFFFFFFFFFFFEuLL;
      else
        memmove(v7, a1 + 1, 8 * v4);
    }
    v6[v4 + 1] = a2;
    return sub_1406DF688(v6, 1);
  }
  return result;
}
