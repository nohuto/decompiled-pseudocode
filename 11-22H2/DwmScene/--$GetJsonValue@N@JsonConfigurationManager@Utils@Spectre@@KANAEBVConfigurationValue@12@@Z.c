/*
 * XREFs of ??$GetJsonValue@N@JsonConfigurationManager@Utils@Spectre@@KANAEBVConfigurationValue@12@@Z @ 0x1800DC0A4
 * Callers:
 *     ??$SetValue@N@JsonConfigurationManager@Utils@Spectre@@IEAA?AW4PlacementResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@NW4LoadPolicy@IConfigurationManager@12@@Z @ 0x1800DC464 (--$SetValue@N@JsonConfigurationManager@Utils@Spectre@@IEAA-AW4PlacementResult@12@AEBV-$basic_str.c)
 *     ??$TryGetValue@N@JsonConfigurationManager@Utils@Spectre@@IEBA?AW4QueryResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAN@Z @ 0x1800DCEBC (--$TryGetValue@N@JsonConfigurationManager@Utils@Spectre@@IEBA-AW4QueryResult@12@AEBV-$basic_stri.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __fastcall Spectre::Utils::JsonConfigurationManager::GetJsonValue<double>(
        Spectre::Utils::ConfigurationValue *a1)
{
  return Spectre::Utils::ConfigurationValue::GetDouble(a1);
}
