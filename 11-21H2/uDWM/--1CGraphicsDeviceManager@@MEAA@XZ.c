/*
 * XREFs of ??1CGraphicsDeviceManager@@MEAA@XZ @ 0x1800BD774
 * Callers:
 *     ??_GCGraphicsDeviceManager@@MEAAPEAXI@Z @ 0x1800BD7F0 (--_GCGraphicsDeviceManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UICompositionGraphicsDevice@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FDF0 (--1-$com_ptr_t@UICompositionGraphicsDevice@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180013914 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ??1?$com_ptr_t@UIDisplayState@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003D81C (--1-$com_ptr_t@UIDisplayState@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QE.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18004593C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x1800BD858 (-ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 */

void __fastcall CGraphicsDeviceManager::~CGraphicsDeviceManager(CGraphicsDeviceManager *this)
{
  void *v2; // rdx

  *(_QWORD *)this = &CGraphicsDeviceManager::`vftable';
  CGraphicsDeviceManager::ReleaseGraphicsDevice(this);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (wil::details **)this + 7,
    0LL);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
    (wil::details **)this + 7,
    v2);
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>((__int64 *)this + 6);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionGraphicsDevice,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionGraphicsDevice,wil::err_returncode_policy>((__int64 *)this + 5);
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>((__int64 *)this + 4);
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>((__int64 *)this + 3);
  wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>((__int64 *)this + 2);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
