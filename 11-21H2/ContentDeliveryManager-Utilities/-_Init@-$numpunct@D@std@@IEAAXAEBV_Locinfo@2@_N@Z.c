/*
 * XREFs of ?_Init@?$numpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x1800086DC
 * Callers:
 *     ?_Getcat@?$numpunct@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800071E8 (-_Getcat@-$numpunct@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x180008E44 (-_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 * Callees:
 *     _Getcvt @ 0x180005A98 (_Getcvt.c)
 *     ??_U@YAPEAX_K@Z @ 0x180005E18 (--_U@YAPEAX_K@Z.c)
 */

_BYTE *__fastcall std::numpunct<char>::_Init(__int64 a1, __int64 a2, char a3)
{
  struct lconv *v5; // r14
  const unsigned __int16 *grouping; // rsi
  __int64 v7; // rdi
  size_t v8; // rdi
  _BYTE *v9; // rax
  signed __int64 v10; // rdx
  const char *v11; // rdi
  __int64 v12; // rsi
  _BYTE *v13; // rax
  const char *v14; // rdi
  __int64 v15; // rsi
  _BYTE *result; // rax
  _Cvtvec v18; // [rsp+30h] [rbp-48h] BYREF

  v5 = localeconv();
  Getcvt(&v18);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  Getcvt(&v18);
  grouping = &word_180121FC0;
  if ( !a3 )
    grouping = (const unsigned __int16 *)v5->grouping;
  v7 = -1LL;
  do
    ++v7;
  while ( *((_BYTE *)grouping + v7) );
  v8 = v7 + 1;
  try
  {
    v9 = operator new[](v8);
    if ( v8 )
    {
      v10 = v9 - (_BYTE *)grouping;
      do
      {
        *((_BYTE *)grouping + v10) = *(_BYTE *)grouping;
        grouping = (const unsigned __int16 *)((char *)grouping + 1);
        --v8;
      }
      while ( v8 );
    }
    *(_QWORD *)(a1 + 16) = v9;
    v11 = "false";
    v12 = 6LL;
    v13 = operator new[](6uLL);
    do
    {
      v11[v13 - "false"] = *v11;
      ++v11;
      --v12;
    }
    while ( v12 );
    *(_QWORD *)(a1 + 32) = v13;
    v14 = "true";
    v15 = 5LL;
    result = operator new[](5uLL);
    do
    {
      v14[result - "true"] = *v14;
      ++v14;
      --v15;
    }
    while ( v15 );
    *(_QWORD *)(a1 + 40) = result;
  }
  catch ( ... )
  {
    std::numpunct<char>::_Tidy(a1);
    throw;
  }
  if ( a3 )
  {
    *(_WORD *)(a1 + 24) = 11310;
  }
  else
  {
    *(_BYTE *)(a1 + 24) = *v5->decimal_point;
    result = v5->thousands_sep;
    *(_BYTE *)(a1 + 25) = *result;
  }
  return result;
}
