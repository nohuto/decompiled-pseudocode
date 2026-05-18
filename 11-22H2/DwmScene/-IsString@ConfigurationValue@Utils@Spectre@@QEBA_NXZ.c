/*
 * XREFs of ?IsString@ConfigurationValue@Utils@Spectre@@QEBA_NXZ @ 0x1800DFBD4
 * Callers:
 *     ??$IsJsonType@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@JsonConfigurationManager@Utils@Spectre@@KA_NAEBVConfigurationValue@12@@Z @ 0x1800DC0FC (--$IsJsonType@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@JsonConfiguratio.c)
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Utils::ConfigurationValue::IsString(Spectre::Utils::ConfigurationValue *this)
{
  return *(_DWORD *)this == 0;
}
