/*
 * XREFs of ??$get_activation_factory@UIDispatcherQueueControllerStatics@Dispatching@UI@Microsoft@winrt@@@winrt@@YA?AUIDispatcherQueueControllerStatics@Dispatching@UI@Microsoft@0@AEBUhstring@param@0@@Z @ 0x18002EA90
 * Callers:
 *     ??$call@P6A?AUDispatcherQueueController@Dispatching@UI@Microsoft@winrt@@AEBUIDispatcherQueueControllerStatics@2345@@Z@?$factory_cache_entry@UDispatcherQueueController@Dispatching@UI@Microsoft@winrt@@UIDispatcherQueueControllerStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUDispatcherQueueController@Dispatching@UI@Microsoft@2@AEBUIDispatcherQueueControllerStatics@4562@@Z@Z @ 0x18002E960 (--$call@P6A-AUDispatcherQueueController@Dispatching@UI@Microsoft@winrt@@AEBUIDispatcherQueueCont.c)
 * Callees:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800B4384 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *result; // rax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF

  v5 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v4,
    a2,
    &winrt::impl::guid_v<winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics>,
    &v5);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  result = a1;
  *a1 = v5;
  return result;
}
