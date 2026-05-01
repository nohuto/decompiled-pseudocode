/*
 * XREFs of ??4?$function@$$A6AXPEAUHWND__@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18054C844
 * Callers:
 *     ?InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x18054EEE0 (-InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Inp.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Reset_move@?$_Func_class@XPEAUHWND__@@@std@@IEAAX$$QEAV12@@Z @ 0x18051C908 (-_Reset_move@-$_Func_class@XPEAUHWND__@@@std@@IEAAX$$QEAV12@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<void (HWND__ *)>::operator=(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rax
  __int64 (__fastcall ***v4)(_QWORD, _BYTE *); // rcx
  __int64 v5; // rdx
  _BYTE v7[56]; // [rsp+20h] [rbp-39h] BYREF
  _BYTE *v8; // [rsp+58h] [rbp-1h]
  _BYTE v9[56]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v10; // [rsp+98h] [rbp+3Fh]

  v3 = 0LL;
  v8 = 0LL;
  v4 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v4 )
  {
    v3 = (_BYTE *)(**v4)(v4, v7);
    v8 = v3;
  }
  if ( v3 == v7 || *(_QWORD *)(a1 + 56) == a1 )
  {
    v10 = 0LL;
    std::_Func_class<void,HWND__ *>::_Reset_move((__int64)v9, (__int64)v7);
    std::_Func_class<void,HWND__ *>::_Reset_move((__int64)v7, a1);
    std::_Func_class<void,HWND__ *>::_Reset_move(a1, (__int64)v9);
    std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
      (__int64)v9,
      v5);
  }
  else
  {
    v8 = *(_BYTE **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v3;
  }
  std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
    (__int64)v7,
    a2);
  return a1;
}
