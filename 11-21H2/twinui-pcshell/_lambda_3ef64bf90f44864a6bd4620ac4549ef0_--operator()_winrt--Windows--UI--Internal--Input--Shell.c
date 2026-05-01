/*
 * XREFs of _lambda_3ef64bf90f44864a6bd4620ac4549ef0_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18058CA54
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Internal::Input::ShellGesturesController_winrt::Windows::UI::Core::PointerEventArgs___lambda_3ef64bf90f44864a6bd4620ac4549ef0___::Invoke @ 0x18058EB00 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_18058EB00.c)
 * Callees:
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x18003ACEC (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180452808 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ?GetIntermediatePoints@?$consume_Windows_UI_Core_IPointerEventArgs@UIPointerEventArgs@Core@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$IVector@UPointerPoint@Input@UI@Windows@winrt@@@Collections@Foundation@Windows@3@XZ @ 0x18058E6A0 (-GetIntermediatePoints@-$consume_Windows_UI_Core_IPointerEventArgs@UIPointerEventArgs@Core@UI@Wi.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1805F5290 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_3ef64bf90f44864a6bd4620ac4549ef0_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_(
        TouchGestureProcessor **a1,
        __int64 a2,
        __int64 a3)
{
  TouchGestureProcessor **v3; // rdi
  __int64 v4; // rbx
  signed int v5; // eax
  TouchGestureProcessor *v6; // rdi
  TouchGestureProcessor **v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v7 = a1;
  v3 = a1;
  winrt::impl::consume_Windows_UI_Core_IPointerEventArgs<winrt::Windows::UI::Core::IPointerEventArgs>::GetIntermediatePoints(
    a3,
    &v8);
  if ( *((_BYTE *)*v3 + 104) )
  {
LABEL_5:
    v4 = v8;
  }
  else
  {
    v4 = v8;
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)*v3 + 4) + 200LL))(*((_QWORD *)*v3 + 4), v8);
    try
    {
      if ( v5 < 0 )
        winrt::throw_hresult(v5);
    }
    catch ( ... )
    {
      TouchGestureProcessor::HandleRecognizerException(*v7);
      v3 = v7;
      goto LABEL_5;
    }
  }
  v6 = *v3;
  if ( *((_QWORD *)v6 + 16) )
  {
    if ( *((_BYTE *)v6 + 269) )
    {
      if ( !*((_BYTE *)v6 + 268) )
      {
        std::chrono::steady_clock::now(&v7);
        if ( (__int64)v7 - *((_QWORD *)v6 + 14) >= 101000000 )
        {
          *((_DWORD *)v6 + 66) = *((_DWORD *)v6 + 32);
          if ( *((_QWORD *)v6 + 24) )
            std::_Func_class<void,>::operator()((__int64)v6 + 136);
          *((_BYTE *)v6 + 268) = 1;
        }
      }
    }
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgs();
  }
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
}
