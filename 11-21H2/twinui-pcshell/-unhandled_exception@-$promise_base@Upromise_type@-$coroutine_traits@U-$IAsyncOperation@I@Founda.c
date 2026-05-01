/*
 * XREFs of ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x18041F214
 * Callers:
 *     _XamlExplorerHostShellComponent::WaitForInitializationAsyncHelper$_ResumeCoro$1_::_1_::catch$7 @ 0x1801A962C (_XamlExplorerHostShellComponent--WaitForInitializationAsyncHelper$_ResumeCoro$1_--_1_--catch$7.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_ResumeCoro$1_::_1_::catch$16 @ 0x1801B8AF0 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1801B8AF0.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::InsertAsync$_ResumeCoro$1_::_1_::catch$8 @ 0x1801B8F74 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1801B8F74.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::IsSupportedAsync$_ResumeCoro$1_::_1_::catch$8 @ 0x1801B93E4 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1801B93E4.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1_::_1_::catch$83 @ 0x1801BA0F2 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1801BA0F2.c)
 *     _winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference____::_1_::catch$13 @ 0x1801BAE50 (_winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncOperation_winrt--W_ea_1801BAE50.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$1_::_1_::catch$27 @ 0x1801BE226 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumb_ea_1801BE226.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1_::_1_::catch$30 @ 0x1801D248C (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCur_ea_1801D248C.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_ResumeCoro$1_::_1_::catch$27 @ 0x1801D6242 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--GetFallbackConte_ea_1801D6242.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp::LoadStreamAsync$_ResumeCoro$1_::_1_::catch$13 @ 0x1801D6B96 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatFallbackProp--LoadStre_ea_1801D6B96.c)
 *     _CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1_::_1_::catch$54 @ 0x1801D9B2E (_CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1_--_1_--catch$54.c)
 * Callees:
 *     ??0slim_lock_guard@winrt@@QEAA@AEAUslim_mutex@1@@Z @ 0x180341628 (--0slim_lock_guard@winrt@@QEAA@AEAUslim_mutex@1@@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18041CF04 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ??4exception_ptr@std@@QEAAAEAV01@AEBV01@@Z @ 0x18041D194 (--4exception_ptr@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?current_exception@std@@YA?AVexception_ptr@1@XZ @ 0x18041EAD4 (-current_exception@std@@YA-AVexception_ptr@1@XZ.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18041F138 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,void>::unhandled_exception(
        __int64 a1)
{
  void *v2; // rax
  std::exception_ptr *v3; // rcx
  _BYTE v4[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+10h] BYREF

  winrt::slim_lock_guard::slim_lock_guard((winrt::slim_lock_guard *)&SRWLock, (RTL_SRWLOCK *)(a1 + 48));
  v2 = std::current_exception(v4);
  std::exception_ptr::operator=((void *)(a1 + 32), v2);
  __ExceptionPtrDestroy(v4);
  v3 = std::exception_ptr::exception_ptr((std::exception_ptr *)v5, (const struct std::exception_ptr *)(a1 + 32));
  try
  {
    std::rethrow_exception(v3);
  }
  catch ( winrt::hresult_canceled )
  {
    *(_DWORD *)(a1 + 88) = 2;
  }
  catch ( ... )
  {
    *(_DWORD *)(a1 + 88) = 3;
  }
  ReleaseSRWLockExclusive_0(SRWLock);
}
