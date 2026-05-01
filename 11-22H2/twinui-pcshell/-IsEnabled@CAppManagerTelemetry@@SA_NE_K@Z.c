/*
 * XREFs of ?IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z @ 0x18039D4EC
 * Callers:
 *     ??$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z @ 0x180394634 (--$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z.c)
 *     ?_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOCATION@@@Z @ 0x1803BD1CC (-_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOC.c)
 *     ?_LogVisibilityTelemetry@CTaskWindow@@AEAAX_N@Z @ 0x1803C86CC (-_LogVisibilityTelemetry@CTaskWindow@@AEAAX_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VCAppManagerTelemetry@@@details@wil@@QEAAPEAVCAppManagerTelemetry@@P6AXXZ@Z @ 0x1800223E0 (-get@-$static_lazy@VCAppManagerTelemetry@@@details@wil@@QEAAPEAVCAppManagerTelemetry@@P6AXXZ@Z.c)
 */

char __fastcall CAppManagerTelemetry::IsEnabled(__int64 a1)
{
  __int64 *v1; // rax

  v1 = wil::details::static_lazy<CAppManagerTelemetry>::get(
         a1,
         (void (__cdecl *)())_lambda_8127ed7c5a5c4820bb697a3afc89f3a5_::_lambda_invoker_cdecl_);
  return wil::TraceLoggingProvider::IsEnabled_((wil::TraceLoggingProvider *)v1, 0);
}
