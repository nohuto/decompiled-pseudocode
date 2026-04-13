/*
 * XREFs of __security_check_cookie @ 0x180004F10
 * Callers:
 *     ?GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z @ 0x180001084 (-GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z.c)
 *     TelSetLocalTelemetrySetting @ 0x1800018B0 (TelSetLocalTelemetrySetting.c)
 *     TelpReadUsersPolicySetting @ 0x1800024B8 (TelpReadUsersPolicySetting.c)
 *     TelIsOsInProcessorMode @ 0x180002C30 (TelIsOsInProcessorMode.c)
 *     TelGetRegionalSettingsValue @ 0x180002EF0 (TelGetRegionalSettingsValue.c)
 *     TelpReadOfflineOsPolicySetting @ 0x18000318C (TelpReadOfflineOsPolicySetting.c)
 *     TelpReadOfflineSoftwareRegistryDword @ 0x180003328 (TelpReadOfflineSoftwareRegistryDword.c)
 *     TelpReadOfflineSoftwareRegistryString @ 0x1800034E4 (TelpReadOfflineSoftwareRegistryString.c)
 *     McTemplateU0zzzzztzzzzdz_EventWriteTransfer @ 0x180003814 (McTemplateU0zzzzztzzzzdz_EventWriteTransfer.c)
 *     ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180003B8C (--$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180003DD0 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800044F8 (--$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     __GSHandlerCheckCommon @ 0x180005BB0 (__GSHandlerCheckCommon.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
