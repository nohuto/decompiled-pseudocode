/*
 * XREFs of ??$get_activation_factory@UIDispatcherQueueStatics@System@Windows@winrt@@@winrt@@YA?AUIDispatcherQueueStatics@System@Windows@0@AEBUhstring@param@0@@Z @ 0x1805ADD90
 * Callers:
 *     ??$call@P6A?AUDispatcherQueue@System@Windows@winrt@@AEBUIDispatcherQueueStatics@234@@Z@?$factory_cache_entry@UDispatcherQueue@System@Windows@winrt@@UIDispatcherQueueStatics@234@@impl@winrt@@QEAA?AUDispatcherQueue@System@Windows@2@$$QEAP6A?AU3452@AEBUIDispatcherQueueStatics@452@@Z@Z @ 0x1805ADC00 (--$call@P6A-AUDispatcherQueue@System@Windows@winrt@@AEBUIDispatcherQueueStatics@234@@Z@-$factory.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$get_runtime_activation_factory@UIDispatcherQueueStatics@System@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1805ADDD4 (--$get_runtime_activation_factory@UIDispatcherQueueStatics@System@Windows@winrt@@@impl@winrt@@YA.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::System::IDispatcherQueueStatics>(
        _QWORD *a1,
        __int64 a2)
{
  signed int v3; // ecx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(_DWORD *)winrt::impl::get_runtime_activation_factory<winrt::Windows::System::IDispatcherQueueStatics>(
                    &v5,
                    a2,
                    &v6);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
