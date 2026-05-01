/*
 * XREFs of ??$get_activation_factory@UIDispatcherQueueControllerStatics@System@Windows@winrt@@@winrt@@YA?AUIDispatcherQueueControllerStatics@System@Windows@0@AEBUhstring@param@0@@Z @ 0x180068120
 * Callers:
 *     ??$call@P6A?AUDispatcherQueueController@System@Windows@winrt@@AEBUIDispatcherQueueControllerStatics@234@@Z@?$factory_cache_entry@UDispatcherQueueController@System@Windows@winrt@@UIDispatcherQueueControllerStatics@234@@impl@winrt@@QEAA?AUDispatcherQueueController@System@Windows@2@$$QEAP6A?AU3452@AEBUIDispatcherQueueControllerStatics@452@@Z@Z @ 0x180068000 (--$call@P6A-AUDispatcherQueueController@System@Windows@winrt@@AEBUIDispatcherQueueControllerStat.c)
 * Callees:
 *     ??$get_runtime_activation_factory@UIDispatcherQueueControllerStatics@System@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x180068D40 (--$get_runtime_activation_factory@UIDispatcherQueueControllerStatics@System@Windows@winrt@@@impl.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::System::IDispatcherQueueControllerStatics>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rcx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(unsigned int *)winrt::impl::get_runtime_activation_factory<winrt::Windows::System::IDispatcherQueueControllerStatics>(
                          &v5,
                          a2,
                          &v6);
  if ( (int)v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
