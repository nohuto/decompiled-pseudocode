/*
 * XREFs of ?_Makexloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x18001E160
 * Callers:
 *     ?_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x180008E44 (-_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004094 (--2@YAPEAX_K@Z.c)
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x180004C2C (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x180004CBC (--1_Lockit@std@@QEAA@XZ.c)
 *     ?_Locimp_Addfac@_Locimp@locale@std@@CAXPEAV123@PEAVfacet@23@_K@Z @ 0x180008C3C (-_Locimp_Addfac@_Locimp@locale@std@@CAXPEAV123@PEAVfacet@23@_K@Z.c)
 *     ??$use_facet@V?$collate@D@std@@@std@@YAAEBV?$collate@D@0@AEBVlocale@0@@Z @ 0x18001BC34 (--$use_facet@V-$collate@D@std@@@std@@YAAEBV-$collate@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$messages@D@std@@@std@@YAAEBV?$messages@D@0@AEBVlocale@0@@Z @ 0x18001BD80 (--$use_facet@V-$messages@D@std@@@std@@YAAEBV-$messages@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@@std@@YAAEBV?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@0@AEBVlocale@0@@Z @ 0x18001BECC (--$use_facet@V-$money_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@@std@@YAAEB.c)
 *     ??$use_facet@V?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@@std@@YAAEBV?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@0@AEBVlocale@0@@Z @ 0x18001C018 (--$use_facet@V-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@@std@@YAAEB.c)
 *     ??$use_facet@V?$moneypunct@D$00@std@@@std@@YAAEBV?$moneypunct@D$00@0@AEBVlocale@0@@Z @ 0x18001C164 (--$use_facet@V-$moneypunct@D$00@std@@@std@@YAAEBV-$moneypunct@D$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@D$0A@@std@@@std@@YAAEBV?$moneypunct@D$0A@@0@AEBVlocale@0@@Z @ 0x18001C2B0 (--$use_facet@V-$moneypunct@D$0A@@std@@@std@@YAAEBV-$moneypunct@D$0A@@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@@std@@YAAEBV?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@0@AEBVlocale@0@@Z @ 0x18001C3FC (--$use_facet@V-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@@std@@YAAEBV.c)
 *     ??$use_facet@V?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@@std@@YAAEBV?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@0@AEBVlocale@0@@Z @ 0x18001C548 (--$use_facet@V-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@@std@@YAAEBV.c)
 *     ?_Getcat@?$collate@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x18001C820 (-_Getcat@-$collate@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Init@?$_Mpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x18001DF70 (-_Init@-$_Mpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     ?_Init@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IEAAXAEBV_Locinfo@2@@Z @ 0x18001E11C (-_Init@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@IEAAXAEBV_Locinfo@2.c)
 *     _Getcoll @ 0x180021354 (_Getcoll.c)
 */

