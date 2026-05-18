/*
 * XREFs of ?GetDouble@ConfigurationValue@Utils@Spectre@@QEBANXZ @ 0x1800DF9F8
 * Callers:
 *     ??$GetJsonValue@N@JsonConfigurationManager@Utils@Spectre@@KANAEBVConfigurationValue@12@@Z @ 0x1800DC0A4 (--$GetJsonValue@N@JsonConfigurationManager@Utils@Spectre@@KANAEBVConfigurationValue@12@@Z.c)
 * Callees:
 *     <none>
 */

double __fastcall Spectre::Utils::ConfigurationValue::GetDouble(Spectre::Utils::ConfigurationValue *this)
{
  return *((double *)this + 6);
}
