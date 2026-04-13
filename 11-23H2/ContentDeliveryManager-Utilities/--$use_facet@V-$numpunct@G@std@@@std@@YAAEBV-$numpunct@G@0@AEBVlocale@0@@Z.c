/*
 * XREFs of ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x1800500B8
 * Callers:
 *     ?_Fput@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEBD_K333@Z @ 0x180010710 (-_Fput@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?_Iput@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEAD_K@Z @ 0x1800147F4 (-_Iput@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800150C4 (-_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@G_N@Z @ 0x18001AC90 (-do_put@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18001AC90.c)
 *     ?_Getffld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800609F8 (-_Getffld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?_Getffldx@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x180060FC0 (-_Getffldx@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$i.c)
 *     ?_Getifld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1HAEBVlocale@2@@Z @ 0x1800615DC (-_Getifld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x180063920 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_180063920.c)
 * Callees:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800052BC (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x18000534C (--1_Lockit@std@@QEAA@XZ.c)
 *     ?_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z @ 0x1800054F8 (-_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z.c)
 *     _CxxThrowException_0 @ 0x180022B0C (_CxxThrowException_0.c)
 *     ??Bid@locale@std@@QEAA_KXZ @ 0x180053AA4 (--Bid@locale@std@@QEAA_KXZ.c)
 *     ?_Getcat@?$numpunct@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800608E4 (-_Getcat@-$numpunct@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Getfacet@locale@std@@QEBAPEBVfacet@12@_K@Z @ 0x18006098C (-_Getfacet@locale@std@@QEBAPEBVfacet@12@_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

const struct std::locale::facet *__fastcall std::use_facet<std::numpunct<unsigned short>>(std::locale *this)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rax
  const struct std::locale::facet *v4; // rbx
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF
  char v7; // [rsp+58h] [rbp+10h] BYREF
  struct std::_Facet_base *v8; // [rsp+60h] [rbp+18h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v7, 0);
  v2 = std::_Facetptr<std::numpunct<unsigned short>>::_Psave;
  v8 = (struct std::_Facet_base *)std::_Facetptr<std::numpunct<unsigned short>>::_Psave;
  v3 = std::locale::id::operator unsigned __int64(&std::numpunct<unsigned short>::id);
  v4 = std::locale::_Getfacet(this, v3);
  if ( !v4 )
  {
    if ( v2 )
    {
      v4 = (const struct std::locale::facet *)v2;
    }
    else
    {
      if ( std::numpunct<unsigned short>::_Getcat(&v8, this) == -1 )
      {
        bad_cast::bad_cast((bad_cast *)pExceptionObject, "bad cast");
        throw (bad_cast *)pExceptionObject;
      }
      v4 = v8;
      std::_Facetptr<std::numpunct<unsigned short>>::_Psave = (__int64)v8;
      (*(void (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v8 + 8LL))(v8);
      std::_Facet_Register(v4);
    }
  }
  std::_Lockit::~_Lockit((std::_Lockit *)&v7);
  return v4;
}
