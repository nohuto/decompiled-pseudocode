/*
 * XREFs of std::call_once__lambda_2ab80ba63dcc212dafbb4e4695138308___ @ 0x1801E96D0
 * Callers:
 *     ?RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801EDA08 (-RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x180041C68 (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??1?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@QEAA@XZ @ 0x1800A4DD4 (--1-$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@QEAA@XZ.c)
 *     ?UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ @ 0x1801EE79C (-UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ.c)
 *     ?create@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEAUHKEY__@@PEBG_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1801EFB5C (-create@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@det.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUregistry_watcher_state@23@@Z @ 0x1801EFE6C (-reset@-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@.c)
 */

// Hidden C++ exception states: #wind=2
void std::call_once__lambda_2ab80ba63dcc212dafbb4e4695138308___()
{
  int v0; // edx
  int v1; // r8d
  int v2; // r9d
  WINBOOL fPending; // [rsp+30h] [rbp-59h] BYREF
  __int64 v4; // [rsp+38h] [rbp-51h] BYREF
  union _RTL_RUN_ONCE *v5; // [rsp+40h] [rbp-49h] BYREF
  int v6; // [rsp+48h] [rbp-41h]
  _BYTE v7[8]; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v8[15]; // [rsp+58h] [rbp-31h] BYREF

  if ( !__std_init_once_begin_initialize(&MPCSixDofProcessor::s_registryWatcherCreated, 0, &fPending, 0LL) )
    abort();
  if ( fPending )
  {
    v5 = &MPCSixDofProcessor::s_registryWatcherCreated;
    v6 = 4;
    MPCSixDofProcessor::UpdateRegistryTuneables();
    v8[0] = off_18020D5B8;
    v8[13] = v8;
    v4 = 0LL;
    wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
      (unsigned int)&v4,
      v0,
      v1,
      v2,
      (__int64)v7);
    wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::reset(
      &MPCSixDofProcessor::s_registryWatcher,
      v4);
    wistd::function<void (enum wil::RegistryChangeKind)>::~function<void (enum wil::RegistryChangeKind)>((__int64)v7);
    v6 = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v5);
  }
}
