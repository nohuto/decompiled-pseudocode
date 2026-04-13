/*
 * XREFs of ?_Makexloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x18001E920
 * Callers:
 *     ?_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x180009558 (-_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004724 (--2@YAPEAX_K@Z.c)
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800052BC (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x18000534C (--1_Lockit@std@@QEAA@XZ.c)
 *     ?_Locimp_Addfac@_Locimp@locale@std@@CAXPEAV123@PEAVfacet@23@_K@Z @ 0x180009348 (-_Locimp_Addfac@_Locimp@locale@std@@CAXPEAV123@PEAVfacet@23@_K@Z.c)
 *     ??$use_facet@V?$collate@D@std@@@std@@YAAEBV?$collate@D@0@AEBVlocale@0@@Z @ 0x18001C394 (--$use_facet@V-$collate@D@std@@@std@@YAAEBV-$collate@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$messages@D@std@@@std@@YAAEBV?$messages@D@0@AEBVlocale@0@@Z @ 0x18001C4EC (--$use_facet@V-$messages@D@std@@@std@@YAAEBV-$messages@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@@std@@YAAEBV?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@0@AEBVlocale@0@@Z @ 0x18001C644 (--$use_facet@V-$money_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@@std@@YAAEB.c)
 *     ??$use_facet@V?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@@std@@YAAEBV?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@0@AEBVlocale@0@@Z @ 0x18001C79C (--$use_facet@V-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@@std@@YAAEB.c)
 *     ??$use_facet@V?$moneypunct@D$00@std@@@std@@YAAEBV?$moneypunct@D$00@0@AEBVlocale@0@@Z @ 0x18001C8F4 (--$use_facet@V-$moneypunct@D$00@std@@@std@@YAAEBV-$moneypunct@D$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@D$0A@@std@@@std@@YAAEBV?$moneypunct@D$0A@@0@AEBVlocale@0@@Z @ 0x18001CA4C (--$use_facet@V-$moneypunct@D$0A@@std@@@std@@YAAEBV-$moneypunct@D$0A@@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@@std@@YAAEBV?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@0@AEBVlocale@0@@Z @ 0x18001CBA4 (--$use_facet@V-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@@std@@YAAEBV.c)
 *     ??$use_facet@V?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@@std@@YAAEBV?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@0@AEBVlocale@0@@Z @ 0x18001CCFC (--$use_facet@V-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@@std@@YAAEBV.c)
 *     ?_Getcat@?$collate@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x18001CFE0 (-_Getcat@-$collate@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Init@?$_Mpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x18001E72C (-_Init@-$_Mpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     ?_Init@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IEAAXAEBV_Locinfo@2@@Z @ 0x18001E8DC (-_Init@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@IEAAXAEBV_Locinfo@2.c)
 *     _Getcoll @ 0x180021A70 (_Getcoll.c)
 */

