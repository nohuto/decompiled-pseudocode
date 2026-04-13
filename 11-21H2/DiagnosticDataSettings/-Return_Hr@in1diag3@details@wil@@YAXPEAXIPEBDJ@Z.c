/*
 * XREFs of ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003EA4
 * Callers:
 *     TelpReadRegistryDword @ 0x1800012FC (TelpReadRegistryDword.c)
 *     TelpReadRegistryString @ 0x180001380 (TelpReadRegistryString.c)
 *     TelIsTelemetryTypeAllowed @ 0x180001410 (TelIsTelemetryTypeAllowed.c)
 *     TelGetAllAllowedTelemetryTypes @ 0x180001480 (TelGetAllAllowedTelemetryTypes.c)
 *     TelSetLocalTelemetrySetting @ 0x180001700 (TelSetLocalTelemetrySetting.c)
 *     TelGetNumericPolicy @ 0x180001924 (TelGetNumericPolicy.c)
 *     TelpReadLocalSetting @ 0x180001CE8 (TelpReadLocalSetting.c)
 *     TelpReadGroupPolicySetting @ 0x180001DC8 (TelpReadGroupPolicySetting.c)
 *     TelpReadMdmSetting @ 0x180001E9C (TelpReadMdmSetting.c)
 *     TelpReadEnterpriseGovSetting @ 0x180001F6C (TelpReadEnterpriseGovSetting.c)
 *     TelpReadUsersPolicySetting @ 0x1800020C8 (TelpReadUsersPolicySetting.c)
 *     TelpEvaluateWithoutLicenseCheck @ 0x1800023C8 (TelpEvaluateWithoutLicenseCheck.c)
 *     TelEvaluateActiveSettingAuthority @ 0x180002500 (TelEvaluateActiveSettingAuthority.c)
 *     TelGetMaximumAllowedTelemetryLevel @ 0x180002640 (TelGetMaximumAllowedTelemetryLevel.c)
 *     TelIsOsInProcessorMode @ 0x180002830 (TelIsOsInProcessorMode.c)
 *     TelGetRegionalSettingsValue @ 0x180002AF0 (TelGetRegionalSettingsValue.c)
 * Callees:
 *     ??$ReportFailure_Hr@$00@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180003E3C (--$ReportFailure_Hr@$00@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

void __fastcall wil::details::in1diag3::Return_Hr(wil::details::in1diag3 *this, __int64 a2, __int64 a3, const char *a4)
{
  int v4; // [rsp+20h] [rbp-28h]
  wil::details *v5; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v5) = (_DWORD)a4;
  wil::details::ReportFailure_Hr<1>((__int64)this, a2, a3, (__int64)a4, v4, retaddr, v5);
}
