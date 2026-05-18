/*
 * XREFs of ?GetString@ConfigurationValue@Utils@Spectre@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x1800DFAC4
 * Callers:
 *     ??$GetJsonValue@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@JsonConfigurationManager@Utils@Spectre@@KA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBVConfigurationValue@12@@Z @ 0x1800DC0B0 (--$GetJsonValue@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@JsonConfigurat.c)
 * Callees:
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall Spectre::Utils::ConfigurationValue::GetString(__int64 a1, _QWORD *a2)
{
  std::wstring::wstring(a2, a1 + 8);
  return a2;
}
