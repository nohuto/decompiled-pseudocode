/*
 * XREFs of ??$SetValue@_N@ConfigurationValue@Utils@Spectre@@QEAAXV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@_N@Z @ 0x1800DCA34
 * Callers:
 *     ??$SetValue@_N@JsonConfigurationManager@Utils@Spectre@@IEAA?AW4PlacementResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@_NW4LoadPolicy@IConfigurationManager@12@@Z @ 0x1800DCAC4 (--$SetValue@_N@JsonConfigurationManager@Utils@Spectre@@IEAA-AW4PlacementResult@12@AEBV-$basic_st.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001E33C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     ??A?$unordered_map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@2@@std@@QEAAAEAVConfigurationValue@Utils@Spectre@@$$QEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x1800DE408 (--A-$unordered_map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@VConfigurati.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Spectre::Utils::ConfigurationValue::SetValue<bool>(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rax
  _QWORD v8[4]; // [rsp+28h] [rbp-30h] BYREF

  v4 = (__int64)a2;
  v5 = a1 + 64;
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  std::wstring::wstring(v8, (__int64)a2);
  v6 = std::unordered_map<std::wstring,Spectre::Utils::ConfigurationValue>::operator[](v5, v8);
  *(_BYTE *)(v6 + 60) = a3;
  *(_DWORD *)v6 = 4;
  std::wstring::_Tidy_deallocate((__int64)v8);
  return std::wstring::_Tidy_deallocate(v4);
}
