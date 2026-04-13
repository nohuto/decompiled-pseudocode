/*
 * XREFs of ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004A4C
 * Callers:
 *     TelpReadRegistryDword @ 0x1800014A8 (TelpReadRegistryDword.c)
 *     TelpReadRegistryString @ 0x18000152C (TelpReadRegistryString.c)
 *     TelIsTelemetryTypeAllowed @ 0x1800015C0 (TelIsTelemetryTypeAllowed.c)
 *     TelGetAllAllowedTelemetryTypes @ 0x180001620 (TelGetAllAllowedTelemetryTypes.c)
 *     TelSetLocalTelemetrySetting @ 0x1800018B0 (TelSetLocalTelemetrySetting.c)
 *     TelGetNumericPolicy @ 0x180001A40 (TelGetNumericPolicy.c)
 *     TelGetStringPolicy @ 0x180001E60 (TelGetStringPolicy.c)
 *     TelpReadLocalSetting @ 0x1800020CC (TelpReadLocalSetting.c)
 *     TelpReadGroupPolicySetting @ 0x1800021B8 (TelpReadGroupPolicySetting.c)
 *     TelpReadMdmSetting @ 0x18000228C (TelpReadMdmSetting.c)
 *     TelpReadEnterpriseGovSetting @ 0x18000235C (TelpReadEnterpriseGovSetting.c)
 *     TelpReadUsersPolicySetting @ 0x1800024B8 (TelpReadUsersPolicySetting.c)
 *     TelpEvaluateWithoutLicenseCheck @ 0x1800027B8 (TelpEvaluateWithoutLicenseCheck.c)
 *     TelEvaluateActiveSettingAuthority @ 0x1800028F0 (TelEvaluateActiveSettingAuthority.c)
 *     TelGetMaximumAllowedTelemetryLevel @ 0x180002A20 (TelGetMaximumAllowedTelemetryLevel.c)
 *     TelIsOsInProcessorMode @ 0x180002C30 (TelIsOsInProcessorMode.c)
 *     TelGetRegionalSettingsValue @ 0x180002EF0 (TelGetRegionalSettingsValue.c)
 *     TelIsTelemetryTypeAllowedWinRE @ 0x180003090 (TelIsTelemetryTypeAllowedWinRE.c)
 *     TelpReadOfflineOsPolicySetting @ 0x18000318C (TelpReadOfflineOsPolicySetting.c)
 *     TelpReadOfflineSoftwareRegistryDword @ 0x180003328 (TelpReadOfflineSoftwareRegistryDword.c)
 *     TelpReadOfflineSoftwareRegistryString @ 0x1800034E4 (TelpReadOfflineSoftwareRegistryString.c)
 * Callees:
 *     ??$ReportFailure_Hr@$00@details@wil@@YAXPEAXIPEBD110J@Z @ 0x1800049E4 (--$ReportFailure_Hr@$00@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

void __fastcall wil::details::in1diag3::Return_Hr(wil::details::in1diag3 *this, __int64 a2, __int64 a3, const char *a4)
{
  int v4; // [rsp+20h] [rbp-28h]
  wil::details *v5; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v5) = (_DWORD)a4;
  wil::details::ReportFailure_Hr<1>((__int64)this, a2, a3, (__int64)a4, v4, retaddr, v5);
}
