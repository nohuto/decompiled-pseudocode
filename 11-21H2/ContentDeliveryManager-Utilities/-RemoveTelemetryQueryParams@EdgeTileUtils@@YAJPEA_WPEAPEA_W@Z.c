/*
 * XREFs of ?RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z @ 0x1800D447C
 * Callers:
 *     ?GetTileIdforNavigationUrl@EdgeTileUtils@@YAJPEB_WPEAPEA_W@Z @ 0x1800D3C24 (-GetTileIdforNavigationUrl@EdgeTileUtils@@YAJPEB_WPEAPEA_W@Z.c)
 * Callees:
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x18000524C (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180066A7C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ??1?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UEAA@XZ @ 0x18006E2BC (--1-$basic_stringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@UEAA@XZ.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800A41C4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800A42B8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@PEB_W@Z @ 0x1800A73AC (--$-6_WU-$char_traits@_W@std@@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std@@@0@AEAV10@PEB.c)
 *     ?str@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@XZ @ 0x1800AF9FC (-str@-$basic_stringbuf@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA-AV-$basic_string@_W.c)
 *     ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z @ 0x1800C28DC (-find@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z.c)
 *     ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@_W@Z @ 0x1800D1EF8 (--$-6_WU-$char_traits@_W@std@@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std@@@0@AEAV10@_W@.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@0@PEB_W_K@Z @ 0x1800D2644 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX.c)
 *     ??0?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@H@Z @ 0x1800D274C (--0-$basic_stringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@H@Z.c)
 *     ?DoesStringPrefixMatch@EdgeTileUtils@@YA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_WI@Z @ 0x1800D34A0 (-DoesStringPrefixMatch@EdgeTileUtils@@YA_NAEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocat.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall EdgeTileUtils::RemoveTelemetryQueryParams(
        EdgeTileUtils *this,
        wchar_t *a2,
        wchar_t **a3,
        const char *a4)
{
  int v6; // edi
  unsigned int v7; // esi
  unsigned __int64 v8; // rax
  char *v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rbx
  char v12; // r12
  __int64 v13; // rax
  __int64 v14; // r14
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rax
  int v17; // r9d
  unsigned __int64 v18; // rbx
  bool DoesStringPrefixMatch; // bl
  bool v20; // r15
  bool v21; // al
  bool v22; // bl
  void **v23; // rdx
  const char *v24; // r9
  char *v25; // rdx
  __int64 result; // rax
  int v27[4]; // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v28; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v29; // [rsp+40h] [rbp-1A8h] BYREF
  _BYTE v30[128]; // [rsp+48h] [rbp-1A0h] BYREF
  _QWORD v31[13]; // [rsp+C8h] [rbp-120h] BYREF
  void *v32[2]; // [rsp+130h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+140h] [rbp-A8h]
  unsigned __int64 v34; // [rsp+148h] [rbp-A0h]
  void *v35[2]; // [rsp+150h] [rbp-98h] BYREF
  unsigned __int64 v36; // [rsp+160h] [rbp-88h]
  unsigned __int64 v37; // [rsp+168h] [rbp-80h]
  void *v38[2]; // [rsp+170h] [rbp-78h] BYREF
  __int64 v39; // [rsp+180h] [rbp-68h]
  unsigned __int64 v40; // [rsp+188h] [rbp-60h]
  void *v41[3]; // [rsp+190h] [rbp-58h] BYREF
  unsigned __int64 v42; // [rsp+1A8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+0h]

  v6 = 0;
  v27[0] = 0;
  *(_QWORD *)a2 = 0LL;
  v7 = -2147024809;
  v8 = -1LL;
  do
    ++v8;
  while ( *((_WORD *)this + v8) );
  try
  {
    if ( v8 <= 1 || *(_WORD *)this != 63 )
      return v7;
    std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>((__int64)&v28);
    v9 = (char *)this + 2;
    v37 = 7LL;
    v36 = 0LL;
    LOWORD(v35[0]) = 0;
    if ( *((_WORD *)this + 1) )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( *(_WORD *)&v9[2 * v10] );
    }
    else
    {
      v10 = 0LL;
    }
    std::wstring::assign((unsigned __int64 *)v35, v9, v10);
    v11 = 0LL;
    while ( v11 < v36 && !*(_DWORD *)&v30[*(int *)(v28 + 4) - 8] )
    {
      v12 = 1;
      LOWORD(v27[0]) = 38;
      v13 = std::wstring::find((char *)v35, v27, v11, 1uLL);
      v14 = v13;
      if ( v13 == -1 )
        v15 = -1LL;
      else
        v15 = v13 - v11;
      v42 = 7LL;
      v41[2] = 0LL;
      LOWORD(v41[0]) = 0;
      std::wstring::assign(v41, v35, v11, v15);
      v6 |= 1u;
      LOWORD(v27[0]) = 61;
      v16 = std::wstring::find((char *)v41, v27, 0LL, 1uLL);
      v18 = (unsigned int)(v17 + 6);
      v34 = v18;
      v33 = 0LL;
      LOWORD(v32[0]) = 0;
      if ( v16 == -1LL )
      {
        std::wstring::assign(v32, v41, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
      }
      else
      {
        v40 = (unsigned int)(v17 + 6);
        v39 = 0LL;
        LOWORD(v38[0]) = 0;
        std::wstring::assign(v38, v41, 0LL, v16);
        v6 |= 2u;
        if ( v34 >= 8 )
          operator delete(v32[0]);
        v34 = v18;
        v33 = 0LL;
        LOWORD(v32[0]) = 0;
        std::wstring::_Assign_rv(v32, v38);
        if ( v40 >= 8 )
          operator delete(v38[0]);
      }
      DoesStringPrefixMatch = EdgeTileUtils::DoesStringPrefixMatch((const WCHAR *)v32, L"msPartner", 9u);
      v20 = EdgeTileUtils::DoesStringPrefixMatch((const WCHAR *)v32, L"msOnly", 6u);
      v21 = v33 == 5 && EdgeTileUtils::DoesStringPrefixMatch((const WCHAR *)v32, L"msSrc", 5u);
      if ( DoesStringPrefixMatch || v20 || v21 )
        v12 = 0;
      if ( v12 )
      {
        std::wstringbuf::str((__int64)v30, v38);
        v6 |= 4u;
        v22 = v39 == 0;
        if ( v40 >= 8 )
          operator delete(v38[0]);
        if ( !v22 )
          std::operator<<<wchar_t,std::char_traits<wchar_t>>(&v29);
        v23 = v41;
        if ( v42 >= 8 )
          v23 = (void **)v41[0];
        std::operator<<<wchar_t,std::char_traits<wchar_t>>(&v29, v23);
      }
      if ( v14 == -1 )
      {
        if ( v34 >= 8 )
          operator delete(v32[0]);
        v34 = 7LL;
        v33 = 0LL;
        LOWORD(v32[0]) = 0;
        if ( v42 >= 8 )
          operator delete(v41[0]);
        break;
      }
      v11 = v14 + 1;
      if ( v34 >= 8 )
        operator delete(v32[0]);
      v34 = 7LL;
      v33 = 0LL;
      LOWORD(v32[0]) = 0;
      if ( v42 >= 8 )
        operator delete(v41[0]);
    }
    if ( *(_DWORD *)&v30[*(int *)(v28 + 4) - 8] )
    {
      v7 = -2147024882;
      goto LABEL_58;
    }
    std::wstringbuf::str((__int64)v30, v38);
    v25 = (char *)v38;
    if ( v40 >= 8 )
      v25 = (char *)v38[0];
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>>(
      v27,
      v25,
      0xFFFFFFFFFFFFFFFFuLL,
      v24);
    if ( v40 >= 8 )
      operator delete(v38[0]);
    if ( *(_QWORD *)v27 )
    {
      *(_QWORD *)a2 = *(_QWORD *)v27;
LABEL_58:
      if ( v37 >= 8 )
        operator delete(v35[0]);
      v37 = 7LL;
      v36 = 0LL;
      LOWORD(v35[0]) = 0;
      std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::~basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>((__int64)v31);
      v31[0] = &std::ios_base::`vftable';
      std::ios_base::_Ios_base_dtor((struct std::ios_base *)v31);
      return v7;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x66,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\EdgeTileUtils.h",
      (const char *)0x8007000ELL);
    if ( v37 >= 8 )
      operator delete(v35[0]);
    v37 = 7LL;
    v36 = 0LL;
    LOWORD(v35[0]) = 0;
    std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::~basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>((__int64)v31);
    v31[0] = &std::ios_base::`vftable';
    std::ios_base::_Ios_base_dtor((struct std::ios_base *)v31);
    result = 2147942414LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x70,
                           (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\EdgeTileUtils.h",
                           a4);
  }
  return result;
}
