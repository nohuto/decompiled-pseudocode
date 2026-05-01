/*
 * XREFs of ?GetComponents@ImmersiveShellComponentsConfiguration@@CA?AV?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@PEAUHKEY__@@PEBG1@Z @ 0x1803B040C
 * Callers:
 *     ??0ImmersiveShellComponentsConfiguration@@QEAA@PEAUHKEY__@@PEBG@Z @ 0x1803AF970 (--0ImmersiveShellComponentsConfiguration@@QEAA@PEAUHKEY__@@PEBG@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18008EA60 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@PEBG$$QEAV_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@Z @ 0x1803AEFE4 (--$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@PEBG$$QEAV_lambda_57c.c)
 *     ??$ForEachValueName@V_lambda_10825b8ae890a1dc19d83ed8e1513741_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_10825b8ae890a1dc19d83ed8e1513741_@@@Z @ 0x1803AF048 (--$ForEachValueName@V_lambda_10825b8ae890a1dc19d83ed8e1513741_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_1.c)
 *     ??$str_concat@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BA@$$CBGAEAPEBG@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BA@$$CBG0@Z @ 0x1803AF58C (--$str_concat@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBGAEAY0BA@$$CBG.c)
 *     ??$str_concat@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BF@$$CBGAEAPEBG@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBGAEAY0BF@$$CBG0@Z @ 0x1803AF660 (--$str_concat@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBGAEAY0BF@$$CBG.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ImmersiveShellComponentsConfiguration::GetComponents(
        __int64 a1,
        HKEY a2,
        const wchar_t *a3,
        const wchar_t *a4)
{
  const WCHAR *v6; // rdx
  __int64 v7; // r8
  const WCHAR *v8; // rdx
  HKEY phkResult; // [rsp+20h] [rbp-59h] BYREF
  int v11; // [rsp+28h] [rbp-51h]
  const wchar_t *v12; // [rsp+30h] [rbp-49h] BYREF
  const wchar_t *v13[2]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v14[4]; // [rsp+48h] [rbp-31h] BYREF
  __int128 v15; // [rsp+68h] [rbp-11h] BYREF
  _QWORD v16[4]; // [rsp+78h] [rbp-1h] BYREF
  LPCWSTR lpSubKey[4]; // [rsp+98h] [rbp+1Fh] BYREF

  v14[3] = a1;
  v13[0] = a3;
  v12 = a4;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v11 = 1;
  wil::str_concat<std::wstring,unsigned short const * &,unsigned short const (&)[16],unsigned short const * &>(
    (__int64)lpSubKey,
    v13,
    (__int64)a3,
    &v12);
  phkResult = 0LL;
  v6 = (const WCHAR *)lpSubKey;
  if ( lpSubKey[3] >= (LPCWSTR)8 )
    v6 = lpSubKey[0];
  if ( !RegOpenKeyW(a2, v6, &phkResult) )
  {
    v15 = 0LL;
    v14[0] = &v15;
    v14[1] = &phkResult;
    v14[2] = a1;
    ForEachValueName<_lambda_10825b8ae890a1dc19d83ed8e1513741_>(phkResult, (__int64)v14);
    wil::str_concat<std::wstring,unsigned short const * &,unsigned short const (&)[21],unsigned short const * &>(
      (__int64)v16,
      v13,
      v7,
      &v12);
    v13[0] = (const wchar_t *)&v15;
    v13[1] = (const wchar_t *)a1;
    v8 = (const WCHAR *)v16;
    if ( v16[3] >= 8uLL )
      v8 = (const WCHAR *)v16[0];
    ForEachKey<_lambda_57cfb88a9168c5b81c3cd8194129e25c_>(a2, v8, (__int64)v13);
    std::wstring::_Tidy_deallocate((__int64)v16);
  }
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&phkResult);
  std::wstring::_Tidy_deallocate((__int64)lpSubKey);
  return a1;
}
