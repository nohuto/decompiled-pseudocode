/*
 * XREFs of ??$IsJsonType@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@JsonConfigurationManager@Utils@Spectre@@KA_NAEBVConfigurationValue@12@@Z @ 0x1800DC0FC
 * Callers:
 *     ??$SetValue@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@JsonConfigurationManager@Utils@Spectre@@IEAA?AW4PlacementResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V45@W4LoadPolicy@IConfigurationManager@12@@Z @ 0x1800DC760 (--$SetValue@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@JsonConfigurationM.c)
 *     ??$TryGetValue@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@JsonConfigurationManager@Utils@Spectre@@IEBA?AW4QueryResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAV45@@Z @ 0x1800DD08C (--$TryGetValue@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@JsonConfigurati.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
bool __fastcall Spectre::Utils::JsonConfigurationManager::IsJsonType<std::wstring>(
        Spectre::Utils::ConfigurationValue *a1)
{
  return Spectre::Utils::ConfigurationValue::IsString(a1);
}
