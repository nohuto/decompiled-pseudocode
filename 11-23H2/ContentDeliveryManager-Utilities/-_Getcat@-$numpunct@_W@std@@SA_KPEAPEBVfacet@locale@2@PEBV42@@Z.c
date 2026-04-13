/*
 * XREFs of ?_Getcat@?$numpunct@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800B78CC
 * Callers:
 *     ??$use_facet@V?$numpunct@_W@std@@@std@@YAAEBV?$numpunct@_W@0@AEBVlocale@0@@Z @ 0x1800B6A74 (--$use_facet@V-$numpunct@_W@std@@@std@@YAAEBV-$numpunct@_W@0@AEBVlocale@0@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004724 (--2@YAPEAX_K@Z.c)
 *     ??0_Locinfo@std@@QEAA@PEBD@Z @ 0x180051F18 (--0_Locinfo@std@@QEAA@PEBD@Z.c)
 *     ??1_Locinfo@std@@QEAA@XZ @ 0x180053638 (--1_Locinfo@std@@QEAA@XZ.c)
 *     ?c_str@locale@std@@QEBAPEBDXZ @ 0x180062D7C (-c_str@locale@std@@QEBAPEBDXZ.c)
 *     ??0?$numpunct@_W@std@@QEAA@AEBV_Locinfo@1@_K_N@Z @ 0x1800B6C94 (--0-$numpunct@_W@std@@QEAA@AEBV_Locinfo@1@_K_N@Z.c)
 */

__int64 __fastcall std::numpunct<wchar_t>::_Getcat(__int64 *a1, std::locale *a2)
{
  char v4; // bl
  void *v5; // rsi
  char *v6; // rax
  std::_Locinfo *v7; // rax
  __int64 v8; // rax
  _BYTE v10[136]; // [rsp+20h] [rbp-88h] BYREF

  v4 = 0;
  if ( a1 && !*a1 )
  {
    v5 = operator new(0x30uLL);
    if ( v5 )
    {
      v6 = (char *)std::locale::c_str(a2);
      v7 = std::_Locinfo::_Locinfo((std::_Locinfo *)v10, v6);
      v4 = 1;
      v8 = std::numpunct<wchar_t>::numpunct<wchar_t>((__int64)v5, (__int64)v7, 0LL, 1);
    }
    else
    {
      v8 = 0LL;
    }
    *a1 = v8;
    if ( (v4 & 1) != 0 )
      std::_Locinfo::~_Locinfo((std::_Locinfo *)v10);
  }
  return 4LL;
}
