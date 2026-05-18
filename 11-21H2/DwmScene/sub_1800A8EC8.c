/*
 * XREFs of sub_1800A8EC8 @ 0x1800A8EC8
 * Callers:
 *     sub_1800A8FEC @ 0x1800A8FEC (sub_1800A8FEC.c)
 *     sub_1800AB580 @ 0x1800AB580 (sub_1800AB580.c)
 * Callees:
 *     sub_18001DA38 @ 0x18001DA38 (sub_18001DA38.c)
 */

__int64 *__fastcall sub_1800A8EC8(__int64 a1, __int64 *a2, _QWORD *a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 *v7; // rdi
  __int64 *v8; // rsi

  v5 = qword_1801FAE08;
  v7 = *(__int64 **)(qword_1801FAE18 + 16 * (a4 & qword_1801FAE30) + 8);
  if ( v7 == (__int64 *)qword_1801FAE08 )
  {
    a2[1] = 0LL;
    *a2 = v5;
  }
  else
  {
    v8 = *(__int64 **)(qword_1801FAE18 + 16 * (a4 & qword_1801FAE30));
    while ( !sub_18001DA38(a3, v7 + 2) )
    {
      if ( v7 == v8 )
      {
        a2[1] = 0LL;
        *a2 = (__int64)v7;
        return a2;
      }
      v7 = (__int64 *)v7[1];
    }
    *a2 = *v7;
    a2[1] = (__int64)v7;
  }
  return a2;
}
