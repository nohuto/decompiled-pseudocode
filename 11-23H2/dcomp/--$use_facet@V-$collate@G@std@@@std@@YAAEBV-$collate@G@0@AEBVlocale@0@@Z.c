/*
 * XREFs of ??$use_facet@V?$collate@G@std@@@std@@YAAEBV?$collate@G@0@AEBVlocale@0@@Z @ 0x18007D0C8
 * Callers:
 *     ??$?0U?$char_traits@G@std@@V?$allocator@G@1@@?$basic_regex@GV?$regex_traits@G@std@@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@W4syntax_option_type@regex_constants@1@@Z @ 0x18007D000 (--$-0U-$char_traits@G@std@@V-$allocator@G@1@@-$basic_regex@GV-$regex_traits@G@std@@@std@@QEAA@AE.c)
 * Callees:
 *     ?_Getfacet@locale@std@@QEBAPEBVfacet@12@_K@Z @ 0x18007D274 (-_Getfacet@locale@std@@QEBAPEBVfacet@12@_K@Z.c)
 *     ?_Getcat@?$collate@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x18007D650 (-_Getcat@-$collate@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z @ 0x18007D864 (-_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

struct std::_Facet_base *__fastcall std::use_facet<std::collate<unsigned short>>(std::locale *this)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rax
  struct std::_Facet_base *v4; // rbx
  char v6; // [rsp+38h] [rbp+10h] BYREF
  struct std::_Facet_base *v7; // [rsp+40h] [rbp+18h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v6, 0);
  v2 = std::_Facetptr<std::collate<unsigned short>>::_Psave;
  v7 = (struct std::_Facet_base *)std::_Facetptr<std::collate<unsigned short>>::_Psave;
  v3 = std::locale::id::operator unsigned __int64(std::collate<unsigned short>::id);
  v4 = std::locale::_Getfacet(this, v3);
  if ( !v4 )
  {
    if ( v2 )
    {
      v4 = (struct std::_Facet_base *)v2;
    }
    else
    {
      if ( std::collate<unsigned short>::_Getcat(&v7, this) == -1 )
        abort();
      v4 = v7;
      std::_Facet_Register(v7);
      (*(void (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v4 + 8LL))(v4);
      std::_Facetptr<std::collate<unsigned short>>::_Psave = (__int64)v4;
    }
  }
  std::_Lockit::~_Lockit((std::_Lockit *)&v6);
  return v4;
}
