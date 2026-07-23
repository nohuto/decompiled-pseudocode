/*
 * XREFs of sub_14097F59C @ 0x14097F59C
 * Callers:
 *     sub_1409D9B98 @ 0x1409D9B98 (sub_1409D9B98.c)
 * Callees:
 *     sub_14023A8F8 @ 0x14023A8F8 (sub_14023A8F8.c)
 *     sub_140264ED0 @ 0x140264ED0 (sub_140264ED0.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     sub_14045CDD6 @ 0x14045CDD6 (sub_14045CDD6.c)
 */

unsigned __int64 __fastcall sub_14097F59C(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rsi
  unsigned int v4; // eax
  unsigned int v5; // ebx
  __int64 *v6; // rcx
  ULONG_PTR *v7; // rax
  ULONG_PTR *v8; // rdi
  char v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0;
  v2 = 0LL;
  if ( a2 < (unsigned __int16)word_140D05000 )
  {
    v4 = sub_14023A8F8();
    v5 = v4;
    if ( v4 >= 3 )
    {
LABEL_6:
      if ( v5 == 3 )
        return v2;
    }
    else
    {
      v6 = &qword_14001C780[v4];
      while ( *v6 != 512 )
      {
        ++v5;
        ++v6;
        if ( v5 >= 3 )
          goto LABEL_6;
      }
    }
    v7 = sub_140264ED0((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, 0LL, &v10);
    v8 = v7;
    if ( v7 )
      v2 = sub_14045CDD6((__int64)v7, a2, v5, 0x200uLL, 1) >> 9;
    if ( v10 )
      sub_1403606C4(v8[22]);
  }
  return v2;
}