// Hidden C++ exception states: #wind=22
void __fastcall std::locale::_Locimp::_Makexloc(
        const struct std::_Locinfo *a1,
        int a2,
        void **a3,
        const struct std::locale *a4)
{
  char v6; // r15
  unsigned __int64 v8; // rdi
  struct std::locale::facet *v9; // rax
  struct std::locale::facet *v10; // rbx
  unsigned __int64 v11; // rbx
  struct std::locale::facet *v12; // rax
  unsigned __int64 v13; // rbx
  struct std::_Facet_base *v14; // rax
  unsigned __int64 v15; // rbx
  struct std::locale::facet *v16; // rax
  unsigned __int64 v17; // rbx
  struct std::locale::facet *v18; // rax
  unsigned __int64 v19; // rdi
  _DWORD *v20; // rbx
  unsigned __int64 v21; // rdi
  struct std::locale::facet *v22; // rax
  struct std::locale::facet *v23; // rbx
  unsigned __int64 v24; // r8
  struct std::locale::facet *v25; // rdx
  struct std::locale::facet *v26; // rax
  unsigned __int64 v27; // rbx
  struct std::locale::facet *v28; // rax
  unsigned __int64 v29; // rbx
  struct std::locale::facet *v30; // rax
  unsigned __int64 v31; // rbx
  struct std::_Facet_base *v32; // rax
  unsigned __int64 v33; // rdi
  struct std::locale::facet *v34; // rax
  struct std::locale::facet *v35; // rbx
  unsigned __int64 v36; // rdi
  struct std::locale::facet *v37; // rax
  struct std::locale::facet *v38; // rbx
  unsigned __int64 v39; // r8
  struct std::locale::facet *v40; // rdx
  unsigned __int64 v41; // rbx
  struct std::locale::facet *v42; // rax
  unsigned __int64 v43; // rbx
  struct std::_Facet_base *v44; // rax
  _Collvec v45; // [rsp+28h] [rbp-18h] BYREF
  char v46; // [rsp+78h] [rbp+38h] BYREF

  v6 = a2;
  if ( ((1 << std::collate<char>::_Getcat(0LL, 0LL) >> 1) & a2) != 0 )
  {
    if ( a4 )
    {
      v11 = std::collate<char>::id;
      if ( !std::collate<char>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v46, 0);
        if ( !std::collate<char>::id )
          std::collate<char>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v46);
        v11 = std::collate<char>::id;
      }
      v12 = std::use_facet<std::collate<char>>((__int64 *)a4);
      std::locale::_Locimp::_Locimp_Addfac(a3, v12, v11);
    }
    else
    {
      v8 = std::collate<char>::id;
      if ( !std::collate<char>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v46, 0);
        if ( !std::collate<char>::id )
          std::collate<char>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v46);
        v8 = std::collate<char>::id;
      }
      v9 = (struct std::locale::facet *)operator new(0x20uLL);
      v10 = v9;
      *(_QWORD *)&v45._Page = v9;
      if ( v9 )
      {
        *((_DWORD *)v9 + 2) = 0;
        *(_QWORD *)v9 = &std::collate<char>::`vftable';
        *((_Collvec *)v9 + 1) = *Getcoll(&v45);
      }
      else
      {
        v10 = 0LL;
      }
      std::locale::_Locimp::_Locimp_Addfac(a3, v10, v8);
    }
  }
  if ( (v6 & 0x20) != 0 )
  {
    v13 = std::messages<char>::id;
    if ( a4 )
    {
      if ( !std::messages<char>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v46, 0);
        if ( !std::messages<char>::id )
          std::messages<char>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v46);
        v13 = std::messages<char>::id;
      }
      v14 = std::use_facet<std::messages<char>>((__int64 *)a4);
    }
    else
    {
      if ( !std::messages<char>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v46, 0);
        if ( !std::messages<char>::id )
          std::messages<char>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v46);
        v13 = std::messages<char>::id;
      }
      v14 = (struct std::_Facet_base *)operator new(0x10uLL);
      *(_QWORD *)&v45._Page = v14;
      if ( v14 )
      {
        *((_DWORD *)v14 + 2) = 0;
        *(_QWORD *)v14 = &std::messages<char>::`vftable';
      }
      else
      {
        v14 = 0LL;
      }
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v14, v13);
  }
  if ( (v6 & 4) != 0 )
  {
    v15 = std::money_get<char,std::istreambuf_iterator<char>>::id;
    if ( a4 )
    {
      if ( !std::money_get<char,std::istreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v46, 0);
        if ( !std::money_get<char,std::istreambuf_iterator<char>>::id )
          std::money_get<char,std::istreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v46);
        v15 = std::money_get<char,std::istreambuf_iterator<char>>::id;
      }
      v26 = std::use_facet<std::money_get<char,std::istreambuf_iterator<char>>>((__int64 *)a4);
      std::locale::_Locimp::_Locimp_Addfac(a3, v26, v15);
      v27 = std::money_put<char,std::ostreambuf_iterator<char>>::id;
      if ( !std::money_put<char,std::ostreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v46, 0);
        if ( !std::money_put<char,std::ostreambuf_iterator<char>>::id )
          std::money_put<char,std::ostreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v46);
        v27 = std::money_put<char,std::ostreambuf_iterator<char>>::id;
      }
      v28 = std::use_facet<std::money_put<char,std::ostreambuf_iterator<char>>>((__int64 *)a4);
      std::locale::_Locimp::_Locimp_Addfac(a3, v28, v27);
      v29 = std::moneypunct<char,0>::id;
      if ( !std::moneypunct<char,0>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v46, 0);
        if ( !std::moneypunct<char,0>::id )
          std::moneypunct<char,0>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v46);
        v29 = std::moneypunct<char,0>::id;
      }
      v30 = std::use_facet<std::moneypunct<char,0>>((__int64 *)a4);
      std::locale::_Locimp::_Locimp_Addfac(a3, v30, v29);
      v31 = std::moneypunct<char,1>::id;
      if ( !std::moneypunct<char,1>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v46, 0);
        if ( !std::moneypunct<char,1>::id )
          std::moneypunct<char,1>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v46);
        v31 = std::moneypunct<char,1>::id;
      }
      v32 = std::use_facet<std::moneypunct<char,1>>((__int64 *)a4);
      v24 = v31;
      v25 = v32;
    }
    else
    {
      if ( !std::money_get<char,std::istreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v46, 0);
        if ( !std::money_get<char,std::istreambuf_iterator<char>>::id )
          std::money_get<char,std::istreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v46);
        v15 = std::money_get<char,std::istreambuf_iterator<char>>::id;
      }
      v16 = (struct std::locale::facet *)operator new(0x10uLL);
      *(_QWORD *)&v45._Page = v16;
      if ( v16 )
      {
        *((_DWORD *)v16 + 2) = 0;
        *(_QWORD *)v16 = &std::money_get<char,std::istreambuf_iterator<char>>::`vftable';
      }
      else
      {
        v16 = 0LL;
      }
      std::locale::_Locimp::_Locimp_Addfac(a3, v16, v15);
      v17 = std::money_put<char,std::ostreambuf_iterator<char>>::id;
      if ( !std::money_put<char,std::ostreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v46, 0);
        if ( !std::money_put<char,std::ostreambuf_iterator<char>>::id )
          std::money_put<char,std::ostreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v46);
        v17 = std::money_put<char,std::ostreambuf_iterator<char>>::id;
      }
      v18 = (struct std::locale::facet *)operator new(0x10uLL);
      *(_QWORD *)&v45._Page = v18;
      if ( v18 )
      {
        *((_DWORD *)v18 + 2) = 0;
        *(_QWORD *)v18 = &std::money_put<char,std::ostreambuf_iterator<char>>::`vftable';
      }
      else
      {
        v18 = 0LL;
      }
      std::locale::_Locimp::_Locimp_Addfac(a3, v18, v17);
      v19 = std::moneypunct<char,0>::id;
      if ( !std::moneypunct<char,0>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v46, 0);
        if ( !std::moneypunct<char,0>::id )
          std::moneypunct<char,0>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v46);
        v19 = std::moneypunct<char,0>::id;
      }
      v20 = operator new(0x78uLL);
      *(_QWORD *)&v45._Page = v20;
      if ( v20 )
      {
        v20[2] = 0;
        *(_QWORD *)v20 = &std::moneypunct<char,1>::`vftable';
        *((_BYTE *)v20 + 68) = 0;
        std::_Mpunct<char>::_Init((__int64)v20, (__int64)a1, 0);
        *(_QWORD *)v20 = &std::moneypunct<char,1>::`vftable';
      }
      else
      {
        v20 = 0LL;
      }
      std::locale::_Locimp::_Locimp_Addfac(a3, (struct std::locale::facet *)v20, v19);
      v21 = std::moneypunct<char,1>::id;
      if ( !std::moneypunct<char,1>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v46, 0);
        if ( !std::moneypunct<char,1>::id )
          std::moneypunct<char,1>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v46);
        v21 = std::moneypunct<char,1>::id;
      }
      v22 = (struct std::locale::facet *)operator new(0x78uLL);
      v23 = v22;
      *(_QWORD *)&v45._Page = v22;
      if ( v22 )
      {
        *((_DWORD *)v22 + 2) = 0;
        *(_QWORD *)v22 = &std::moneypunct<char,1>::`vftable';
        *((_BYTE *)v22 + 68) = 1;
        std::_Mpunct<char>::_Init((__int64)v22, (__int64)a1, 0);
        *(_QWORD *)v23 = &std::moneypunct<char,1>::`vftable';
      }
      else
      {
        v23 = 0LL;
      }
      v24 = v21;
      v25 = v23;
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v25, v24);
  }
  if ( (v6 & 0x10) != 0 )
  {
    if ( a4 )
    {
      v41 = std::time_get<char,std::istreambuf_iterator<char>>::id;
      if ( !std::time_get<char,std::istreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v46, 0);
        if ( !std::time_get<char,std::istreambuf_iterator<char>>::id )
          std::time_get<char,std::istreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v46);
        v41 = std::time_get<char,std::istreambuf_iterator<char>>::id;
      }
      v42 = std::use_facet<std::time_get<char,std::istreambuf_iterator<char>>>((__int64 *)a4);
      std::locale::_Locimp::_Locimp_Addfac(a3, v42, v41);
      v43 = std::time_put<char,std::ostreambuf_iterator<char>>::id;
      if ( !std::time_put<char,std::ostreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v46, 0);
        if ( !std::time_put<char,std::ostreambuf_iterator<char>>::id )
          std::time_put<char,std::ostreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v46);
        v43 = std::time_put<char,std::ostreambuf_iterator<char>>::id;
      }
      v44 = std::use_facet<std::time_put<char,std::ostreambuf_iterator<char>>>((__int64 *)a4);
      v39 = v43;
      v40 = v44;
    }
    else
    {
      v33 = std::time_get<char,std::istreambuf_iterator<char>>::id;
      if ( !std::time_get<char,std::istreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v46, 0);
        if ( !std::time_get<char,std::istreambuf_iterator<char>>::id )
          std::time_get<char,std::istreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v46);
        v33 = std::time_get<char,std::istreambuf_iterator<char>>::id;
      }
      v34 = (struct std::locale::facet *)operator new(0x60uLL);
      v35 = v34;
      *(_QWORD *)&v45._Page = v34;
      if ( v34 )
      {
        *((_DWORD *)v34 + 2) = 0;
        *(_QWORD *)v34 = &std::time_get<char,std::istreambuf_iterator<char>>::`vftable';
        std::time_get<char,std::istreambuf_iterator<char>>::_Init((__int64)v34, (__int64)a1);
      }
      else
      {
        v35 = 0LL;
      }
      std::locale::_Locimp::_Locimp_Addfac(a3, v35, v33);
      v36 = std::time_put<char,std::ostreambuf_iterator<char>>::id;
      if ( !std::time_put<char,std::ostreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v46, 0);
        if ( !std::time_put<char,std::ostreambuf_iterator<char>>::id )
          std::time_put<char,std::ostreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v46);
        v36 = std::time_put<char,std::ostreambuf_iterator<char>>::id;
      }
      v37 = (struct std::locale::facet *)operator new(0x18uLL);
      v38 = v37;
      *(_QWORD *)&v45._Page = v37;
      if ( v37 )
      {
        *((_DWORD *)v37 + 2) = 0;
        *(_QWORD *)v37 = &std::time_put<char,std::ostreambuf_iterator<char>>::`vftable';
        *((_QWORD *)v37 + 2) = 0LL;
        *((_QWORD *)v37 + 2) = _Gettnames();
        free(0LL);
      }
      else
      {
        v38 = 0LL;
      }
      v39 = v36;
      v40 = v38;
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v40, v39);
  }
}
