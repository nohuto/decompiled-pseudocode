/*
 * XREFs of ?Stop@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXJ@Z @ 0x180502378
 * Callers:
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18005F9B0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CommonStartTelemetry::LauncherInvokeActivity::Stop(__int64 this, unsigned int a2)
{
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::Stop(
    this,
    a2);
}
