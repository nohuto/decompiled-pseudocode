/*
 * XREFs of ?CreateOnCurrentThread@DispatcherQueueController@Dispatching@UI@Microsoft@winrt@@SA@XZ @ 0x1804F56B4
 * Callers:
 *     ??0?$heap_implements@UWASDKInitializationWrapper@@@impl@winrt@@QEAA@XZ @ 0x1801F9CD0 (--0-$heap_implements@UWASDKInitializationWrapper@@@impl@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??$call@P6A?AUDispatcherQueueController@Dispatching@UI@Microsoft@winrt@@AEBUIDispatcherQueueControllerStatics@2345@@Z@?$factory_cache_entry@UDispatcherQueueController@Dispatching@UI@Microsoft@winrt@@UIDispatcherQueueControllerStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUDispatcherQueueController@Dispatching@UI@Microsoft@2@AEBUIDispatcherQueueControllerStatics@4562@@Z@Z @ 0x18002E960 (--$call@P6A-AUDispatcherQueueController@Dispatching@UI@Microsoft@winrt@@AEBUIDispatcherQueueCont.c)
 *     ?CreateOnCurrentThread@?$consume_Microsoft_UI_Dispatching_IDispatcherQueueControllerStatics@UIDispatcherQueueControllerStatics@Dispatching@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x18006FA18 (-CreateOnCurrentThread@-$consume_Microsoft_UI_Dispatching_IDispatcherQueueControllerStatics@UIDi.c)
 */

_QWORD *__fastcall winrt::Microsoft::UI::Dispatching::DispatcherQueueController::CreateOnCurrentThread(_QWORD *a1)
{
  const struct winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics *(__fastcall *v3)(const struct winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics *, __int64); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18098E788);
  if ( winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Dispatching::DispatcherQueueController,winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics> )
  {
    winrt::impl::consume_Microsoft_UI_Dispatching_IDispatcherQueueControllerStatics<winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics>::CreateOnCurrentThread(
      &winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Dispatching::DispatcherQueueController,winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics>,
      a1);
    _InterlockedDecrement64(&qword_18098E788);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E788);
    v3 = _lambda_c249d9825049da1bbe9da1573b280fea_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Microsoft::UI::Dispatching::DispatcherQueueController,winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics>::call<winrt::Microsoft::UI::Dispatching::DispatcherQueueController (*)(winrt::Microsoft::UI::Dispatching::IDispatcherQueueControllerStatics const &)>(
      (__int64)a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return a1;
}
