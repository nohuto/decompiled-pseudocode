/*
 * XREFs of ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x18007D19C
 * Callers:
 *     ??$?0U?$char_traits@G@std@@V?$allocator@G@1@@?$basic_regex@GV?$regex_traits@G@std@@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@W4syntax_option_type@regex_constants@1@@Z @ 0x18007D000 (--$-0U-$char_traits@G@std@@V-$allocator@G@1@@-$basic_regex@GV-$regex_traits@G@std@@@std@@QEAA@AE.c)
 * Callees:
 *     ?_Getfacet@locale@std@@QEBAPEBVfacet@12@_K@Z @ 0x18007D274 (-_Getfacet@locale@std@@QEBAPEBVfacet@12@_K@Z.c)
 *     ?_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z @ 0x18007D864 (-_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

struct std::_Facet_base *__fastcall std::use_facet<std::ctype<unsigned short>>(std::locale *this)
{
  unsigned __int64 v2; // rax
  struct std::_Facet_base *v3; // rbx
  struct std::_Facet_base *v5; // rbx
  char v6; // [rsp+38h] [rbp+10h] BYREF
  struct std::_Facet_base *v7; // [rsp+40h] [rbp+18h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v6, 0);
  v7 = (struct std::_Facet_base *)std::_Facetptr<std::ctype<unsigned short>>::_Psave;
  v2 = std::locale::id::operator unsigned __int64(std::ctype<unsigned short>::id);
  v3 = std::locale::_Getfacet(this, v2);
  if ( !v3 )
  {
    v3 = v7;
    if ( !v7 )
    {
      if ( std::ctype<unsigned short>::_Getcat(&v7, this) == -1 )
        abort();
      v5 = v7;
      std::_Facet_Register(v7);
      (*(void (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v5 + 8LL))(v5);
      v3 = v7;
      std::_Facetptr<std::ctype<unsigned short>>::_Psave = (__int64)v7;
    }
  }
  std::_Lockit::~_Lockit((std::_Lockit *)&v6);
  return v3;
}
