/*
 * XREFs of ?ReportEdgeGesture_@TouchEdgeGestureTelemetry@@QEAAXW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@AEBUInputGestureOperation@Input@5UI@67@@Z @ 0x1806555C8
 * Callers:
 *     _lambda_e144cef1f387178a308841941c02025f_::operator()_enum_winrt::Windows::Foundation::AsyncStatus_const_&_ @ 0x180652A40 (_lambda_e144cef1f387178a308841941c02025f_--operator()_enum_winrt--Windows--Foundation--AsyncStat.c)
 * Callees:
 *     ?get@?$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z @ 0x18016D9D8 (-get@-$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x1804A2E14 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?AnimationData@?$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperation@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805553DC (-AnimationData@-$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperatio.c)
 */

int __fastcall TouchEdgeGestureTelemetry::ReportEdgeGesture_(__int64 a1, int a2, _QWORD *a3)
{
  __int64 *v5; // rax
  _DWORD *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  int v10; // [rsp+40h] [rbp-48h] BYREF
  __int64 v11; // [rsp+48h] [rbp-40h] BYREF
  __int64 v12; // [rsp+50h] [rbp-38h] BYREF
  __int128 v13; // [rsp+58h] [rbp-30h] BYREF
  __int128 v14; // [rsp+68h] [rbp-20h] BYREF

  v5 = wil::details::static_lazy<TouchGestureLogging>::get(
         a1,
         (void (__cdecl *)())_lambda_74816e0b9ff772b7cfffc4dc29af72c4_::_lambda_invoker_cdecl_);
  v6 = (_DWORD *)v5[1];
  if ( *v6 > 5u )
  {
    v11 = *((_QWORD *)winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureOperation<winrt::Windows::UI::Internal::Input::IInputGestureOperation>::AnimationData(
                        a3,
                        &v13)
          + 1);
    v12 = *(_QWORD *)winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureOperation<winrt::Windows::UI::Internal::Input::IInputGestureOperation>::AnimationData(
                       a3,
                       &v14);
    v10 = a2;
    LODWORD(v5) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                    (__int64)v6,
                    byte_1808713C5,
                    v7,
                    v8,
                    (__int64)&v10,
                    (__int64)&v12,
                    (__int64)&v11);
  }
  return (int)v5;
}
