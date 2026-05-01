/*
 * XREFs of ?GenerateCandidateListForTelemetry@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUISwitchItemFilteredCollection@@@Z @ 0x1802322EC
 * Callers:
 *     ?Show@CSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1804A4A10 (-Show@CSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z @ 0x18022ABBC (-CensorAppIdAnyPath@AppIdCensorUtility@LoggingUtil@@SAPEBGPEBG@Z.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x1803D4330 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1803D4E9C (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??1?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x1803D519C (--1-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 *     ?str@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x1803DA1AC (-str@-$basic_stringbuf@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string@GU-$c.c)
 *     ?ExtractAppId@SwitchItemTelemetry@@YAJPEAUISwitchItem@@PEAPEAG@Z @ 0x1804B4AE4 (-ExtractAppId@SwitchItemTelemetry@@YAJPEAUISwitchItem@@PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall GenerateCandidateListForTelemetry(_QWORD *a1, __int64 *a2)
{
  int v4; // eax
  unsigned int i; // ebx
  __int64 v6; // rax
  int v7; // eax
  unsigned __int16 **v8; // r8
  const unsigned __int16 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  const char *v14; // r9
  _QWORD *result; // rax
  int v16; // [rsp+20h] [rbp-138h]
  LPCWSTR pszPath[2]; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v18[8]; // [rsp+50h] [rbp-108h] BYREF
  _BYTE v19[128]; // [rsp+58h] [rbp-100h] BYREF
  _BYTE v20[128]; // [rsp+D8h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+0h]
  unsigned int v23; // [rsp+170h] [rbp+18h] BYREF
  SwitchItemTelemetry *v24; // [rsp+178h] [rbp+20h] BYREF

  try
  {
    std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>();
    v4 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*a2 + 24))(a2, &v23);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA5,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewhost.cpp",
        (const char *)(unsigned int)v4,
        v16);
    for ( i = 0; i < v23; ++i )
    {
      v6 = *a2;
      v24 = 0LL;
      v7 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, SwitchItemTelemetry **))(v6 + 32))(
             a2,
             i,
             &GUID_c0944116_18f0_4c1c_a1a4_224296b2d4fc,
             &v24);
      if ( v7 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xA9,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewhost.cpp",
          (const char *)(unsigned int)v7,
          v16);
      pszPath[0] = 0LL;
      if ( SwitchItemTelemetry::ExtractAppId(v24, (struct ISwitchItem *)pszPath, v8) >= 0 )
      {
        v9 = LoggingUtil::AppIdCensorUtility::CensorAppIdAnyPath(pszPath[0]);
        v10 = std::operator<<<unsigned short,std::char_traits<unsigned short>>(v18, v9);
        v11 = std::operator<<<unsigned short,std::char_traits<unsigned short>>(v10, L":");
        v12 = (*(__int64 (__fastcall **)(SwitchItemTelemetry *))(*(_QWORD *)v24 + 56LL))(v24);
        v13 = std::basic_ostream<unsigned short>::operator<<(v11, v12);
        std::operator<<<unsigned short,std::char_traits<unsigned short>>(v13, L";");
      }
      wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)pszPath);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v24);
    }
    std::basic_stringbuf<unsigned short>::str(v19, a1);
    std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::~basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(v20);
    std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(v20);
    result = a1;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xB1,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewhost.cpp",
      v14);
    std::wstring::wstring(a1, &LocaleName);
    return a1;
  }
  return result;
}
