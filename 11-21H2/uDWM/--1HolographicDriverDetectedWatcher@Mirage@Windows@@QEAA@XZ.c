/*
 * XREFs of ??1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x18009C500
 * Callers:
 *     ??1CAnalogCompositorManager@@AEAA@XZ @ 0x18005FCC0 (--1CAnalogCompositorManager@@AEAA@XZ.c)
 *     _CAnalogCompositorManager::CAnalogCompositorManager_::_1_::dtor$1 @ 0x180065F5E (_CAnalogCompositorManager--CAnalogCompositorManager_--_1_--dtor$1.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18004593C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18009C4D0 (--1-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1-del.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18009E118 (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

void __fastcall Windows::Mirage::HolographicDriverDetectedWatcher::~HolographicDriverDetectedWatcher(
        Windows::Mirage::HolographicDriverDetectedWatcher *this,
        struct wil::details::event_watcher_state *a2)
{
  CONFIGRET v3; // eax
  DWORD v4; // eax
  unsigned int v5; // r8d
  struct wil::details::event_watcher_state *v6; // rdx
  void *v7; // rdx
  void *v8; // rdx
  unsigned int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 4) )
  {
    v3 = CM_Unregister_Notification();
    v4 = CM_MapCrToWin32Err(v3, 0x507u);
    if ( v4 )
      wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x65, v5, (const char *)v4, v9);
    *((_QWORD *)this + 4) = 0LL;
  }
  wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>(
    (wil::details **)this + 3,
    a2);
  wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>(
    (wil::details **)this + 2,
    v6);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
    (wil::details **)this + 1,
    v7);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
    (wil::details **)this,
    v8);
}
