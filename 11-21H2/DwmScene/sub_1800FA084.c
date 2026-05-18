/*
 * XREFs of sub_1800FA084 @ 0x1800FA084
 * Callers:
 *     sub_1800F87FC @ 0x1800F87FC (sub_1800F87FC.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800F9EB8 @ 0x1800F9EB8 (sub_1800F9EB8.c)
 *     sub_1800FA818 @ 0x1800FA818 (sub_1800FA818.c)
 */

void __fastcall sub_1800FA084(_QWORD *a1)
{
  __int64 **v2; // rcx
  __int64 *v3; // rdi
  __int64 *v4; // rsi
  unsigned __int64 v5; // rdx
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
          v4 = (__int64 *)*v3;
          sub_1800FA818(v3 + 6);
          v5 = v3[5];
          if ( v5 >= 8 )
            sub_180010884((char *)v3[2], 2 * v5 + 2);
          v3[4] = 0LL;
          v3[5] = 7LL;
          *((_WORD *)v3 + 8) = 0;
          sub_180010884((char *)v3, 0xB0uLL);
          v3 = v4;
        }
        while ( v4 );
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
      sub_1800F9EB8(a1, *(_QWORD **)a1[1], (_QWORD *)a1[1]);
    }
  }
}
