/*
 * XREFs of ??$Start@$$V@LauncherInvokeActivity@CommonStartTelemetry@@SA?AV01@XZ @ 0x1804FF9D8
 * Callers:
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18005F9B0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 * Callees:
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800F5E80 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgRe_ea_1800F5E80.c)
 *     ?StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ @ 0x180502034 (-StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ.c)
 */

CommonStartTelemetry::LauncherInvokeActivity *__fastcall CommonStartTelemetry::LauncherInvokeActivity::Start<>(
        CommonStartTelemetry::LauncherInvokeActivity *this)
{
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>(this);
  *(_QWORD *)this = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
  CommonStartTelemetry::LauncherInvokeActivity::StartActivity(this);
  return this;
}
