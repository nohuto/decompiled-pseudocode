/*
 * XREFs of ??1?$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@QEAA@XZ @ 0x18044A4AC
 * Callers:
 *     _XamlLauncher::XamlLauncher_::_1_::dtor$9 @ 0x18021751A (_XamlLauncher--XamlLauncher_--_1_--dtor$9.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_ImmersiveMonitorHelper_ImmersiveMonitorHelper_IServiceProvider___&_IXamlLauncherState____::_1_::dtor$1 @ 0x18021CE2B (_Microsoft--WRL--Details--MakeAndInitialize_ImmersiveMonitorHelper_ImmersiveMonitorHelper_IServi.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ImmersiveMonitorHelper>::~ComPtr<ImmersiveMonitorHelper>(
        volatile signed __int32 **a1)
{
  return Microsoft::WRL::ComPtr<ImmersiveMonitorHelper>::InternalRelease(a1);
}
