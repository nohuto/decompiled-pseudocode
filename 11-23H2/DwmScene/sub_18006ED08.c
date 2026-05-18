/*
 * XREFs of sub_18006ED08 @ 0x18006ED08
 * Callers:
 *     sub_1800642C4 @ 0x1800642C4 (sub_1800642C4.c)
 *     sub_18006DDA0 @ 0x18006DDA0 (sub_18006DDA0.c)
 * Callees:
 *     sub_180062CD4 @ 0x180062CD4 (sub_180062CD4.c)
 *     sub_1800634FC @ 0x1800634FC (sub_1800634FC.c)
 */

_QWORD *__fastcall sub_18006ED08(_QWORD *a1)
{
  _QWORD **v2; // rdx
  _QWORD *result; // rax
  unsigned __int64 *v4; // rdx
  unsigned __int64 *v5; // rcx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a1[2] )
  {
    v2 = (_QWORD **)a1[1];
    if ( a1[7] >> 3 <= a1[2] )
    {
      sub_180062CD4((__int64)a1, (__int64)v2);
      *(_QWORD *)a1[1] = a1[1];
      *(_QWORD *)(a1[1] + 8LL) = a1[1];
      a1[2] = 0LL;
      v4 = (unsigned __int64 *)a1[4];
      v5 = (unsigned __int64 *)a1[3];
      v6 = a1[1];
      return (_QWORD *)sub_1800634FC(v5, v4, &v6);
    }
    else
    {
      return sub_18006EBB0(a1, *v2, (_QWORD *)a1[1]);
    }
  }
  return result;
}
