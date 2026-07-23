/*
 * XREFs of sub_14082AFE0 @ 0x14082AFE0
 * Callers:
 *     sub_1405BF6B4 @ 0x1405BF6B4 (sub_1405BF6B4.c)
 *     sub_14082ACF0 @ 0x14082ACF0 (sub_14082ACF0.c)
 *     sub_140968388 @ 0x140968388 (sub_140968388.c)
 * Callees:
 *     sub_140246420 @ 0x140246420 (sub_140246420.c)
 */

__int64 __fastcall sub_14082AFE0(ULONG_PTR *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned int v7; // edi
  __int64 *v8; // r15
  unsigned __int64 v9; // r8
  ULONG_PTR *v10; // r14
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi

  v3 = a2 + a3;
  if ( a2 + a3 > qword_140C50840 + 1 )
    return 0LL;
  v7 = 0;
  v8 = qword_14001C780;
  do
  {
    if ( v7 >= 2 )
    {
      if ( a1 != &StartContext )
        goto LABEL_8;
      v10 = a1 + 1995;
      v9 = 512LL;
    }
    else
    {
      v9 = *v8;
      v10 = &a1[2 * v7 + 1977];
    }
    v11 = ((v9 + a2 + a3 - 1) & ~(v9 - 1)) / v9;
    if ( !(unsigned int)sub_140246420(9, v10[1] + ((a2 / v9) >> 3), 8 * (((v11 + 7) >> 3) - ((a2 / v9) >> 3))) )
      return 0LL;
    if ( v11 > *v10 )
      *v10 = v11;
LABEL_8:
    ++v7;
    ++v8;
  }
  while ( v7 < 3 );
  if ( (unsigned int)sub_140246420(9, a1[1982] + (a2 >> 9), 8 * (((unsigned __int64)(v3 + 511) >> 9) - (a2 >> 9))) )
  {
    v12 = (unsigned __int64)(v3 + 0x3FFFF) >> 18;
    v13 = a2 >> 18;
    if ( (unsigned int)sub_140246420(9, a1[1984] + (v13 >> 3), 8 * (((v12 + 7) >> 3) - (v13 >> 3))) )
    {
      if ( v12 > a1[1983] )
        a1[1983] = v12;
      if ( (unsigned int)sub_140246420(9, a1[1985] + 2 * v13, 8 * (2 * v12 - 2 * v13)) )
        return 1LL;
    }
  }
  return 0LL;
}
