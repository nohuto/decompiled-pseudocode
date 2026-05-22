/*
 * XREFs of ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x1800B9320
 * Callers:
 *     std::call_once__lambda_a860493e5708769190ef41fba30dc41a___ @ 0x1800B8DEC (std--call_once__lambda_a860493e5708769190ef41fba30dc41a___.c)
 * Callees:
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x18002D4B4 (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??1?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@QEAA@XZ @ 0x18007B37C (--1-$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@QEAA@XZ.c)
 *     ?GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ @ 0x180090B8C (-GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ @ 0x180090C68 (-Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800B90C4 (--1-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1-del.c)
 *     ?On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z @ 0x1800B9440 (-On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z.c)
 *     ?create@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x1800B9BF4 (-create@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUevent_watcher_state@23@@Z @ 0x1800B9F98 (-reset@-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCHeadUpdateListener::Initialize(MPCHeadUpdateListener *this)
{
  MPCHeadUpdateListener *v1; // rbx
  struct wil::details::event_watcher_state *v2; // rdx
  RTL_SRWLOCK *InstanceOffInputThread; // rax
  RTL_SRWLOCK *v4; // rax
  char v5; // [rsp+20h] [rbp-49h]
  wil::details *v6; // [rsp+28h] [rbp-41h] BYREF
  void **v7; // [rsp+30h] [rbp-39h] BYREF
  __int64 (__fastcall **v8)(); // [rsp+38h] [rbp-31h] BYREF
  char v9; // [rsp+40h] [rbp-29h]
  MPCHeadUpdateListener *v10; // [rsp+48h] [rbp-21h]
  void ***v11; // [rsp+68h] [rbp-1h]
  __int64 (__fastcall ***v12)(); // [rsp+A0h] [rbp+37h]

  v1 = MPCHeadUpdateListener::s_instance;
  v8 = off_1801DE440;
  v12 = &v8;
  v6 = 0LL;
  wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_exception_policy>::create(
    &v6,
    &v7);
  if ( (wil::details **)((char *)v1 + 72) != &v6 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>::reset(
      (char *)v1 + 72,
      v6);
    v6 = 0LL;
  }
  wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>(
    &v6,
    v2);
  wistd::function<void (enum wil::RegistryChangeKind)>::~function<void (enum wil::RegistryChangeKind)>((__int64)&v7);
  InstanceOffInputThread = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstanceOffInputThread();
  v7 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (MPCHeadUpdateListener::*)(bool),MPCHeadUpdateListener *,std::_Ph<1> const &>,void,bool>::`vftable';
  v8 = (__int64 (__fastcall **)())MPCHeadUpdateListener::On3DCompositorRunningChanged;
  v9 = v5;
  v10 = v1;
  v11 = &v7;
  MPC3DStateHelper::RegisterFor3DCompositorRunningChanged(InstanceOffInputThread, (__int64)&v7, (_DWORD *)v1 + 51);
  v4 = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstanceOffInputThread();
  if ( MPC3DStateHelper::Is3DCompositorRunning(v4) )
    MPCHeadUpdateListener::On3DCompositorRunningChanged(v1, 1);
}
