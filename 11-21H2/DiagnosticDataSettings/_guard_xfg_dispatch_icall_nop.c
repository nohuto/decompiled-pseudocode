/*
 * XREFs of _guard_xfg_dispatch_icall_nop @ 0x180005060
 * Callers:
 *     TelGetLocalAllowTelemetryRegPath @ 0x180001510 (TelGetLocalAllowTelemetryRegPath.c)
 *     TelGetNumericPolicy @ 0x180001924 (TelGetNumericPolicy.c)
 *     TelpReadLocalSetting @ 0x180001CE8 (TelpReadLocalSetting.c)
 *     TelpReadEnterpriseGovSetting @ 0x180001F6C (TelpReadEnterpriseGovSetting.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x18000339C (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x18000366C (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 *     ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x18000399C (--$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     dllmain_crt_process_attach @ 0x180003FF8 (dllmain_crt_process_attach.c)
 *     dllmain_dispatch @ 0x1800041AC (dllmain_dispatch.c)
 *     __scrt_dllmain_exception_filter @ 0x18000456C (__scrt_dllmain_exception_filter.c)
 *     _RTC_Initialize @ 0x180004984 (_RTC_Initialize.c)
 *     _RTC_Terminate @ 0x1800049D0 (_RTC_Terminate.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall guard_xfg_dispatch_icall_nop()
{
  __int64 (__fastcall *v0)(); // rax

  return v0();
}
