/*
 * XREFs of ??$SetValue@N@ConfigurationValue@Utils@Spectre@@QEAAXV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@N@Z @ 0x1800DC3D0
 * Callers:
 *     ??$SetValue@N@JsonConfigurationManager@Utils@Spectre@@IEAA?AW4PlacementResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@NW4LoadPolicy@IConfigurationManager@12@@Z @ 0x1800DC464 (--$SetValue@N@JsonConfigurationManager@Utils@Spectre@@IEAA-AW4PlacementResult@12@AEBV-$basic_str.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001E33C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     ??A?$unordered_map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@2@@std@@QEAAAEAVConfigurationValue@Utils@Spectre@@$$QEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x1800DE408 (--A-$unordered_map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@VConfigurati.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Spectre::Utils::ConfigurationValue::SetValue<double>(__int64 a1, _QWORD *a2, double a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  _QWORD v7[4]; // [rsp+28h] [rbp-40h] BYREF

  v3 = (__int64)a2;
  v4 = a1 + 64;
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  std::wstring::wstring(v7, (__int64)a2);
  v5 = std::unordered_map<std::wstring,Spectre::Utils::ConfigurationValue>::operator[](v4, v7);
  *(double *)(v5 + 48) = a3;
  *(_DWORD *)v5 = 2;
  std::wstring::_Tidy_deallocate((__int64)v7);
  return std::wstring::_Tidy_deallocate(v3);
}
