/*
 * XREFs of ??$use_facet@V?$codecvt@GDU_Mbstatet@@@std@@@std@@YAAEBV?$codecvt@GDU_Mbstatet@@@0@AEBVlocale@0@@Z @ 0x1806E10D0
 * Callers:
 *     ??0?$basic_ifstream@GU?$char_traits@G@std@@@std@@QEAA@PEBGHH@Z @ 0x1806E1274 (--0-$basic_ifstream@GU-$char_traits@G@std@@@std@@QEAA@PEBGHH@Z.c)
 *     ?imbue@?$basic_filebuf@GU?$char_traits@G@std@@@std@@MEAAXAEBVlocale@2@@Z @ 0x1806E4470 (-imbue@-$basic_filebuf@GU-$char_traits@G@std@@@std@@MEAAXAEBVlocale@2@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Getfacet@locale@std@@QEBAPEBVfacet@12@_K@Z @ 0x1803E484C (-_Getfacet@locale@std@@QEBAPEBVfacet@12@_K@Z.c)
 *     ?_Throw_bad_cast@std@@YAXXZ @ 0x1803E48B4 (-_Throw_bad_cast@std@@YAXXZ.c)
 *     ?_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z @ 0x180737688 (-_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z.c)
 */

struct std::_Facet_base *__fastcall std::use_facet<std::codecvt<unsigned short,char,_Mbstatet>>(std::locale *this)
{
  unsigned __int64 v2; // rax
  struct std::_Facet_base *v3; // rbx
  struct std::_Facet_base *v4; // rbx
  char v6; // [rsp+38h] [rbp+10h] BYREF
  struct std::_Facet_base *v7; // [rsp+40h] [rbp+18h] BYREF
  struct std::_Facet_base *v8; // [rsp+48h] [rbp+20h]

  std::_Lockit::_Lockit((std::_Lockit *)&v6, 0);
  v7 = (struct std::_Facet_base *)std::_Facetptr<std::codecvt<unsigned short,char,_Mbstatet>>::_Psave;
  v2 = std::locale::id::operator unsigned __int64(std::codecvt<unsigned short,char,_Mbstatet>::id);
  v3 = std::locale::_Getfacet(this, v2);
  if ( !v3 )
  {
    v3 = v7;
    if ( !v7 )
    {
      if ( std::codecvt<unsigned short,char,_Mbstatet>::_Getcat(&v7, this) == -1 )
        std::_Throw_bad_cast();
      v4 = v7;
      v8 = v7;
      std::_Facet_Register(v7);
      (*(void (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v4 + 8LL))(v4);
      v3 = v7;
      std::_Facetptr<std::codecvt<unsigned short,char,_Mbstatet>>::_Psave = (__int64)v7;
    }
  }
  std::_Lockit::~_Lockit((std::_Lockit *)&v6);
  return v3;
}
