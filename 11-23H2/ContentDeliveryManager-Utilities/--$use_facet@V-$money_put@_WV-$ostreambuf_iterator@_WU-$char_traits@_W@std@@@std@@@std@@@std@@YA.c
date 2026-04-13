/*
 * XREFs of ??$use_facet@V?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@@std@@YAAEBV?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@0@AEBVlocale@0@@Z @ 0x18000F6D0
 * Callers:
 *     ?_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x180015D2C (-_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 * Callees:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800052BC (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x18000534C (--1_Lockit@std@@QEAA@XZ.c)
 *     ?_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z @ 0x1800054F8 (-_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z.c)
 *     ?_Getgloballocale@locale@std@@CAPEAV_Locimp@12@XZ @ 0x180005538 (-_Getgloballocale@locale@std@@CAPEAV_Locimp@12@XZ.c)
 *     ?_Getcat@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800118E4 (-_Getcat@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@SA_KPEAPEBVfa.c)
 *     _CxxThrowException_0 @ 0x180022B0C (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
struct std::_Facet_base *__fastcall std::use_facet<std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>>(
        __int64 *a1)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // r14
  struct std::_Facet_base *v6; // rbx
  struct std::locale::_Locimp *v7; // rax
  _BYTE pExceptionObject[64]; // [rsp+28h] [rbp-40h] BYREF
  char v10; // [rsp+70h] [rbp+8h] BYREF
  char v11; // [rsp+78h] [rbp+10h] BYREF
  struct std::_Facet_base *v12; // [rsp+80h] [rbp+18h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v11, 0);
  v2 = std::_Facetptr<std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>>::_Psave;
  v12 = (struct std::_Facet_base *)std::_Facetptr<std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>>::_Psave;
  v3 = std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::id;
  if ( !std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::id )
  {
    std::_Lockit::_Lockit((std::_Lockit *)&v10, 0);
    if ( !std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::id )
      std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::id = ++std::locale::id::_Id_cnt;
    std::_Lockit::~_Lockit((std::_Lockit *)&v10);
    v3 = std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::id;
  }
  v4 = *a1;
  v5 = 8 * v3;
  if ( v3 >= *(_QWORD *)(*a1 + 24) )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = *(struct std::_Facet_base **)(v5 + *(_QWORD *)(v4 + 16));
    if ( v6 )
      goto LABEL_18;
  }
  if ( *(_BYTE *)(v4 + 36) )
  {
    v7 = std::locale::_Getgloballocale();
    if ( v3 >= *((_QWORD *)v7 + 3) )
      v6 = 0LL;
    else
      v6 = *(struct std::_Facet_base **)(v5 + *((_QWORD *)v7 + 2));
  }
  if ( !v6 )
  {
    if ( v2 )
    {
      v6 = (struct std::_Facet_base *)v2;
    }
    else
    {
      if ( std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Getcat(&v12, a1) == -1 )
      {
        bad_cast::bad_cast((bad_cast *)pExceptionObject, "bad cast");
        throw (bad_cast *)pExceptionObject;
      }
      v6 = v12;
      std::_Facetptr<std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>>::_Psave = (__int64)v12;
      (*(void (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v12 + 8LL))(v12);
      std::_Facet_Register(v6);
    }
  }
LABEL_18:
  std::_Lockit::~_Lockit((std::_Lockit *)&v11);
  return v6;
}
