/*
 * XREFs of sub_1406991C8 @ 0x1406991C8
 * Callers:
 *     sub_140698FBC @ 0x140698FBC (sub_140698FBC.c)
 * Callees:
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 *     sub_1402E0340 @ 0x1402E0340 (sub_1402E0340.c)
 */

__int64 __fastcall sub_1406991C8(__int64 a1, unsigned __int8 *a2, _WORD *a3, unsigned int a4)
{
  unsigned __int8 v5; // al
  int v6; // eax
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+38h] [rbp-10h]
  unsigned __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  _WORD *v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  v5 = *a2;
  if ( !*a2 )
    return sub_1402E0340(a3, a4, &word_140867F00, 0LL, 0LL, 2048);
  if ( v5 > 2u )
  {
    if ( v5 == 3 )
      return sub_1402DFBC4(a3, a4, &v11, &v10, 0x800u, L"%ws\\*", &word_140867F00);
    else
      return 3221225485LL;
  }
  else
  {
    if ( v5 == 1 )
      v6 = 0;
    else
      v6 = *((unsigned __int16 *)a2 + 1) + 1;
    v9 = v6;
    result = sub_1402DFBC4(a3, a4, &v11, &v10, 0x800u, L"%ws\\%X", &word_140867F00, v9);
    if ( (int)result >= 0 && a2[1] != 0xFF )
    {
      LODWORD(v8) = a2[1];
      return sub_1402DFBC4(v11, v10, 0LL, 0LL, 0x800u, L"\\%X", v8);
    }
  }
  return result;
}
