/*
 * XREFs of ??$GetJsonValue@_N@JsonConfigurationManager@Utils@Spectre@@KA_NAEBVConfigurationValue@12@@Z @ 0x1800DC0D8
 * Callers:
 *     ??$SetValue@_N@JsonConfigurationManager@Utils@Spectre@@IEAA?AW4PlacementResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@_NW4LoadPolicy@IConfigurationManager@12@@Z @ 0x1800DCAC4 (--$SetValue@_N@JsonConfigurationManager@Utils@Spectre@@IEAA-AW4PlacementResult@12@AEBV-$basic_st.c)
 *     ??$TryGetValue@_N@JsonConfigurationManager@Utils@Spectre@@IEBA?AW4QueryResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEA_N@Z @ 0x1800DD288 (--$TryGetValue@_N@JsonConfigurationManager@Utils@Spectre@@IEBA-AW4QueryResult@12@AEBV-$basic_str.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
bool __fastcall Spectre::Utils::JsonConfigurationManager::GetJsonValue<bool>(Spectre::Utils::ConfigurationValue *a1)
{
  return Spectre::Utils::ConfigurationValue::GetBool(a1);
}
