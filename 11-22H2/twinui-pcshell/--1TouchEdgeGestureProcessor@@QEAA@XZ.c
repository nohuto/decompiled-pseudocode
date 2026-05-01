/*
 * XREFs of ??1TouchEdgeGestureProcessor@@QEAA@XZ @ 0x180144D38
 * Callers:
 *     ??1TouchEdgeGestureManager@@UEAA@XZ @ 0x180142CD8 (--1TouchEdgeGestureManager@@UEAA@XZ.c)
 *     _TouchEdgeGestureManager::TouchEdgeGestureManager_::_1_::dtor$8 @ 0x1802B662D (_TouchEdgeGestureManager--TouchEdgeGestureManager_--_1_--dtor$8.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800A650C (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?UpdateTouchEdgeGestureRegistration@TouchEdgeGestureProcessor@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x18016D658 (-UpdateTouchEdgeGestureRegistration@TouchEdgeGestureProcessor@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 */

void __fastcall TouchEdgeGestureProcessor::~TouchEdgeGestureProcessor(TouchEdgeGestureProcessor *this, __int64 a2)
{
  winrt::Windows::Foundation::IUnknown *v3; // rdi
  struct wil::details::wnf_subscription_state_base *v4; // rdx
  wil::details *v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = (TouchEdgeGestureProcessor *)((char *)this + 104);
  if ( *((_QWORD *)this + 13) )
  {
    TouchEdgeGestureProcessor::UpdateTouchEdgeGestureRegistration(this, 0LL);
    v6 = 0LL;
    winrt::Windows::Foundation::IUnknown::operator=(v3, &v6);
    if ( v6 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  }
  if ( *((_QWORD *)this + 14) )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((TouchEdgeGestureProcessor *)((char *)this + 112));
  if ( *(_QWORD *)v3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v3);
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    (__int64)this + 24,
    a2);
  v5 = (wil::details *)*((_QWORD *)this + 2);
  if ( v5 )
    wil::details::delete_wnf_subscription_state(v5, v4);
  if ( *((_QWORD *)this + 1) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 1);
  if ( *(_QWORD *)this )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this);
}
