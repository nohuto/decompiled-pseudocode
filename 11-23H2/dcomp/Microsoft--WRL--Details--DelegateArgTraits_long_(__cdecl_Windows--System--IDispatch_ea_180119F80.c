/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::System::IDispatcherQueueHandler::_)(void)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::System::IDispatcherQueueHandler_Microsoft::WRL::FtmBase___lambda_0503c03458151d77f0968d2fc1c55318__&__1_::Invoke @ 0x180119F80
 * Callers:
 *     <none>
 * Callees:
 *     ?ChangeState@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@AEAAXJ@Z @ 0x1801196C4 (-ChangeState@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@AEAAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::System::IDispatcherQueueHandler::___void__::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::System::IDispatcherQueueHandler_Microsoft::WRL::FtmBase___lambda_0503c03458151d77f0968d2fc1c55318_____1_::Invoke(
        __int64 a1)
{
  Windows::UI::Composition::Internal::HolographicCompositionDisplay::ChangeState(
    *(Windows::UI::Composition::Internal::HolographicCompositionDisplay **)(a1 + 72),
    *(_DWORD *)(a1 + 64));
  return 0LL;
}
