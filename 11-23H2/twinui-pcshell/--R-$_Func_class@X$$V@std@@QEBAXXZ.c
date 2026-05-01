/*
 * XREFs of ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x180067A6C
 * Callers:
 *     ?EnableTouchGestures@TouchGestureSettings@@AEAAXXZ @ 0x180067A08 (-EnableTouchGestures@TouchGestureSettings@@AEAAXXZ.c)
 *     ?DisableTouchGestures@TouchGestureSettings@@AEAAXXZ @ 0x180067A3C (-DisableTouchGestures@TouchGestureSettings@@AEAAXXZ.c)
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1 @ 0x1802106D0 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync$_ResumeCoro$1 @ 0x18021FA90 (TouchEdgeGripperHost--NotifyGripperDismissedIfNecessaryAsync$_ResumeCoro$1.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_8ee7d66042e48d98bb41283a1a194426___::Invoke @ 0x180559730 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_180559730.c)
 *     _lambda_3ef64bf90f44864a6bd4620ac4549ef0_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18064E45C (_lambda_3ef64bf90f44864a6bd4620ac4549ef0_--operator()_winrt--Windows--UI--Internal--Input--Shell.c)
 *     ?ProcessUpEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Windows@winrt@@@Z @ 0x180651638 (-ProcessUpEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Wind.c)
 *     ?OnTransitionScreenDismissed@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x180733B08 (-OnTransitionScreenDismissed@RemoteSessionInformation@implementation@Shell@Internal@Windows@winr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_class<void,>::operator()(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  if ( !v1 )
  {
    std::_Xbad_function_call();
    __debugbreak();
    JUMPOUT(0x180342CB9LL);
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
