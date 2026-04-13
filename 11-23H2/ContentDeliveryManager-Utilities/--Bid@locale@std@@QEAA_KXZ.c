/*
 * XREFs of ??Bid@locale@std@@QEAA_KXZ @ 0x180053AA4
 * Callers:
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x18004FEF0 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@@std@@YAAEBV?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@0@AEBVlocale@0@@Z @ 0x18004FFD4 (--$use_facet@V-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@@std@@YAAEBV-.c)
 *     ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x1800500B8 (--$use_facet@V-$numpunct@G@std@@@std@@YAAEBV-$numpunct@G@0@AEBVlocale@0@@Z.c)
 *     ?_Init@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@AEAAXPEBV?$codecvt_utf8@G$0BAPPPP@$0A@@2@@Z @ 0x1800715C8 (-_Init@-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D@2@.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x18009AC34 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@@std@@YAAEBV?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1800B6990 (--$use_facet@V-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@@std@@YAAE.c)
 *     ??$use_facet@V?$numpunct@_W@std@@@std@@YAAEBV?$numpunct@_W@0@AEBVlocale@0@@Z @ 0x1800B6A74 (--$use_facet@V-$numpunct@_W@std@@@std@@YAAEBV-$numpunct@_W@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@@std@@YAAEBV?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1800D0180 (--$use_facet@V-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@@std@@YAA.c)
 * Callees:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800052BC (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x18000534C (--1_Lockit@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::locale::id::operator unsigned __int64(__int64 a1)
{
  char v3; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_QWORD *)a1 )
  {
    std::_Lockit::_Lockit((std::_Lockit *)&v3, 0);
    if ( !*(_QWORD *)a1 )
      *(_QWORD *)a1 = ++std::locale::id::_Id_cnt;
    std::_Lockit::~_Lockit((std::_Lockit *)&v3);
  }
  return *(_QWORD *)a1;
}
