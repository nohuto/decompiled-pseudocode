/*
 * XREFs of ?IsDouble@ConfigurationValue@Utils@Spectre@@QEBA_NXZ @ 0x1800DFBA4
 * Callers:
 *     ??$IsJsonType@N@JsonConfigurationManager@Utils@Spectre@@KA_NAEBVConfigurationValue@12@@Z @ 0x1800DC0F0 (--$IsJsonType@N@JsonConfigurationManager@Utils@Spectre@@KA_NAEBVConfigurationValue@12@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Utils::ConfigurationValue::IsDouble(Spectre::Utils::ConfigurationValue *this)
{
  return *(_DWORD *)this == 2;
}
