/*
 * XREFs of ?GetFileDescription@StartupNotification@@SA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x180644120
 * Callers:
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x18063FC30 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180090A78 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D9368 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1802CED4A (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?_Parse_extension@filesystem@std@@YA?AV?$basic_string_view@GU?$char_traits@G@std@@@2@V32@@Z @ 0x1802E8AB6 (-_Parse_extension@filesystem@std@@YA-AV-$basic_string_view@GU-$char_traits@G@std@@@2@V32@@Z.c)
 *     ?compare@path@filesystem@std@@QEBAHV?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x18064566C (-compare@path@filesystem@std@@QEBAHV-$basic_string_view@GU-$char_traits@G@std@@@3@@Z.c)
 *     ?extension@path@filesystem@std@@QEBA?AV123@XZ @ 0x1806457FC (-extension@path@filesystem@std@@QEBA-AV123@XZ.c)
 */

// Hidden C++ exception states: #wind=10
_OWORD *__fastcall StartupNotification::GetFileDescription(_OWORD *a1, __int64 a2)
{
  _QWORD *v2; // rsi
  PCWSTR *v4; // rax
  const unsigned __int16 *v5; // r8
  char v6; // bl
  _QWORD *v7; // rax
  std::filesystem *v8; // r8
  _QWORD *v9; // rcx
  char v10; // r14
  HRESULT Instance; // eax
  __int64 (__fastcall **v12)(LPVOID, GUID *, const unsigned __int16 **); // rax
  int v13; // eax
  PCWSTR *v14; // rax
  PCWSTR *v15; // rdx
  int v16; // eax
  void **v17; // rbx
  void **v18; // rax
  const WCHAR *v19; // rcx
  const char *v20; // r9
  LPVOID *v21; // rax
  LPVOID *v22; // r9
  const char *v23; // r9
  int ppv; // [rsp+20h] [rbp-E0h]
  LPVOID v26; // [rsp+30h] [rbp-D0h] BYREF
  const unsigned __int16 *v27[2]; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-B8h] BYREF
  int v29; // [rsp+50h] [rbp-B0h]
  LPVOID v30[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v31; // [rsp+70h] [rbp-90h]
  PCWSTR pszCmdTemplate[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v33; // [rsp+90h] [rbp-70h]
  unsigned __int64 v34; // [rsp+98h] [rbp-68h]
  _QWORD v35[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v36[4]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v37[32]; // [rsp+E0h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  v2 = (_QWORD *)a2;
  pv = a1;
  v29 = 0;
  std::wstring::wstring(pszCmdTemplate, a2);
  v4 = pszCmdTemplate;
  if ( v34 >= 8 )
    v4 = (PCWSTR *)pszCmdTemplate[0];
  v30[0] = v4;
  v30[1] = (LPVOID)v33;
  std::wstring::wstring(v35, v30);
  v6 = 24;
  v7 = v35;
  if ( v35[3] >= 8uLL )
    v7 = (_QWORD *)v35[0];
  v30[0] = v7;
  v30[1] = (LPVOID)v35[2];
  if ( !std::filesystem::_Parse_extension(v27, (__int64)v30, v5)[1] )
    goto LABEL_9;
  v30[0] = (LPVOID)L".lnk";
  v30[1] = (LPVOID)4;
  std::wstring::wstring(v36, v30);
  v29 = 121;
  v8 = (std::filesystem *)std::filesystem::path::extension(v35, v37);
  v6 = 123;
  v9 = v36;
  if ( v36[3] >= 8uLL )
    v9 = (_QWORD *)v36[0];
  v30[0] = v9;
  v30[1] = (LPVOID)v36[2];
  v10 = 1;
  if ( (unsigned int)std::filesystem::path::compare(v8) )
LABEL_9:
    v10 = 0;
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    std::wstring::_Tidy_deallocate((__int64)v37);
  }
  if ( (v6 & 1) != 0 )
    std::wstring::_Tidy_deallocate((__int64)v36);
  if ( v10 )
  {
    v30[0] = 0LL;
    Instance = CoCreateInstance(&CLSID_ShellLink, 0LL, 1u, &GUID_000214f9_0000_0000_c000_000000000046, v30);
    if ( Instance < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5D,
        (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
        (const char *)(unsigned int)Instance,
        ppv);
    v27[0] = 0LL;
    v12 = *(__int64 (__fastcall ***)(LPVOID, GUID *, const unsigned __int16 **))v30[0];
    v27[0] = 0LL;
    v13 = (*v12)(v30[0], &GUID_0000010b_0000_0000_c000_000000000046, v27);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5F,
        (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
        (const char *)(unsigned int)v13,
        ppv);
    if ( v2[3] >= 8uLL )
      v2 = (_QWORD *)*v2;
    if ( (*(int (__fastcall **)(const unsigned __int16 *, _QWORD *, _QWORD))(*(_QWORD *)v27[0] + 40LL))(v27[0], v2, 0LL) < 0 )
    {
      std::wstring::wstring(a1, &LocaleName);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v27);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v30);
      goto LABEL_53;
    }
    if ( v33 < 0x104 )
    {
      std::wstring::append((wchar_t *)pszCmdTemplate, 260 - v33, 0);
    }
    else
    {
      v14 = pszCmdTemplate;
      if ( v34 >= 8 )
        v14 = (PCWSTR *)pszCmdTemplate[0];
      v33 = 260LL;
      *((_WORD *)v14 + 260) = 0;
    }
    v15 = pszCmdTemplate;
    if ( v34 >= 8 )
      v15 = (PCWSTR *)pszCmdTemplate[0];
    v16 = (*(__int64 (__fastcall **)(LPVOID, PCWSTR *, __int64, _QWORD))(*(_QWORD *)v30[0] + 24LL))(
            v30[0],
            v15,
            260LL,
            0LL);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x68,
        (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
        (const char *)(unsigned int)v16,
        4);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v27);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v30);
  }
  v26 = 0LL;
  pv = 0LL;
  v17 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
  v18 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&v26);
  v19 = (const WCHAR *)pszCmdTemplate;
  if ( v34 >= 8 )
    v19 = pszCmdTemplate[0];
  if ( SHEvaluateSystemCommandTemplate(v19, (PWSTR *)v18, 0LL, (PWSTR *)v17) < 0 )
  {
    std::wstring::wstring(a1, &LocaleName);
  }
  else
  {
    v30[0] = 0LL;
    *(_QWORD *)&v31 = 0LL;
    *((_QWORD *)&v31 + 1) = 7LL;
    LODWORD(v27[0]) = 0;
    if ( !(unsigned int)SHGetFileDescriptionW(v26, 0LL, 0LL, 0LL, v27) )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x71,
        (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
        v20);
    if ( LODWORD(v27[0]) > (unsigned __int64)v31 )
    {
      std::wstring::append((wchar_t *)v30, LODWORD(v27[0]) - (_QWORD)v31, 0);
    }
    else
    {
      v21 = v30;
      if ( *((_QWORD *)&v31 + 1) >= 8uLL )
        v21 = (LPVOID *)v30[0];
      *(_QWORD *)&v31 = LODWORD(v27[0]);
      *((_WORD *)v21 + LODWORD(v27[0])) = 0;
    }
    v22 = v30;
    if ( *((_QWORD *)&v31 + 1) >= 8uLL )
      v22 = (LPVOID *)v30[0];
    if ( !(unsigned int)SHGetFileDescriptionW(v26, 0LL, 0LL, v22, v27) )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x73,
        (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
        v23);
    *a1 = *(_OWORD *)v30;
    a1[1] = v31;
    *(_QWORD *)&v31 = 0LL;
    *((_QWORD *)&v31 + 1) = 7LL;
    LOWORD(v30[0]) = 0;
    std::wstring::_Tidy_deallocate((__int64)v30);
  }
  if ( pv )
    CoTaskMemFree(pv);
  if ( v26 )
    CoTaskMemFree(v26);
LABEL_53:
  std::wstring::_Tidy_deallocate((__int64)v35);
  std::wstring::_Tidy_deallocate((__int64)pszCmdTemplate);
  return a1;
}
