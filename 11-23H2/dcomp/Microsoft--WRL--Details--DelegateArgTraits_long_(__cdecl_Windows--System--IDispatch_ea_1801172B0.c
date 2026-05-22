/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::System::IDispatcherQueueHandler::_)(void)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::System::IDispatcherQueueHandler_Microsoft::WRL::FtmBase___lambda_5b9ed54f858535c6691bad576f69a793__&__1_::Invoke @ 0x1801172B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ChangeState@HolographicCompositor@Internal@Composition@UI@Windows@@AEAAXJ@Z @ 0x180115F4C (-ChangeState@HolographicCompositor@Internal@Composition@UI@Windows@@AEAAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::System::IDispatcherQueueHandler::___void__::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::System::IDispatcherQueueHandler_Microsoft::WRL::FtmBase___lambda_5b9ed54f858535c6691bad576f69a793_____1_::Invoke(
        __int64 a1)
{
  Windows::UI::Composition::Internal::HolographicCompositor::ChangeState(
    *(Windows::UI::Composition::Internal::HolographicCompositor **)(a1 + 72),
    *(_DWORD *)(a1 + 64));
  return 0LL;
}
