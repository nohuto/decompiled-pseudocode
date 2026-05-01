/*
 * XREFs of ??$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@PEBG$$QEAV_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@Z @ 0x1803AEFE4
 * Callers:
 *     ?GetComponents@ImmersiveShellComponentsConfiguration@@CA?AV?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@PEAUHKEY__@@PEBG1@Z @ 0x1803B040C (-GetComponents@ImmersiveShellComponentsConfiguration@@CA-AV-$vector@UClassIdAndInfo@ImmersiveShe.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18008EA60 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ??$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@Z @ 0x1803AEF1C (--$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_57cfb88.c)
 */

// Hidden C++ exception states: #wind=2
LSTATUS __fastcall ForEachKey<_lambda_57cfb88a9168c5b81c3cd8194129e25c_>(HKEY a1, const WCHAR *a2, __int64 a3)
{
  HKEY hKey; // [rsp+58h] [rbp+20h] BYREF

  hKey = 0LL;
  if ( !RegOpenKeyExW(a1, a2, 0, 0x20019u, &hKey) )
    ForEachKey<_lambda_57cfb88a9168c5b81c3cd8194129e25c_>(hKey, a3);
  return wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hKey);
}
