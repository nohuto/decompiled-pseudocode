/*
 * XREFs of ?GetInteger@ConfigurationValue@Utils@Spectre@@QEBAHXZ @ 0x1800DFA08
 * Callers:
 *     ??$GetJsonValue@H@JsonConfigurationManager@Utils@Spectre@@KAHAEBVConfigurationValue@12@@Z @ 0x1800DC098 (--$GetJsonValue@H@JsonConfigurationManager@Utils@Spectre@@KAHAEBVConfigurationValue@12@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Utils::ConfigurationValue::GetInteger(Spectre::Utils::ConfigurationValue *this)
{
  return *((unsigned int *)this + 10);
}
