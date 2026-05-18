/*
 * XREFs of ?GetBool@ConfigurationValue@Utils@Spectre@@QEBA_NXZ @ 0x1800DF98C
 * Callers:
 *     ??$GetJsonValue@_N@JsonConfigurationManager@Utils@Spectre@@KA_NAEBVConfigurationValue@12@@Z @ 0x1800DC0D8 (--$GetJsonValue@_N@JsonConfigurationManager@Utils@Spectre@@KA_NAEBVConfigurationValue@12@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Utils::ConfigurationValue::GetBool(Spectre::Utils::ConfigurationValue *this)
{
  return *((_BYTE *)this + 60);
}
