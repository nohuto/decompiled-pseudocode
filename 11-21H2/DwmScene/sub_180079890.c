/*
 * XREFs of sub_180079890 @ 0x180079890
 * Callers:
 *     sub_180078410 @ 0x180078410 (sub_180078410.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800796D0 @ 0x1800796D0 (sub_1800796D0.c)
 */

void __fastcall sub_180079890(_QWORD *a1)
{
  __int64 **v2; // rcx
  __int64 *v3; // rdi
  unsigned __int64 v4; // rdx
  __int64 *v5; // rsi
  void *v6; // rdi
  unsigned __int64 v7; // rcx

  if ( a1[2] )
  {
    if ( a1[7] >> 3 <= a1[2] )
    {
      v2 = (__int64 **)a1[1];
      *v2[1] = 0LL;
      v3 = *v2;
      if ( *v2 )
      {
        do
        {
          v4 = v3[5];
          v5 = (__int64 *)*v3;
          if ( v4 >= 8 )
            sub_180010884((char *)v3[2], 2 * v4 + 2);
          v3[4] = 0LL;
          v3[5] = 7LL;
          *((_WORD *)v3 + 8) = 0;
          sub_180010884((char *)v3, 0x30uLL);
          v3 = v5;
        }
        while ( v5 );
      }
      *(_QWORD *)a1[1] = a1[1];
      *(_QWORD *)(a1[1] + 8LL) = a1[1];
      a1[2] = 0LL;
      v6 = (void *)a1[3];
      v7 = (unsigned __int64)(a1[4] - (_QWORD)v6 + 7LL) >> 3;
      if ( (unsigned __int64)v6 > a1[4] )
        v7 = 0LL;
      if ( v7 )
        memset64(v6, a1[1], v7);
    }
    else
    {
      sub_1800796D0(a1, *(_QWORD **)a1[1], (_QWORD *)a1[1]);
    }
  }
}