// Hidden C++ exception states: #wind=22
void __fastcall std::locale::_Locimp::_Makexloc(
        const struct std::_Locinfo *a1,
        int a2,
        void **a3,
        const struct std::locale *a4)
{
  char v6; // r12
  unsigned __int64 v8; // rdi
  _Collvec *v9; // rax
  struct std::locale::facet *v10; // rbx
  unsigned __int64 v11; // r8
  struct std::locale::facet *v12; // rdx
  unsigned __int64 v13; // rbx
  struct std::_Facet_base *v14; // rax
  unsigned __int64 v15; // rbx
  struct std::_Facet_base *v16; // rax
  unsigned __int64 v17; // rbx
  struct std::_Facet_base *v18; // rax
  unsigned __int64 v19; // rbx
  struct std::_Facet_base *v20; // rax
  unsigned __int64 v21; // rbx
  struct std::_Facet_base *v22; // rax
  struct std::_Facet_base *v23; // rdi
  unsigned __int64 v24; // rdi
  struct std::locale::facet *v25; // rax
  struct std::locale::facet *v26; // rbx
  unsigned __int64 v27; // r8
  struct std::locale::facet *v28; // rdx
  unsigned __int64 v29; // rbx
  struct std::_Facet_base *v30; // rax
  unsigned __int64 v31; // rdi
  struct std::locale::facet *v32; // rax
  struct std::locale::facet *v33; // rbx
  unsigned __int64 v34; // rdi
  struct std::locale::facet *v35; // rax
  struct std::locale::facet *v36; // rbx
  unsigned __int64 v37; // r8
  struct std::locale::facet *v38; // rdx
  unsigned __int64 v39; // rbx
  struct std::_Facet_base *v40; // rax
  _Collvec v41; // [rsp+28h] [rbp-18h] BYREF
  char v42; // [rsp+78h] [rbp+38h] BYREF

  v6 = a2;
  if ( ((1 << std::collate<char>::_Getcat(0LL, 0LL) >> 1) & a2) != 0 )
  {
    if ( a4 )
    {
      v13 = std::collate<char>::id;
      if ( !std::collate<char>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v42, 0);
        if ( !std::collate<char>::id )
          std::collate<char>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v42);
        v13 = std::collate<char>::id;
      }
      v14 = std::use_facet<std::collate<char>>((__int64 *)a4);
      v11 = v13;
      v12 = v14;
    }
    else
    {
      v8 = std::collate<char>::id;
      if ( !std::collate<char>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v42, 0);
        if ( !std::collate<char>::id )
          std::collate<char>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v42);
        v8 = std::collate<char>::id;
      }
      v9 = (_Collvec *)operator new(0x20uLL);
      v10 = (struct std::locale::facet *)v9;
      *(_QWORD *)&v41._Page = v9;
      if ( v9 )
      {
        LODWORD(v9->_LocaleName) = 0;
        *(_QWORD *)&v9->_Page = &std::collate<char>::`vftable';
        v9[1] = *Getcoll(&v41);
      }
      else
      {
        v10 = 0LL;
      }
      v11 = v8;
      v12 = v10;
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v12, v11);
  }
  if ( (v6 & 0x20) != 0 )
  {
    v15 = std::messages<char>::id;
    if ( a4 )
    {
      if ( !std::messages<char>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v42, 0);
        if ( !std::messages<char>::id )
          std::messages<char>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v42);
        v15 = std::messages<char>::id;
      }
      v16 = std::use_facet<std::messages<char>>((__int64 *)a4);
    }
    else
    {
      if ( !std::messages<char>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v42, 0);
        if ( !std::messages<char>::id )
          std::messages<char>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v42);
        v15 = std::messages<char>::id;
      }
      v16 = (struct std::_Facet_base *)operator new(0x10uLL);
      *(_QWORD *)&v41._Page = v16;
      if ( v16 )
      {
        *((_DWORD *)v16 + 2) = 0;
        *(_QWORD *)v16 = &std::messages<char>::`vftable';
      }
      else
      {
        v16 = 0LL;
      }
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v16, v15);
  }
  if ( (v6 & 4) != 0 )
  {
    v17 = std::money_get<char,std::istreambuf_iterator<char>>::id;
    if ( a4 )
    {
      if ( !std::money_get<char,std::istreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v42, 0);
        if ( !std::money_get<char,std::istreambuf_iterator<char>>::id )
          std::money_get<char,std::istreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v42);
        v17 = std::money_get<char,std::istreambuf_iterator<char>>::id;
      }
      v18 = std::use_facet<std::money_get<char,std::istreambuf_iterator<char>>>((__int64 *)a4);
    }
    else
    {
      if ( !std::money_get<char,std::istreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v42, 0);
        if ( !std::money_get<char,std::istreambuf_iterator<char>>::id )
          std::money_get<char,std::istreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v42);
        v17 = std::money_get<char,std::istreambuf_iterator<char>>::id;
      }
      v18 = (struct std::_Facet_base *)operator new(0x10uLL);
      *(_QWORD *)&v41._Page = v18;
      if ( v18 )
      {
        *((_DWORD *)v18 + 2) = 0;
        *(_QWORD *)v18 = &std::money_get<char,std::istreambuf_iterator<char>>::`vftable';
      }
      else
      {
        v18 = 0LL;
      }
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v18, v17);
    v19 = std::money_put<char,std::ostreambuf_iterator<char>>::id;
    if ( a4 )
    {
      if ( !std::money_put<char,std::ostreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v42, 0);
        if ( !std::money_put<char,std::ostreambuf_iterator<char>>::id )
          std::money_put<char,std::ostreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v42);
        v19 = std::money_put<char,std::ostreambuf_iterator<char>>::id;
      }
      v20 = std::use_facet<std::money_put<char,std::ostreambuf_iterator<char>>>((__int64 *)a4);
    }
    else
    {
      if ( !std::money_put<char,std::ostreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v42, 0);
        if ( !std::money_put<char,std::ostreambuf_iterator<char>>::id )
          std::money_put<char,std::ostreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v42);
        v19 = std::money_put<char,std::ostreambuf_iterator<char>>::id;
      }
      v20 = (struct std::_Facet_base *)operator new(0x10uLL);
      *(_QWORD *)&v41._Page = v20;
      if ( v20 )
      {
        *((_DWORD *)v20 + 2) = 0;
        *(_QWORD *)v20 = &std::money_put<char,std::ostreambuf_iterator<char>>::`vftable';
      }
      else
      {
        v20 = 0LL;
      }
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v20, v19);
    v21 = std::moneypunct<char,0>::id;
    if ( a4 )
    {
      if ( !std::moneypunct<char,0>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v42, 0);
        if ( !std::moneypunct<char,0>::id )
          std::moneypunct<char,0>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v42);
        v21 = std::moneypunct<char,0>::id;
      }
      v23 = std::use_facet<std::moneypunct<char,0>>((__int64 *)a4);
    }
    else
    {
      if ( !std::moneypunct<char,0>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v42, 0);
        if ( !std::moneypunct<char,0>::id )
          std::moneypunct<char,0>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v42);
        v21 = std::moneypunct<char,0>::id;
      }
      v22 = (struct std::_Facet_base *)operator new(0x78uLL);
      v23 = v22;
      *(_QWORD *)&v41._Page = v22;
      if ( v22 )
      {
        *((_DWORD *)v22 + 2) = 0;
        *(_QWORD *)v22 = &std::moneypunct<char,1>::`vftable';
        *((_BYTE *)v22 + 68) = 0;
        std::_Mpunct<char>::_Init((__int64)v22, (__int64)a1, 0);
        *(_QWORD *)v23 = &std::moneypunct<char,1>::`vftable';
      }
      else
      {
        v23 = 0LL;
      }
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v23, v21);
    if ( a4 )
    {
      v29 = std::moneypunct<char,1>::id;
      if ( !std::moneypunct<char,1>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v42, 0);
        if ( !std::moneypunct<char,1>::id )
          std::moneypunct<char,1>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v42);
        v29 = std::moneypunct<char,1>::id;
      }
      v30 = std::use_facet<std::moneypunct<char,1>>((__int64 *)a4);
      v27 = v29;
      v28 = v30;
    }
    else
    {
      v24 = std::moneypunct<char,1>::id;
      if ( !std::moneypunct<char,1>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v42, 0);
        if ( !std::moneypunct<char,1>::id )
          std::moneypunct<char,1>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v42);
        v24 = std::moneypunct<char,1>::id;
      }
      v25 = (struct std::locale::facet *)operator new(0x78uLL);
      v26 = v25;
      *(_QWORD *)&v41._Page = v25;
      if ( v25 )
      {
        *((_DWORD *)v25 + 2) = 0;
        *(_QWORD *)v25 = &std::moneypunct<char,1>::`vftable';
        *((_BYTE *)v25 + 68) = 1;
        std::_Mpunct<char>::_Init((__int64)v25, (__int64)a1, 0);
        *(_QWORD *)v26 = &std::moneypunct<char,1>::`vftable';
      }
      else
      {
        v26 = 0LL;
      }
      v27 = v24;
      v28 = v26;
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v28, v27);
  }
  if ( (v6 & 0x10) != 0 )
  {
    v31 = std::time_get<char,std::istreambuf_iterator<char>>::id;
    if ( a4 )
    {
      if ( !std::time_get<char,std::istreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v42, 0);
        if ( !std::time_get<char,std::istreambuf_iterator<char>>::id )
          std::time_get<char,std::istreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v42);
        v31 = std::time_get<char,std::istreambuf_iterator<char>>::id;
      }
      v33 = std::use_facet<std::time_get<char,std::istreambuf_iterator<char>>>((__int64 *)a4);
    }
    else
    {
      if ( !std::time_get<char,std::istreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v42, 0);
        if ( !std::time_get<char,std::istreambuf_iterator<char>>::id )
          std::time_get<char,std::istreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v42);
        v31 = std::time_get<char,std::istreambuf_iterator<char>>::id;
      }
      v32 = (struct std::locale::facet *)operator new(0x60uLL);
      v33 = v32;
      *(_QWORD *)&v41._Page = v32;
      if ( v32 )
      {
        *((_DWORD *)v32 + 2) = 0;
        *(_QWORD *)v32 = &std::time_get<char,std::istreambuf_iterator<char>>::`vftable';
        std::time_get<char,std::istreambuf_iterator<char>>::_Init((__int64)v32, (__int64)a1);
      }
      else
      {
        v33 = 0LL;
      }
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v33, v31);
    if ( a4 )
    {
      v39 = std::time_put<char,std::ostreambuf_iterator<char>>::id;
      if ( !std::time_put<char,std::ostreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v42, 0);
        if ( !std::time_put<char,std::ostreambuf_iterator<char>>::id )
          std::time_put<char,std::ostreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v42);
        v39 = std::time_put<char,std::ostreambuf_iterator<char>>::id;
      }
      v40 = std::use_facet<std::time_put<char,std::ostreambuf_iterator<char>>>((__int64 *)a4);
      v37 = v39;
      v38 = v40;
    }
    else
    {
      v34 = std::time_put<char,std::ostreambuf_iterator<char>>::id;
      if ( !std::time_put<char,std::ostreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v42, 0);
        if ( !std::time_put<char,std::ostreambuf_iterator<char>>::id )
          std::time_put<char,std::ostreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v42);
        v34 = std::time_put<char,std::ostreambuf_iterator<char>>::id;
      }
      v35 = (struct std::locale::facet *)operator new(0x18uLL);
      v36 = v35;
      *(_QWORD *)&v41._Page = v35;
      if ( v35 )
      {
        *((_DWORD *)v35 + 2) = 0;
        *(_QWORD *)v35 = &std::time_put<char,std::ostreambuf_iterator<char>>::`vftable';
        *((_QWORD *)v35 + 2) = 0LL;
        *((_QWORD *)v35 + 2) = _Gettnames();
        free(0LL);
      }
      else
      {
        v36 = 0LL;
      }
      v37 = v34;
      v38 = v36;
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v38, v37);
  }
}
