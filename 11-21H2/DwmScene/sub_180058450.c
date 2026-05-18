/*
 * XREFs of sub_180058450 @ 0x180058450
 * Callers:
 *     sub_1800561F8 @ 0x1800561F8 (sub_1800561F8.c)
 *     sub_180057108 @ 0x180057108 (sub_180057108.c)
 *     sub_180057880 @ 0x180057880 (sub_180057880.c)
 * Callees:
 *     sub_18001DE04 @ 0x18001DE04 (sub_18001DE04.c)
 */

_QWORD *__fastcall sub_180058450(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 *v3; // rbp
  __int64 *v6; // rdi
  __int64 *v7; // rbx
  _QWORD *result; // rax

  v3 = (__int64 *)*a1;
  v6 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8);
  while ( !*((_BYTE *)v7 + 25) )
  {
    if ( (unsigned __int8)sub_18001DE04(v7 + 4, a3) )
    {
      v7 = (__int64 *)v7[2];
    }
    else
    {
      v6 = v7;
      v7 = (__int64 *)*v7;
    }
  }
  if ( *((_BYTE *)v6 + 25) || (unsigned __int8)sub_18001DE04(a3, v6 + 4) )
    v6 = v3;
  result = a2;
  *a2 = v6;
  return result;
}
