/*
 * XREFs of ??$IsJsonType@N@JsonConfigurationManager@Utils@Spectre@@KA_NAEBVConfigurationValue@12@@Z @ 0x1800DC0F0
 * Callers:
 *     ??$SetValue@N@JsonConfigurationManager@Utils@Spectre@@IEAA?AW4PlacementResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@NW4LoadPolicy@IConfigurationManager@12@@Z @ 0x1800DC464 (--$SetValue@N@JsonConfigurationManager@Utils@Spectre@@IEAA-AW4PlacementResult@12@AEBV-$basic_str.c)
 *     ??$TryGetValue@N@JsonConfigurationManager@Utils@Spectre@@IEBA?AW4QueryResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAN@Z @ 0x1800DCEBC (--$TryGetValue@N@JsonConfigurationManager@Utils@Spectre@@IEBA-AW4QueryResult@12@AEBV-$basic_stri.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
bool __fastcall Spectre::Utils::JsonConfigurationManager::IsJsonType<double>(Spectre::Utils::ConfigurationValue *a1)
{
  return Spectre::Utils::ConfigurationValue::IsDouble(a1);
}
