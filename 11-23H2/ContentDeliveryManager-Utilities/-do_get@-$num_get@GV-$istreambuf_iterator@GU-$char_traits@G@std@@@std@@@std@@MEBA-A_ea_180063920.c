/*
 * XREFs of ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x180063920
 * Callers:
 *     <none>
 * Callees:
 *     _Stoulx @ 0x180004E40 (_Stoulx.c)
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$_Getloctxt@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@0@0_KPEBG@Z @ 0x18004F6B8 (--$_Getloctxt@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 *     ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x1800500B8 (--$use_facet@V-$numpunct@G@std@@@std@@YAAEBV-$numpunct@G@0@AEBVlocale@0@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x180051908 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@_KG@Z.c)
 *     ??1locale@std@@QEAA@XZ @ 0x18005372C (--1locale@std@@QEAA@XZ.c)
 *     ?_Getifld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1HAEBVlocale@2@@Z @ 0x1800615DC (-_Getifld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x180062764 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180062924 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x180062A0C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x180063EF4 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?falsename@?$numpunct@G@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x1800643F4 (-falsename@-$numpunct@G@std@@QEBA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@2@XZ.c)
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x1800648C4 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ?truename@?$numpunct@_W@std@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@XZ @ 0x1800653D0 (-truename@-$numpunct@_W@std@@QEBA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@2.c)
 */

// Hidden C++ exception states: #wind=4
_OWORD *__fastcall std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::do_get(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        bool *a7)
{
  int v10; // edi
  std::locale *v11; // rax
  const struct std::locale::facet *v12; // rbx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int16 *v15; // r9
  std::locale *v16; // rax
  unsigned int v17; // eax
  unsigned int v18; // ebx
  int v20; // [rsp+30h] [rbp-91h] BYREF
  int v21[2]; // [rsp+38h] [rbp-89h]
  _BYTE v22[8]; // [rsp+40h] [rbp-81h] BYREF
  char *v23; // [rsp+48h] [rbp-79h] BYREF
  _QWORD v24[4]; // [rsp+50h] [rbp-71h] BYREF
  _QWORD v25[4]; // [rsp+70h] [rbp-51h] BYREF
  char v26[32]; // [rsp+90h] [rbp-31h] BYREF

  *(_QWORD *)v21 = a1;
  v10 = -1;
  if ( (*(_DWORD *)(a5 + 24) & 0x4000) != 0 )
  {
    v11 = (std::locale *)std::ios_base::getloc(a5, &v20);
    v12 = std::use_facet<std::numpunct<unsigned short>>(v11);
    std::locale::~locale((std::locale *)&v20);
    std::wstring::wstring((__int64)v24, 1LL, 0LL);
    v13 = (_QWORD *)std::numpunct<unsigned short>::falsename(v12, v25);
    std::wstring::append(v24, v13, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    std::wstring::_Tidy(v25, 1, 0LL);
    std::wstring::append(v24, 1uLL, 0);
    v14 = (_QWORD *)std::numpunct<wchar_t>::truename(v12, v25);
    std::wstring::append(v24, v14, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    std::wstring::_Tidy(v25, 1, 0LL);
    v15 = (__int16 *)v24;
    if ( v24[3] >= 8uLL )
      v15 = (__int16 *)v24[0];
    v10 = std::_Getloctxt<unsigned short,std::istreambuf_iterator<unsigned short>>((__int64)a3, a4, 2uLL, v15);
    std::wstring::_Tidy(v24, 1, 0LL);
  }
  else
  {
    v20 = 0;
    v16 = (std::locale *)std::ios_base::getloc(a5, v22);
    v17 = std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getifld(
            *(__int64 *)v21,
            v26,
            (__int64)a3,
            a4,
            *(_DWORD *)(a5 + 24),
            v16);
    v18 = Stoulx(v26, &v23, v17, &v20);
    std::locale::~locale((std::locale *)v22);
    if ( v23 != v26 && !v20 && v18 <= 1 )
      v10 = v18;
  }
  if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
    *a6 |= 1u;
  if ( v10 >= 0 )
    *a7 = v10 != 0;
  else
    *a6 |= 2u;
  *a2 = *a3;
  return a2;
}
