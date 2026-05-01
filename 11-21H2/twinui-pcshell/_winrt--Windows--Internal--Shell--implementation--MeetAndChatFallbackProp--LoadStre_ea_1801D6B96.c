/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp::LoadStreamAsync$_ResumeCoro$1_::_1_::catch$13 @ 0x1801D6B96
 * Callers:
 *     <none>
 * Callees:
 *     ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x18041F214 (-unhandled_exception@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Founda.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp::LoadStreamAsync__ResumeCoro_1_::_1_::catch_13(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a2 + 96);
  *(_WORD *)(v2 + 8) = -1;
  *(_QWORD *)(v2 + 256) = v2 - 96;
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,void>::unhandled_exception();
  return 0LL;
}
