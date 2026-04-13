/*
 * XREFs of ??4?$_Yarn@D@std@@QEAAAEAV01@PEBD@Z @ 0x18006E77C
 * Callers:
 *     ??0_Locimp@locale@std@@AEAA@AEBV012@@Z @ 0x180005388 (--0_Locimp@locale@std@@AEAA@AEBV012@@Z.c)
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x180005548 (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 *     ?_Locinfo_ctor@_Locinfo@std@@SAXPEAV12@PEBD@Z @ 0x1800056B4 (-_Locinfo_ctor@_Locinfo@std@@SAXPEAV12@PEBD@Z.c)
 *     ?_New_Locimp@_Locimp@locale@std@@CAPEAV123@_N@Z @ 0x180005788 (-_New_Locimp@_Locimp@locale@std@@CAPEAV123@_N@Z.c)
 *     ?_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x180009558 (-_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ??$_Getvals@G@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@IEAAXGAEBV_Locinfo@1@@Z @ 0x18000E868 (--$_Getvals@G@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@IEAAXGAEBV_L.c)
 *     ??$_Getvals@D@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IEAAXDAEBV_Locinfo@1@@Z @ 0x18001C234 (--$_Getvals@D@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@IEAAXDAEBV_L.c)
 *     ?_Init@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@AEAAXPEBV?$codecvt_utf8@G$0BAPPPP@$0A@@2@@Z @ 0x1800715C8 (-_Init@-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D@2@.c)
 * Callees:
 *     memcpy_0 @ 0x180022B24 (memcpy_0.c)
 *     ?_Tidy@?$_Yarn@_W@std@@AEAAXXZ @ 0x180062734 (-_Tidy@-$_Yarn@_W@std@@AEAAXXZ.c)
 */

void **__fastcall std::_Yarn<char>::operator=(void **a1, _BYTE *a2)
{
  _BYTE *i; // rbx
  __int64 v5; // rbx
  void *v6; // rax

  if ( *a1 != a2 )
  {
    std::_Yarn<wchar_t>::_Tidy(a1);
    if ( a2 )
    {
      for ( i = a2; *i; ++i )
        ;
      v5 = i - a2;
      v6 = malloc(v5 + 1);
      *a1 = v6;
      if ( v6 )
        memcpy_0(v6, a2, v5 + 1);
    }
  }
  return a1;
}
