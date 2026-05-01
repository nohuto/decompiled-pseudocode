/*
 * XREFs of ?CreateOnDedicatedThread@DispatcherQueueController@System@Windows@winrt@@SA@XZ @ 0x1800AF65C
 * Callers:
 *     ??0WindowsTracker@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800AF4D8 (--0WindowsTracker@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??$call@P6A?AUDispatcherQueueController@System@Windows@winrt@@AEBUIDispatcherQueueControllerStatics@234@@Z@?$factory_cache_entry@UDispatcherQueueController@System@Windows@winrt@@UIDispatcherQueueControllerStatics@234@@impl@winrt@@QEAA?A_P$$QEAP6A?AUDispatcherQueueController@System@Windows@2@AEBUIDispatcherQueueControllerStatics@452@@Z@Z @ 0x1800AEE3C (--$call@P6A-AUDispatcherQueueController@System@Windows@winrt@@AEBUIDispatcherQueueControllerStat.c)
 *     ?CreateOnDedicatedThread@?$consume_Windows_System_IDispatcherQueueControllerStatics@UIDispatcherQueueControllerStatics@System@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801B3878 (-CreateOnDedicatedThread@-$consume_Windows_System_IDispatcherQueueControllerStatics@UIDispatcher.c)
 */

// Hidden C++ exception states: #wind=1
void (__fastcall ***__fastcall winrt::Windows::System::DispatcherQueueController::CreateOnDedicatedThread(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *)))(_QWORD, __int64 *, __int64 *)
{
  __int64 (__fastcall *v3)(const struct winrt::Windows::System::IDispatcherQueueControllerStatics *); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18098E028);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::DispatcherQueueController,winrt::Windows::System::IDispatcherQueueControllerStatics> )
  {
    winrt::impl::consume_Windows_System_IDispatcherQueueControllerStatics<winrt::Windows::System::IDispatcherQueueControllerStatics>::CreateOnDedicatedThread(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::System::DispatcherQueueController,winrt::Windows::System::IDispatcherQueueControllerStatics>,
      a1);
    _InterlockedDecrement64(&qword_18098E028);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E028);
    v3 = _lambda_e9bebc7f8c018e57c97e4fe07c36625e_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::System::DispatcherQueueController,winrt::Windows::System::IDispatcherQueueControllerStatics>::call<winrt::Windows::System::DispatcherQueueController (*)(winrt::Windows::System::IDispatcherQueueControllerStatics const &)>(
      a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return a1;
}
