/*
 * XREFs of ??0CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ @ 0x180103364
 * Callers:
 *     ??0XamlLauncherState@@QEAA@XZ @ 0x180102E7C (--0XamlLauncherState@@QEAA@XZ.c)
 *     ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x180505558 (-BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18010394C (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

StartWindowTelemetry::CortanaLauncherInvokeActivity *__fastcall StartWindowTelemetry::CortanaLauncherInvokeActivity::CortanaLauncherInvokeActivity(
        StartWindowTelemetry::CortanaLauncherInvokeActivity *this)
{
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
  *(_QWORD *)this = &StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
  return this;
}
