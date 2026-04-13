/*
 * XREFs of ?init@?$basic_ios@_WU?$char_traits@_W@std@@@std@@IEAAXPEAV?$basic_streambuf@_WU?$char_traits@_W@std@@@2@_N@Z @ 0x1800A04F0
 * Callers:
 *     ??0?$basic_ostringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@H@Z @ 0x18009AD70 (--0-$basic_ostringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@H@Z.c)
 *     ??0?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAA@PEAV?$basic_streambuf@_WU?$char_traits@_W@std@@@1@_N@Z @ 0x1800B6B58 (--0-$basic_istream@_WU-$char_traits@_W@std@@@std@@QEAA@PEAV-$basic_streambuf@_WU-$char_traits@_W.c)
 * Callees:
 *     ??1locale@std@@QEAA@XZ @ 0x18005372C (--1locale@std@@QEAA@XZ.c)
 *     ?_Init@ios_base@std@@IEAAXXZ @ 0x180061D88 (-_Init@ios_base@std@@IEAAXXZ.c)
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x1800648C4 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ?setstate@?$basic_ios@GU?$char_traits@G@std@@@std@@QEAAXH_N@Z @ 0x18006525C (-setstate@-$basic_ios@GU-$char_traits@G@std@@@std@@QEAAXH_N@Z.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x18009AC34 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::wios::init(__int64 a1, __int64 a2)
{
  std::locale *v4; // rax
  const struct std::locale::facet *v5; // rbx
  __int64 v6; // rdx
  char v7; // [rsp+30h] [rbp+8h] BYREF

  std::ios_base::_Init((std::ios_base *)a1);
  *(_QWORD *)(a1 + 72) = a2;
  *(_QWORD *)(a1 + 80) = 0LL;
  v4 = std::ios_base::getloc(a1, (std::locale *)&v7);
  v5 = std::use_facet<std::ctype<wchar_t>>(v4);
  std::locale::~locale((std::locale *)&v7);
  LOBYTE(v6) = 32;
  *(_WORD *)(a1 + 88) = (*(__int64 (__fastcall **)(const struct std::locale::facet *, __int64))(*(_QWORD *)v5 + 96LL))(
                          v5,
                          v6);
  if ( !*(_QWORD *)(a1 + 72) )
    std::basic_ios<unsigned short>::setstate(a1, 4, 0);
}
