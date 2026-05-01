/*
 * XREFs of ??0LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x1800F5DD0
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18003BB20 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ??0XamlLauncherState@@QEAA@XZ @ 0x180102E7C (--0XamlLauncherState@@QEAA@XZ.c)
 *     ?HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180505AC0 (-HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800F5E80 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgRe_ea_1800F5E80.c)
 */

CommonStartTelemetry::LauncherInvokeActivity *__fastcall CommonStartTelemetry::LauncherInvokeActivity::LauncherInvokeActivity(
        CommonStartTelemetry::LauncherInvokeActivity *this)
{
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>(this);
  *(_QWORD *)this = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
  return this;
}
