/*
 * XREFs of ??$SetValue@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@ConfigurationValue@Utils@Spectre@@QEAAXV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@0@Z @ 0x1800DC698
 * Callers:
 *     ??$SetValue@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@JsonConfigurationManager@Utils@Spectre@@IEAA?AW4PlacementResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V45@W4LoadPolicy@IConfigurationManager@12@@Z @ 0x1800DC760 (--$SetValue@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@JsonConfigurationM.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18001E33C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     ??4?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800320AC (--4-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??A?$unordered_map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@VConfigurationValue@Utils@Spectre@@@std@@@2@@std@@QEAAAEAVConfigurationValue@Utils@Spectre@@$$QEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x1800DE408 (--A-$unordered_map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@VConfigurati.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Spectre::Utils::ConfigurationValue::SetValue<std::wstring>(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdi
  char *v8; // [rsp+20h] [rbp-78h]
  _QWORD v9[6]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v10[4]; // [rsp+58h] [rbp-40h] BYREF

  v4 = (__int64)a2;
  v9[4] = a2;
  v9[5] = a3;
  v5 = a1 + 64;
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  std::wstring::wstring(v10, (__int64)a2);
  v6 = std::unordered_map<std::wstring,Spectre::Utils::ConfigurationValue>::operator[](v5, v10);
  v8 = (char *)std::wstring::wstring(v9, a3);
  std::wstring::operator=((char *)(v6 + 8), v8);
  *(_DWORD *)v6 = 0;
  std::wstring::_Tidy_deallocate((__int64)v8);
  std::wstring::_Tidy_deallocate((__int64)v10);
  std::wstring::_Tidy_deallocate(v4);
  return std::wstring::_Tidy_deallocate(a3);
}
