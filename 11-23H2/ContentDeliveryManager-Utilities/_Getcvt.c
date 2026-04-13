/*
 * XREFs of _Getcvt @ 0x18000612C
 * Callers:
 *     _Mbrtowc @ 0x180004B78 (_Mbrtowc.c)
 *     ?_Init@?$numpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180008DE4 (-_Init@-$numpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     ??$_Getvals@G@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@IEAAXGAEBV_Locinfo@1@@Z @ 0x18000E868 (--$_Getvals@G@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@IEAAXGAEBV_L.c)
 *     ?_Getcat@?$codecvt@_WDH@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800111D0 (-_Getcat@-$codecvt@_WDH@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Init@?$_Mpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180014450 (-_Init@-$_Mpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     ?_Init@?$_Mpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180014600 (-_Init@-$_Mpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     ?_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800150C4 (-_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ?_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x180015D2C (-_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ??$_Getvals@D@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IEAAXDAEBV_Locinfo@1@@Z @ 0x18001C234 (--$_Getvals@D@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@IEAAXDAEBV_L.c)
 *     ?_Init@?$_Mpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x18001E72C (-_Init@-$_Mpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     ?_Init@?$ctype@_W@std@@IEAAXAEBV_Locinfo@2@@Z @ 0x180061B9C (-_Init@-$ctype@_W@std@@IEAAXAEBV_Locinfo@2@@Z.c)
 *     ?_Init@?$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180061BEC (-_Init@-$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     ??0?$codecvt@GDH@std@@QEAA@AEBV_Locinfo@1@_K@Z @ 0x18006E2DC (--0-$codecvt@GDH@std@@QEAA@AEBV_Locinfo@1@_K@Z.c)
 *     ??0?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA@XZ @ 0x18006E3EC (--0-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D@2@@std.c)
 *     ?_Init@?$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x1800B8920 (-_Init@-$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     ??$_Getvals@_W@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@IEAAX_WAEBV_Locinfo@1@@Z @ 0x1800D0104 (--$_Getvals@_W@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@IEAAX_WA.c)
 * Callees:
 *     _GetLocaleName @ 0x18000D954 (_GetLocaleName.c)
 */

_Cvtvec *__cdecl Getcvt(_Cvtvec *__return_ptr retstr)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  void *LocaleName; // rbx
  signed int v5; // ebx
  unsigned __int64 v6; // rsi

  *(_OWORD *)&retstr->_Page = 0LL;
  *(_OWORD *)&retstr->_Isleadbyte[4] = 0LL;
  *(_OWORD *)&retstr->_Isleadbyte[20] = 0LL;
  retstr->_Page = *(_DWORD *)(___lc_handle_func() + 8);
  retstr->_Mbcurmax = ___lc_codepage_func();
  retstr->_Isclocale = ___mb_cur_max_func();
  LocaleName = (void *)GetLocaleName(2LL, v2, v3);
  *(_DWORD *)retstr->_Isleadbyte = LocaleName == 0LL;
  free(LocaleName);
  if ( LocaleName )
  {
    v5 = 0;
    v6 = 0LL;
    do
    {
      if ( _ismbblead(v5) )
        retstr->_Isleadbyte[(v6 >> 3) + 4] |= 1 << (v5 & 7);
      ++v5;
      ++v6;
    }
    while ( v5 < 256 );
  }
  return retstr;
}
