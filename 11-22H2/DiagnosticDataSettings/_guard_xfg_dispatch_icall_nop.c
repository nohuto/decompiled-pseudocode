/*
 * XREFs of _guard_xfg_dispatch_icall_nop @ 0x180005CA0
 * Callers:
 *     ?WilDynamicLoadRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z @ 0x180001240 (-WilDynamicLoadRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z.c)
 *     ?MicrosoftInternalNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@@Z @ 0x180001350 (-MicrosoftInternalNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@@Z.c)
 *     TelGetLocalAllowTelemetryRegPath @ 0x1800016B0 (TelGetLocalAllowTelemetryRegPath.c)
 *     TelGetNumericPolicy @ 0x180001A40 (TelGetNumericPolicy.c)
 *     TelGetStringPolicy @ 0x180001E60 (TelGetStringPolicy.c)
 *     TelpReadLocalSetting @ 0x1800020CC (TelpReadLocalSetting.c)
 *     TelpReadEnterpriseGovSetting @ 0x18000235C (TelpReadEnterpriseGovSetting.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180003DD0 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x1800040A0 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 *     ?WilRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z @ 0x1800043FC (-WilRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180004434 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800044F8 (--$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     dllmain_crt_process_attach @ 0x180004BA8 (dllmain_crt_process_attach.c)
 *     dllmain_dispatch @ 0x180004D5C (dllmain_dispatch.c)
 *     __scrt_dllmain_exception_filter @ 0x180005118 (__scrt_dllmain_exception_filter.c)
 *     _RTC_Initialize @ 0x180005530 (_RTC_Initialize.c)
 *     _RTC_Terminate @ 0x18000557C (_RTC_Terminate.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall guard_xfg_dispatch_icall_nop()
{
  __int64 (__fastcall *v0)(); // rax

  return v0();
}
