/*
 * XREFs of ??1TaskFlowImmersiveShellBroker@@UEAA@XZ @ 0x1800A6FE8
 * Callers:
 *     ??_ETaskFlowImmersiveShellBroker@@UEAAPEAXI@Z @ 0x1800A6FAC (--_ETaskFlowImmersiveShellBroker@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180041D68 (--1-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004E05C (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?reset@?$unique_call@P6AXXZ$1?CDPShutdown@@YAXXZ$00@wil@@QEAAXXZ @ 0x1800A9378 (-reset@-$unique_call@P6AXXZ$1-CDPShutdown@@YAXXZ$00@wil@@QEAAXXZ.c)
 */

void __fastcall TaskFlowImmersiveShellBroker::~TaskFlowImmersiveShellBroker(TaskFlowImmersiveShellBroker *this)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 38);
  wil::unique_call<void (*)(void),&void CDPShutdown(void),1>::reset((char *)this + 296);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 36);
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)this + 35);
  wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>((__int64 *)this + 34);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 33);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 32);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 31);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 30);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 29);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 28);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 27);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 26);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Internal::UserActivities::IUserActivityMonitor,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataBroker,Windows::Internal::Data::Activities::ITaskDataCacheBroker,Windows::Internal::Data::Activities::ISetActivityMonitor,CImmersiveShellComponentWithGITSite,ICDPUserActivitySettingsCallback,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Internal::UserActivities::IUserActivityMonitor,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataBroker,Windows::Internal::Data::Activities::ITaskDataCacheBroker,Windows::Internal::Data::Activities::ISetActivityMonitor,CImmersiveShellComponentWithGITSite,ICDPUserActivitySettingsCallback,Microsoft::WRL::FtmBase>(this);
}
