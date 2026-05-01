/*
 * XREFs of ?GetJavaOption@@YA?AW4JavaOption@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV23@@Z @ 0x180628C94
 * Callers:
 *     ?TryExtractJavaMainClassNameFromCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@Z @ 0x180629120 (-TryExtractJavaMainClassNameFromCommandLine@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801C8E9C (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _Init_thread_footer @ 0x1801C9108 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801C9170 (_Init_thread_header.c)
 *     ??$_Lower_bound_duplicate@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@2@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18040C294 (--$_Lower_bound_duplicate@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree.c)
 *     ??$_Traits_find_ch@U?$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z @ 0x18045722C (--$_Traits_find_ch@U-$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z.c)
 *     ??$_Find_lower_bound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180628954 (--$_Find_lower_bound@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_ea_180628954.c)
 *     ??0?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@1@@Z @ 0x1806289CC (--0-$map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@W4JavaOption@@U-$less@V-$.c)
 */

__int64 __fastcall GetJavaOption(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  bool v8; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r8
  void *v14; // rdx
  const WCHAR *v15; // rcx
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __m128i v20; // [rsp+30h] [rbp-D0h] BYREF
  __m128i v21; // [rsp+40h] [rbp-C0h]
  LPCWCH lpString1[2]; // [rsp+50h] [rbp-B0h] BYREF
  __m128i si128; // [rsp+60h] [rbp-A0h]
  _QWORD v24[4]; // [rsp+70h] [rbp-90h] BYREF
  int v25; // [rsp+90h] [rbp-70h]
  __int64 v26[4]; // [rsp+98h] [rbp-68h] BYREF
  int v27; // [rsp+B8h] [rbp-48h]
  __int64 v28[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v29; // [rsp+E0h] [rbp-20h]
  __int64 v30[4]; // [rsp+E8h] [rbp-18h] BYREF
  int v31; // [rsp+108h] [rbp+8h]
  __int64 v32[4]; // [rsp+110h] [rbp+10h] BYREF
  int v33; // [rsp+130h] [rbp+30h]
  __int64 v34[4]; // [rsp+138h] [rbp+38h] BYREF
  int v35; // [rsp+158h] [rbp+58h]
  __int64 v36[4]; // [rsp+160h] [rbp+60h] BYREF
  int v37; // [rsp+180h] [rbp+80h]
  __int64 v38[4]; // [rsp+188h] [rbp+88h] BYREF
  int v39; // [rsp+1A8h] [rbp+A8h]
  __int64 v40[4]; // [rsp+1B0h] [rbp+B0h] BYREF
  int v41; // [rsp+1D0h] [rbp+D0h]
  __int64 v42[4]; // [rsp+1D8h] [rbp+D8h] BYREF
  int v43; // [rsp+1F8h] [rbp+F8h]
  __int64 v44[4]; // [rsp+200h] [rbp+100h] BYREF
  int v45; // [rsp+220h] [rbp+120h]
  __int64 v46[4]; // [rsp+228h] [rbp+128h] BYREF
  int v47; // [rsp+248h] [rbp+148h]
  __int64 v48[4]; // [rsp+250h] [rbp+150h] BYREF
  int v49; // [rsp+270h] [rbp+170h]
  __int64 v50[4]; // [rsp+278h] [rbp+178h] BYREF
  int v51; // [rsp+298h] [rbp+198h]
  __int64 v52[4]; // [rsp+2A0h] [rbp+1A0h] BYREF
  int v53; // [rsp+2C0h] [rbp+1C0h]
  __int64 v54[4]; // [rsp+2C8h] [rbp+1C8h] BYREF
  int v55; // [rsp+2E8h] [rbp+1E8h]
  __int64 v56[4]; // [rsp+2F0h] [rbp+1F0h] BYREF
  int v57; // [rsp+310h] [rbp+210h]
  __int64 v58[4]; // [rsp+318h] [rbp+218h] BYREF
  int v59; // [rsp+338h] [rbp+238h]
  __int64 v60[4]; // [rsp+340h] [rbp+240h] BYREF
  int v61; // [rsp+360h] [rbp+260h]
  char v62; // [rsp+368h] [rbp+268h] BYREF

  v4 = (unsigned int)tls_index;
  v5 = -1LL;
  if ( dword_180992A60 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_180992A60);
    if ( dword_180992A60 == -1 )
    {
      std::wstring::wstring(v24, L"-classpath");
      v25 = 1;
      std::wstring::wstring(v26, L"--classpath");
      v27 = 1;
      std::wstring::wstring(v28, L"-cp");
      v29 = 1;
      std::wstring::wstring(v30, L"-p");
      v31 = 1;
      std::wstring::wstring(v32, L"-Xmn");
      v33 = 1;
      std::wstring::wstring(v34, L"-Xms");
      v35 = 1;
      std::wstring::wstring(v36, L"-Xss");
      v37 = 1;
      std::wstring::wstring(v38, L"--add-modules");
      v39 = 1;
      std::wstring::wstring(v40, L"--module-path");
      v41 = 1;
      std::wstring::wstring(v42, L"--add-reads");
      v43 = 1;
      std::wstring::wstring(v44, L"--add-exports");
      v45 = 1;
      std::wstring::wstring(v46, L"--add-opens");
      v47 = 1;
      std::wstring::wstring(v48, L"--limit-modules");
      v49 = 1;
      std::wstring::wstring(v50, L"--patch-module");
      v51 = 1;
      std::wstring::wstring(v52, L"--upgrade-module-path");
      v53 = 1;
      std::wstring::wstring(v54, L"--source");
      v55 = 1;
      std::wstring::wstring(v56, L"-jar");
      v57 = 2;
      std::wstring::wstring(v58, L"-m");
      v59 = 2;
      std::wstring::wstring(v60, L"--module");
      v61 = 2;
      v20.m128i_i64[0] = (__int64)v24;
      v20.m128i_i64[1] = (__int64)&v62;
      std::map<std::wstring,enum JavaOption>::map<std::wstring,enum JavaOption>(v6, &v20);
      `eh vector destructor iterator'(
        (char *)v24,
        40LL,
        19LL,
        (void (*)(void *))wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>);
      atexit(GetJavaOption_::_2_::_dynamic_atexit_destructor_for__javaOptions__);
      Init_thread_footer(&dword_180992A60);
    }
  }
  std::_Tree<std::_Tmap_traits<std::wstring,enum JavaOption,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,enum JavaOption>>,0>>::_Find_lower_bound<std::wstring>(
    v4,
    (__int64)&v20,
    (char *)a1);
  v8 = std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<Win32AppInfo>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>,0>>::_Lower_bound_duplicate<std::wstring>(
         v7,
         v21.m128i_i64[0],
         (char *)a1);
  v9 = qword_18098FDF8;
  if ( v8 )
    v9 = v21.m128i_i64[0];
  if ( v9 != qword_18098FDF8 )
    return *(unsigned int *)(v9 + 64);
  v10 = a1;
  if ( *(_QWORD *)(a1 + 24) >= 8uLL )
    v10 = *(_QWORD *)a1;
  v11 = std::_Traits_find_ch<std::char_traits<unsigned short>>(v10, *(_QWORD *)(a1 + 16), 0LL, 61);
  v12 = v11;
  if ( v11 == -1LL )
    return 0LL;
  lpString1[0] = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v13 = v11;
  if ( *(_QWORD *)(a1 + 16) < v11 )
    v13 = *(_QWORD *)(a1 + 16);
  v14 = (void *)a1;
  if ( *(_QWORD *)(a1 + 24) >= 8uLL )
    v14 = *(void **)a1;
  std::wstring::assign((char *)lpString1, v14, v13);
  v15 = (const WCHAR *)lpString1;
  if ( si128.m128i_i64[1] >= 8uLL )
    v15 = lpString1[0];
  if ( CompareStringOrdinal(v15, -1, L"--module", -1, 1) != 2 )
  {
    std::wstring::_Tidy_deallocate((__int64)lpString1);
    return 0LL;
  }
  v16 = v12 + 1;
  v17 = *(_QWORD *)(a1 + 16);
  if ( v16 < v17 )
  {
    v20.m128i_i64[0] = 0LL;
    v21 = _mm_load_si128((const __m128i *)&_xmm);
    v18 = v17 - v16;
    if ( v18 != -1LL )
      v5 = v18;
    if ( *(_QWORD *)(a1 + 24) >= 8uLL )
      a1 = *(_QWORD *)a1;
    std::wstring::assign(v20.m128i_i8, (void *)(a1 + 2 * v16), v5);
    if ( (__m128i *)a2 != &v20 )
    {
      std::wstring::_Tidy_deallocate(a2);
      *(__m128i *)a2 = v20;
      *(__m128i *)(a2 + 16) = v21;
      v21 = _mm_load_si128((const __m128i *)&_xmm);
      v20.m128i_i16[0] = 0;
    }
    std::wstring::_Tidy_deallocate((__int64)&v20);
  }
  std::wstring::_Tidy_deallocate((__int64)lpString1);
  return 3LL;
}
