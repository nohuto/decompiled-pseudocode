/*
 * XREFs of sub_180030074 @ 0x180030074
 * Callers:
 *     sub_18003AFE8 @ 0x18003AFE8 (sub_18003AFE8.c)
 *     sub_1800DAEE0 @ 0x1800DAEE0 (sub_1800DAEE0.c)
 * Callees:
 *     memmove @ 0x18000CA85 (memmove.c)
 *     sub_180020018 @ 0x180020018 (sub_180020018.c)
 */

__int64 __fastcall sub_180030074(__int64 a1, const void **a2, _WORD *a3)
{
  unsigned __int64 v4; // rdx
  const void *v6; // rcx
  bool v7; // cf
  char *v8; // rbp
  _WORD *v9; // rsi
  __int64 result; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( a3[v4] );
  v6 = a2[2];
  if ( v4 > (_BYTE *)a2[3] - (_BYTE *)v6 )
  {
    a2 = sub_180020018(a2, v4, (__int64)a3, a3, v4);
  }
  else
  {
    v7 = (unsigned __int64)a2[3] < 8;
    v8 = (char *)v6 + v4;
    a2[2] = (char *)v6 + v4;
    v9 = a2;
    if ( !v7 )
      v9 = *a2;
    memmove(&v9[(_QWORD)v6], a3, 2 * v4);
    v9[(_QWORD)v8] = 0;
  }
  result = a1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)a2 + 1);
  a2[2] = 0LL;
  a2[3] = (const void *)7;
  *(_WORD *)a2 = 0;
  return result;
}
