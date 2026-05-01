/*
 * XREFs of ??1?$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@QEAA@XZ @ 0x1804FFDA0
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_ImmersiveMonitorHelper_ImmersiveMonitorHelper_IServiceProvider___&_IXamlLauncherState____::_1_::dtor$1 @ 0x1802BC84D (_Microsoft--WRL--Details--MakeAndInitialize_ImmersiveMonitorHelper_ImmersiveMonitorHelper_IServi.c)
 *     _XamlLauncher::XamlLauncher_::_1_::dtor$10 @ 0x1802BC94F (_XamlLauncher--XamlLauncher_--_1_--dtor$10.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ImmersiveMonitorHelper>::~ComPtr<ImmersiveMonitorHelper>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<ImmersiveMonitorHelper>::InternalRelease(a1);
}
