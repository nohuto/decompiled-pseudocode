/*
 * XREFs of ?ReceivedHitTestResult@OnArrangementReset@WindowDragInputProviderTelemetry@@QEAAXAEBUWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18068BD34
 * Callers:
 *     ?OnArrangementReset@WindowDragInputProvider@@AEAAXAEBUtagSHELL_WND_MGMT_SIMPLE_PAYLOAD@@@Z @ 0x18068B628 (-OnArrangementReset@WindowDragInputProvider@@AEAAXAEBUtagSHELL_WND_MGMT_SIMPLE_PAYLOAD@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444444@Z @ 0x1805AAADC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWri.c)
 *     ?WindowPosition@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18066583C (-WindowPosition@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult.c)
 *     ?WindowAction@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18067D1AC (-WindowAction@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@S.c)
 *     ?NotificationBoundary@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18068B5E0 (-NotificationBoundary@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTest.c)
 *     ?ShouldShowThumbnail@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18068BF40 (-ShouldShowThumbnail@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestR.c)
 */

void __fastcall WindowDragInputProviderTelemetry::OnArrangementReset::ReceivedHitTestResult(
        WindowDragInputProviderTelemetry::OnArrangementReset *this,
        const struct winrt::WindowsUdk::UI::Shell::WindowDragHitTestResult *a2)
{
  _DWORD *v4; // rbx
  _OWORD *v5; // rax
  const GUID *v6; // r8
  __int64 v7; // r9
  int v8; // [rsp+80h] [rbp-80h] BYREF
  int v9; // [rsp+84h] [rbp-7Ch] BYREF
  int v10; // [rsp+88h] [rbp-78h] BYREF
  int v11; // [rsp+8Ch] [rbp-74h] BYREF
  int v12; // [rsp+90h] [rbp-70h] BYREF
  int v13; // [rsp+94h] [rbp-6Ch] BYREF
  int v14; // [rsp+98h] [rbp-68h] BYREF
  __int64 v15; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v16; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v17; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v18; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v19; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v20; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v21; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v22; // [rsp+108h] [rbp+8h] BYREF
  __int128 v23; // [rsp+118h] [rbp+18h] BYREF
  int ShouldShowThumbnail; // [rsp+150h] [rbp+50h] BYREF
  int v25; // [rsp+160h] [rbp+60h] BYREF
  int v26; // [rsp+168h] [rbp+68h] BYREF

  v4 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 5u )
  {
    ShouldShowThumbnail = (unsigned __int8)winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::ShouldShowThumbnail(a2);
    v25 = winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowAction((__int64 *)a2);
    v26 = *((_DWORD *)winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowPosition(
                        a2,
                        &v16)
          + 3);
    v8 = *((_DWORD *)winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowPosition(
                       a2,
                       &v17)
         + 2);
    v9 = *((_DWORD *)winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowPosition(
                       a2,
                       &v18)
         + 1);
    v10 = *(_DWORD *)winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowPosition(
                       a2,
                       &v19);
    v11 = *((_DWORD *)winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::NotificationBoundary(
                        a2,
                        &v20)
          + 3);
    v12 = *((_DWORD *)winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::NotificationBoundary(
                        a2,
                        &v21)
          + 2);
    v13 = *((_DWORD *)winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::NotificationBoundary(
                        a2,
                        &v22)
          + 1);
    v5 = winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::NotificationBoundary(
           a2,
           &v23);
    v6 = (const GUID *)(*((_QWORD *)this + 6) + 8LL);
    v14 = *(_DWORD *)v5;
    v15 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v4,
      byte_18087568E,
      v6,
      v7,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&ShouldShowThumbnail);
  }
}
