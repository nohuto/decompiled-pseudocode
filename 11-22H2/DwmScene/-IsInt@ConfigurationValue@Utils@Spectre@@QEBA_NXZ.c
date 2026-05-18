/*
 * XREFs of ?IsInt@ConfigurationValue@Utils@Spectre@@QEBA_NXZ @ 0x1800DFBB4
 * Callers:
 *     ??$IsJsonType@H@JsonConfigurationManager@Utils@Spectre@@KA_NAEBVConfigurationValue@12@@Z @ 0x1800DC0E4 (--$IsJsonType@H@JsonConfigurationManager@Utils@Spectre@@KA_NAEBVConfigurationValue@12@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Utils::ConfigurationValue::IsInt(Spectre::Utils::ConfigurationValue *this)
{
  return *(_DWORD *)this == 1;
}
