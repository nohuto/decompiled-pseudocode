/*
 * XREFs of ??$GetJsonValue@H@JsonConfigurationManager@Utils@Spectre@@KAHAEBVConfigurationValue@12@@Z @ 0x1800DC098
 * Callers:
 *     ??$SetValue@H@JsonConfigurationManager@Utils@Spectre@@IEAA?AW4PlacementResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@HW4LoadPolicy@IConfigurationManager@12@@Z @ 0x1800DC1A4 (--$SetValue@H@JsonConfigurationManager@Utils@Spectre@@IEAA-AW4PlacementResult@12@AEBV-$basic_str.c)
 *     ??$TryGetValue@H@JsonConfigurationManager@Utils@Spectre@@IEBA?AW4QueryResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAH@Z @ 0x1800DCCF0 (--$TryGetValue@H@JsonConfigurationManager@Utils@Spectre@@IEBA-AW4QueryResult@12@AEBV-$basic_stri.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Spectre::Utils::JsonConfigurationManager::GetJsonValue<int>(Spectre::Utils::ConfigurationValue *a1)
{
  return Spectre::Utils::ConfigurationValue::GetInteger(a1);
}
