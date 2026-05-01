/*
 * XREFs of _lambda_645383672cc8ef3abc3762ef416a0823_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18064E5A0
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Internal::Input::ShellGesturesController_winrt::Windows::UI::Core::PointerEventArgs___lambda_645383672cc8ef3abc3762ef416a0823___::Invoke @ 0x180650BC0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_180650BC0.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?get@?$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z @ 0x18016D9D8 (-get@-$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?CurrentPoint@?$consume_Windows_UI_Core_IPointerEventArgs@UIPointerEventArgs@Core@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18065000C (-CurrentPoint@-$consume_Windows_UI_Core_IPointerEventArgs@UIPointerEventArgs@Core@UI@Windows@win.c)
 *     ?PointerId@?$consume_Windows_UI_Input_IPointerPoint@UIPointerPoint@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180650DBC (-PointerId@-$consume_Windows_UI_Input_IPointerPoint@UIPointerPoint@Input@UI@Windows@winrt@@@impl.c)
 *     ?ProcessDownEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Windows@winrt@@@Z @ 0x1806515A4 (-ProcessDownEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Wi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_645383672cc8ef3abc3762ef416a0823_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_(
        TouchGestureProcessor **a1,
        __int64 a2,
        __int64 a3)
{
  TouchGestureProcessor *v4; // rbx
  signed int v5; // eax
  int v6; // ebx
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  __int64 v9; // [rsp+30h] [rbp-58h] BYREF
  TouchGestureProcessor **v10; // [rsp+38h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+40h] [rbp-48h] BYREF
  TouchGestureProcessor ***v12; // [rsp+60h] [rbp-28h]
  int v13; // [rsp+68h] [rbp-20h]
  int v14; // [rsp+6Ch] [rbp-1Ch]

  v10 = a1;
  winrt::impl::consume_Windows_UI_Core_IPointerEventArgs<winrt::Windows::UI::Core::IPointerEventArgs>::CurrentPoint(
    a3,
    &v9);
  v4 = *a1;
  TouchGestureProcessor::PointerEventsDetector::ProcessDownEvent(
    (TouchGestureProcessor *)((char *)v4 + 112),
    (const struct winrt::Windows::UI::Input::PointerPoint *)&v9);
  if ( !*((_BYTE *)v4 + 104) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v4 + 4) + 192LL))(*((_QWORD *)v4 + 4), v9);
    try
    {
      if ( v5 < 0 )
        winrt::throw_hresult(v5);
    }
    catch ( ... )
    {
      TouchGestureProcessor::HandleRecognizerException(*v10);
    }
  }
  v6 = winrt::impl::consume_Windows_UI_Input_IPointerPoint<winrt::Windows::UI::Input::IPointerPoint>::PointerId(&v9);
  v8 = (_DWORD *)wil::details::static_lazy<TouchGestureLogging>::get(
                   v7,
                   (void (__cdecl *)())_lambda_74816e0b9ff772b7cfffc4dc29af72c4_::_lambda_invoker_cdecl_)[1];
  if ( *v8 > 5u )
  {
    LODWORD(v10) = v6;
    v12 = &v10;
    v13 = 4;
    v14 = 0;
    tlgWriteTransfer_EventWriteTransfer((__int64)v8, (unsigned __int8 *)dword_18087127F, 0LL, 0LL, 3u, &v11);
  }
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
}
