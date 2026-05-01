/*
 * XREFs of ??1?$com_ptr@VTouchEdgeGripperHost@@@winrt@@QEAA@XZ @ 0x18064C968
 * Callers:
 *     _TouchEdgeGripperHost::CreateGripperWindowAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x18021EFA9 (_TouchEdgeGripperHost--CreateGripperWindowAsync$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _TouchEdgeGripperHost::DismissGripperWindowAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x18021F54D (_TouchEdgeGripperHost--DismissGripperWindowAsync$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _TouchEdgeGripperHost::DismissGripperWindowAsync$_ResumeCoro$1_::_1_::dtor$5 @ 0x18021F5C8 (_TouchEdgeGripperHost--DismissGripperWindowAsync$_ResumeCoro$1_--_1_--dtor$5.c)
 *     _TouchEdgeGripperHost::HideGripperAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x18021F8EC (_TouchEdgeGripperHost--HideGripperAsync$_ResumeCoro$1_--_1_--dtor$0.c)
 *     _TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x18021FBBC (_TouchEdgeGripperHost--NotifyGripperDismissedIfNecessaryAsync$_ResumeCoro$1_--_1_--dtor$0.c)
 *     _TouchEdgeGripperHost::NotifyGripperPressedAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x18021FE9C (_TouchEdgeGripperHost--NotifyGripperPressedAsync$_ResumeCoro$1_--_1_--dtor$0.c)
 *     _TouchEdgeGripperHost::ShowGripperAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1802201DC (_TouchEdgeGripperHost--ShowGripperAsync$_ResumeCoro$1_--_1_--dtor$0.c)
 *     _TouchEdgeGestureManager::TouchEdgeGestureManager_::_1_::dtor$7 @ 0x1802B6617 (_TouchEdgeGestureManager--TouchEdgeGestureManager_--_1_--dtor$7.c)
 *     __lambda_7c27b082a2d594abdbf5dd9e5359180a_::_lambda_invoker_cdecl__::_1_::dtor$0 @ 0x180656306 (__lambda_7c27b082a2d594abdbf5dd9e5359180a_--_lambda_invoker_cdecl__--_1_--dtor$0.c)
 *     __lambda_e0b0b8eaa13602b9fabc447bd0975459_::operator()_winrt::Windows::System::Threading::ThreadPoolTimer_const_&__::_1_::dtor$0 @ 0x180656436 (__lambda_e0b0b8eaa13602b9fabc447bd0975459_--operator()_winrt--Windows--System--Threading--Thread.c)
 *     _TouchEdgeGripperHost::EnsureXamlHostThreadStarted_::_1_::dtor$0 @ 0x1806569FB (_TouchEdgeGripperHost--EnsureXamlHostThreadStarted_--_1_--dtor$0.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ @ 0x180182FBC (-unconditional_release_ref@-$com_ptr@VTouchEdgeGripperHost@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<TouchEdgeGripperHost>::~com_ptr<TouchEdgeGripperHost>(volatile __int64 **a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<TouchEdgeGripperHost>::unconditional_release_ref(a1);
  return result;
}
