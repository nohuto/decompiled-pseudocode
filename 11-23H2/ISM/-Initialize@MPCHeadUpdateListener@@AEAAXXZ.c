/*
 * XREFs of ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x1800D21E0
 * Callers:
 *     std::call_once__lambda_a860493e5708769190ef41fba30dc41a___ @ 0x1800D1CC0 (std--call_once__lambda_a860493e5708769190ef41fba30dc41a___.c)
 * Callees:
 *     ?Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ @ 0x180041104 (-Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ.c)
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x18004BD44 (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??1?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@QEAA@XZ @ 0x1800921C8 (--1-$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@QEAA@XZ.c)
 *     ?GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800A7248 (-GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800D2054 (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z @ 0x1800D2300 (-On3DCompositorRunningChanged@MPCHeadUpdateListener@@AEAAX_N@Z.c)
 *     ?create@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x1800D2AC4 (-create@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUevent_watcher_state@23@@Z @ 0x1800D2E60 (-reset@-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCHeadUpdateListener::Initialize(MPCHeadUpdateListener *this)
{
  MPCHeadUpdateListener *v1; // rbx
  void *v2; // rdx
  wil::details::event_watcher_state *v3; // rcx
  RTL_SRWLOCK *InstanceOffInputThread; // rax
  RTL_SRWLOCK *v5; // rax
  char v6; // [rsp+20h] [rbp-49h]
  wil::details::event_watcher_state *v7; // [rsp+28h] [rbp-41h] BYREF
  void **v8; // [rsp+30h] [rbp-39h] BYREF
  __int64 (__fastcall **v9)(); // [rsp+38h] [rbp-31h] BYREF
  char v10; // [rsp+40h] [rbp-29h]
  MPCHeadUpdateListener *v11; // [rsp+48h] [rbp-21h]
  void ***v12; // [rsp+68h] [rbp-1h]
  __int64 (__fastcall ***v13)(); // [rsp+A0h] [rbp+37h]

  v1 = MPCHeadUpdateListener::s_instance;
  v9 = off_1801FD528;
  v13 = &v9;
  v7 = 0LL;
  wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_exception_policy>::create(
    &v7,
    &v8);
  if ( (wil::details::event_watcher_state **)((char *)v1 + 72) == &v7 )
  {
    v3 = v7;
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>::reset(
      (char *)v1 + 72,
      v7);
    v3 = 0LL;
  }
  if ( v3 )
    wil::details::event_watcher_state::`scalar deleting destructor'(v3, v2);
  wistd::function<void (enum wil::RegistryChangeKind)>::~function<void (enum wil::RegistryChangeKind)>((__int64)&v8);
  InstanceOffInputThread = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstanceOffInputThread();
  v8 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (MPCHeadUpdateListener::*)(bool),MPCHeadUpdateListener *,std::_Ph<1> const &>,void,bool>::`vftable';
  v9 = (__int64 (__fastcall **)())MPCHeadUpdateListener::On3DCompositorRunningChanged;
  v10 = v6;
  v11 = v1;
  v12 = &v8;
  MPC3DStateHelper::RegisterFor3DCompositorRunningChanged(InstanceOffInputThread, (__int64)&v8, (_DWORD *)v1 + 51);
  v5 = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstanceOffInputThread();
  if ( MPC3DStateHelper::Is3DCompositorRunning(v5) )
    MPCHeadUpdateListener::On3DCompositorRunningChanged(v1, 1);
}
