/*
 * XREFs of ?IsBool@ConfigurationValue@Utils@Spectre@@QEBA_NXZ @ 0x1800DFB94
 * Callers:
 *     ??$IsJsonType@_N@JsonConfigurationManager@Utils@Spectre@@KA_NAEBVConfigurationValue@12@@Z @ 0x1800DC108 (--$IsJsonType@_N@JsonConfigurationManager@Utils@Spectre@@KA_NAEBVConfigurationValue@12@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Utils::ConfigurationValue::IsBool(Spectre::Utils::ConfigurationValue *this)
{
  return *(_DWORD *)this == 4;
}
