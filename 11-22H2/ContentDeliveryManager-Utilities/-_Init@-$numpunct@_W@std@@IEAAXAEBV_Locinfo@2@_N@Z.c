/*
 * XREFs of ?_Init@?$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x1800B8970
 * Callers:
 *     ?_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x180015D2C (-_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ??0?$numpunct@_W@std@@QEAA@AEBV_Locinfo@1@_K_N@Z @ 0x1800B6CE4 (--0-$numpunct@_W@std@@QEAA@AEBV_Locinfo@1@_K_N@Z.c)
 * Callees:
 *     _Mbrtowc @ 0x180004B78 (_Mbrtowc.c)
 *     _Getcvt @ 0x18000612C (_Getcvt.c)
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$_Maklocstr@D@std@@YAPEADPEBDPEADAEBU_Cvtvec@@@Z @ 0x18004FBB0 (--$_Maklocstr@D@std@@YAPEADPEBDPEADAEBU_Cvtvec@@@Z.c)
 *     ??$_Maklocstr@G@std@@YAPEAGPEBDPEAGAEBU_Cvtvec@@@Z @ 0x18004FC00 (--$_Maklocstr@G@std@@YAPEAGPEBDPEAGAEBU_Cvtvec@@@Z.c)
 */

wchar_t *__fastcall std::numpunct<wchar_t>::_Init(mbstate_t a1, __int64 a2, char a3)
{
  struct lconv *v5; // rdi
  _Cvtvec *v6; // rax
  wchar_t *grouping; // rcx
  wchar_t *result; // rax
  char v9[8]; // [rsp+30h] [rbp-88h] BYREF
  wchar_t v10; // [rsp+38h] [rbp-80h] BYREF
  mbstate_t v11; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v12[3]; // [rsp+48h] [rbp-70h] BYREF
  _Cvtvec v13; // [rsp+78h] [rbp-40h] BYREF

  v11 = a1;
  v5 = localeconv();
  v6 = Getcvt(&v13);
  v12[0] = *(_OWORD *)&v6->_Page;
  v12[1] = *(_OWORD *)&v6->_Isleadbyte[4];
  v12[2] = *(_OWORD *)&v6->_Isleadbyte[20];
  *(_QWORD *)(*(_QWORD *)&a1 + 16LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)&a1 + 32LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)&a1 + 40LL) = 0LL;
  Getcvt(&v13);
  grouping = (wchar_t *)&word_1801070C0;
  if ( !a3 )
    grouping = (wchar_t *)v5->grouping;
  try
  {
    *(_QWORD *)(*(_QWORD *)&a1 + 16LL) = std::_Maklocstr<char>(grouping);
    *(_QWORD *)(*(_QWORD *)&a1 + 32LL) = std::_Maklocstr<unsigned short>("false", 0LL, (const _Cvtvec *)v12);
    *(_QWORD *)(*(_QWORD *)&a1 + 40LL) = std::_Maklocstr<unsigned short>("true", 0LL, (const _Cvtvec *)v12);
  }
  catch ( ... )
  {
    std::numpunct<wchar_t>::_Tidy(*(void ***)&v11);
    throw;
  }
  if ( a3 )
  {
    v9[0] = 46;
    v10 = 0;
    v11._Wchar = 0;
    Mbrtowc(&v10, v9, 1uLL, &v11, (const _Cvtvec *)v12);
    *(_WORD *)(*(_QWORD *)&a1 + 24LL) = v10;
    v9[0] = 44;
    v10 = 0;
    v11._Wchar = 0;
    Mbrtowc(&v10, v9, 1uLL, &v11, (const _Cvtvec *)v12);
    result = (wchar_t *)v10;
    *(_WORD *)(*(_QWORD *)&a1 + 26LL) = v10;
  }
  else
  {
    *(_WORD *)(*(_QWORD *)&a1 + 24LL) = *v5->_W_decimal_point;
    result = v5->_W_thousands_sep;
    *(_WORD *)(*(_QWORD *)&a1 + 26LL) = *result;
  }
  return result;
}
