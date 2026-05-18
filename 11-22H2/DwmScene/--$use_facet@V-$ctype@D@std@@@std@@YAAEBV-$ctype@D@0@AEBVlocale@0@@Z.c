/*
 * XREFs of ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x18001EF28
 * Callers:
 *     ??$?5DU?$char_traits@D@std@@V?$allocator@D@1@@std@@YAAEAV?$basic_istream@DU?$char_traits@D@std@@@0@$$QEAV10@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@@Z @ 0x18008EDFC (--$-5DU-$char_traits@D@std@@V-$allocator@D@1@@std@@YAAEAV-$basic_istream@DU-$char_traits@D@std@@.c)
 * Callees:
 *     ??1?$unique_ptr@V_Facet_base@std@@U?$default_delete@V_Facet_base@std@@@2@@std@@QEAA@XZ @ 0x18001E4B4 (--1-$unique_ptr@V_Facet_base@std@@U-$default_delete@V_Facet_base@std@@@2@@std@@QEAA@XZ.c)
 *     ?_Getfacet@locale@std@@QEBAPEBVfacet@12@_K@Z @ 0x18001E648 (-_Getfacet@locale@std@@QEBAPEBVfacet@12@_K@Z.c)
 *     ?_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z @ 0x1800DBBE8 (-_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
struct std::_Facet_base *__fastcall std::use_facet<std::ctype<char>>(std::locale *this)
{
  unsigned __int64 v2; // rax
  struct std::_Facet_base *v3; // rbx
  struct std::_Facet_base *v4; // rbx
  char v6; // [rsp+38h] [rbp+10h] BYREF
  struct std::_Facet_base *v7; // [rsp+40h] [rbp+18h] BYREF
  __int64 (__fastcall ***v8)(_QWORD, __int64); // [rsp+48h] [rbp+20h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v6, 0);
  v7 = (struct std::_Facet_base *)std::_Facetptr<std::ctype<char>>::_Psave;
  v2 = std::locale::id::operator unsigned __int64(std::ctype<char>::id);
  v3 = std::locale::_Getfacet(this, v2);
  if ( !v3 )
  {
    v3 = v7;
    if ( !v7 )
    {
      if ( std::ctype<char>::_Getcat(&v7, this) == -1 )
        abort();
      v4 = v7;
      std::_Facet_Register(v7);
      (*(void (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v4 + 8LL))(v4);
      v3 = v7;
      std::_Facetptr<std::ctype<char>>::_Psave = (__int64)v7;
      v8 = 0LL;
      std::unique_ptr<std::_Facet_base>::~unique_ptr<std::_Facet_base>(&v8);
    }
  }
  std::_Lockit::~_Lockit((std::_Lockit *)&v6);
  return v3;
}
