/*
 * XREFs of ??$use_facet@V?$numpunct@_W@std@@@std@@YAAEBV?$numpunct@_W@0@AEBVlocale@0@@Z @ 0x1800C99EC
 * Callers:
 *     ?_Fput@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WPEBD_K444@Z @ 0x180010460 (-_Fput@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$ostreamb.c)
 *     ?_Iput@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WPEAD_K@Z @ 0x180014400 (-_Iput@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$ostreamb.c)
 *     ?_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x180015520 (-_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ?do_put@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_W_N@Z @ 0x18001AF00 (-do_put@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_18001AF00.c)
 *     ?_Getffld@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800CADE8 (-_Getffld@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV-.c)
 *     ?_Getffldx@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800CB720 (-_Getffldx@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV.c)
 *     ?_Getifld@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@1HAEBVlocale@2@@Z @ 0x1800CC11C (-_Getifld@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV-.c)
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x1800CD9A0 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_1800CD9A0.c)
 * Callees:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x180004C2C (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x180004CBC (--1_Lockit@std@@QEAA@XZ.c)
 *     ?_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z @ 0x180004E68 (-_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z.c)
 *     ?_Getgloballocale@locale@std@@CAPEAV_Locimp@12@XZ @ 0x180004EA8 (-_Getgloballocale@locale@std@@CAPEAV_Locimp@12@XZ.c)
 *     _CxxThrowException_0 @ 0x1800222FC (_CxxThrowException_0.c)
 *     ?_Getcat@?$numpunct@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800CAD18 (-_Getcat@-$numpunct@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

struct std::_Facet_base *__fastcall std::use_facet<std::numpunct<wchar_t>>(__int64 *a1)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rdi
  __int64 v4; // rcx
  struct std::_Facet_base *v5; // rbx
  struct std::locale::_Locimp *v6; // rax
  _BYTE pExceptionObject[56]; // [rsp+20h] [rbp-38h] BYREF
  char v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+68h] [rbp+10h] BYREF
  struct std::_Facet_base *v11; // [rsp+70h] [rbp+18h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v10, 0);
  v2 = std::_Facetptr<std::numpunct<wchar_t>>::_Psave;
  v11 = (struct std::_Facet_base *)std::_Facetptr<std::numpunct<wchar_t>>::_Psave;
  v3 = std::numpunct<wchar_t>::id;
  if ( !std::numpunct<wchar_t>::id )
  {
    std::_Lockit::_Lockit((std::_Lockit *)&v9, 0);
    if ( !std::numpunct<wchar_t>::id )
      std::numpunct<wchar_t>::id = ++std::locale::id::_Id_cnt;
    std::_Lockit::~_Lockit((std::_Lockit *)&v9);
    v3 = std::numpunct<wchar_t>::id;
  }
  v4 = *a1;
  if ( v3 >= *(_QWORD *)(*a1 + 24) )
  {
    v5 = 0LL;
  }
  else
  {
    v5 = *(struct std::_Facet_base **)(*(_QWORD *)(v4 + 16) + 8 * v3);
    if ( v5 )
      goto LABEL_18;
  }
  if ( *(_BYTE *)(v4 + 36) )
  {
    v6 = std::locale::_Getgloballocale();
    if ( v3 >= *((_QWORD *)v6 + 3) )
      v5 = 0LL;
    else
      v5 = *(struct std::_Facet_base **)(*((_QWORD *)v6 + 2) + 8 * v3);
  }
  if ( !v5 )
  {
    if ( v2 )
    {
      v5 = (struct std::_Facet_base *)v2;
    }
    else
    {
      if ( std::numpunct<wchar_t>::_Getcat(&v11, a1) == -1 )
      {
        bad_cast::bad_cast((bad_cast *)pExceptionObject, "bad cast");
        throw (bad_cast *)pExceptionObject;
      }
      v5 = v11;
      std::_Facetptr<std::numpunct<wchar_t>>::_Psave = (__int64)v11;
      (*(void (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v11 + 8LL))(v11);
      std::_Facet_Register(v5);
    }
  }
LABEL_18:
  std::_Lockit::~_Lockit((std::_Lockit *)&v10);
  return v5;
}
