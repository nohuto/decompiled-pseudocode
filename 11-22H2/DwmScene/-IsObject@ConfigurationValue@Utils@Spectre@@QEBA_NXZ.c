/*
 * XREFs of ?IsObject@ConfigurationValue@Utils@Spectre@@QEBA_NXZ @ 0x1800DFBC4
 * Callers:
 *     ??$SetValue@H@JsonConfigurationManager@Utils@Spectre@@IEAA?AW4PlacementResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@HW4LoadPolicy@IConfigurationManager@12@@Z @ 0x1800DC1A4 (--$SetValue@H@JsonConfigurationManager@Utils@Spectre@@IEAA-AW4PlacementResult@12@AEBV-$basic_str.c)
 *     ??$SetValue@N@JsonConfigurationManager@Utils@Spectre@@IEAA?AW4PlacementResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@NW4LoadPolicy@IConfigurationManager@12@@Z @ 0x1800DC464 (--$SetValue@N@JsonConfigurationManager@Utils@Spectre@@IEAA-AW4PlacementResult@12@AEBV-$basic_str.c)
 *     ??$SetValue@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@JsonConfigurationManager@Utils@Spectre@@IEAA?AW4PlacementResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V45@W4LoadPolicy@IConfigurationManager@12@@Z @ 0x1800DC760 (--$SetValue@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@JsonConfigurationM.c)
 *     ??$SetValue@_N@JsonConfigurationManager@Utils@Spectre@@IEAA?AW4PlacementResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@_NW4LoadPolicy@IConfigurationManager@12@@Z @ 0x1800DCAC4 (--$SetValue@_N@JsonConfigurationManager@Utils@Spectre@@IEAA-AW4PlacementResult@12@AEBV-$basic_st.c)
 *     ??$TryGetValue@H@JsonConfigurationManager@Utils@Spectre@@IEBA?AW4QueryResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAH@Z @ 0x1800DCCF0 (--$TryGetValue@H@JsonConfigurationManager@Utils@Spectre@@IEBA-AW4QueryResult@12@AEBV-$basic_stri.c)
 *     ??$TryGetValue@N@JsonConfigurationManager@Utils@Spectre@@IEBA?AW4QueryResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAN@Z @ 0x1800DCEBC (--$TryGetValue@N@JsonConfigurationManager@Utils@Spectre@@IEBA-AW4QueryResult@12@AEBV-$basic_stri.c)
 *     ??$TryGetValue@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@JsonConfigurationManager@Utils@Spectre@@IEBA?AW4QueryResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAV45@@Z @ 0x1800DD08C (--$TryGetValue@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@JsonConfigurati.c)
 *     ??$TryGetValue@_N@JsonConfigurationManager@Utils@Spectre@@IEBA?AW4QueryResult@12@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEA_N@Z @ 0x1800DD288 (--$TryGetValue@_N@JsonConfigurationManager@Utils@Spectre@@IEBA-AW4QueryResult@12@AEBV-$basic_str.c)
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Utils::ConfigurationValue::IsObject(Spectre::Utils::ConfigurationValue *this)
{
  return *(_DWORD *)this == 5;
}
