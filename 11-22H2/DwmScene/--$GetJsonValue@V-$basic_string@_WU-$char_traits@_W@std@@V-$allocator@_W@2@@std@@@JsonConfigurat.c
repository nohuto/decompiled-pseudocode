/*
 * XREFs of ??$GetJsonValue@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@JsonConfigurationManager@Utils@Spectre@@KA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBVConfigurationValue@12@@Z @ 0x1800DC0B0
 * Callers:
 *     ??$SetValue@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@JsonConfigurationManager@Utils@Spectre@@IEAA?AW4PlacementResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V45@W4LoadPolicy@IConfigurationManager@12@@Z @ 0x1800DC760 (--$SetValue@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@JsonConfigurationM.c)
 *     ??$TryGetValue@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@JsonConfigurationManager@Utils@Spectre@@IEBA?AW4QueryResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAV45@@Z @ 0x1800DD08C (--$TryGetValue@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@JsonConfigurati.c)
 * Callees:
 *     ?GetString@ConfigurationValue@Utils@Spectre@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x1800DFAC4 (-GetString@ConfigurationValue@Utils@Spectre@@QEBA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$a.c)
 */

__int64 __fastcall Spectre::Utils::JsonConfigurationManager::GetJsonValue<std::wstring>(__int64 a1, __int64 a2)
{
  Spectre::Utils::ConfigurationValue::GetString(a2, a1);
  return a1;
}
