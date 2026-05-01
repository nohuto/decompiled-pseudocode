/*
 * XREFs of ??$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@PEBG$$QEAV_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@Z @ 0x1804894B4
 * Callers:
 *     ?GetComponents@ImmersiveShellComponentsConfiguration@@CA?AV?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@PEAUHKEY__@@PEBG1@Z @ 0x18048A58C (-GetComponents@ImmersiveShellComponentsConfiguration@@CA-AV-$vector@UClassIdAndInfo@ImmersiveShe.c)
 * Callees:
 *     ??$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@Z @ 0x1804893EC (--$ForEachKey@V_lambda_57cfb88a9168c5b81c3cd8194129e25c_@@@@YAXPEAUHKEY__@@$$QEAV_lambda_57cfb88.c)
 */

// Hidden C++ exception states: #wind=1
LSTATUS __fastcall ForEachKey<_lambda_57cfb88a9168c5b81c3cd8194129e25c_>(HKEY a1, const WCHAR *a2, __int64 a3)
{
  LSTATUS result; // eax
  HKEY hKey; // [rsp+58h] [rbp+20h] BYREF

  hKey = 0LL;
  result = RegOpenKeyExW(a1, a2, 0, 0x20019u, &hKey);
  if ( !result )
    result = ForEachKey<_lambda_57cfb88a9168c5b81c3cd8194129e25c_>(hKey, a3);
  if ( hKey )
    return RegCloseKey(hKey);
  return result;
}
