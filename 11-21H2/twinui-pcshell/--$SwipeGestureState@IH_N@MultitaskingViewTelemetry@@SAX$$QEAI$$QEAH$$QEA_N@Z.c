/*
 * XREFs of ??$SwipeGestureState@IH_N@MultitaskingViewTelemetry@@SAX$$QEAI$$QEAH$$QEA_N@Z @ 0x1804955A8
 * Callers:
 *     ?CancelTouchSwipe@MultitaskingViewGestureHandler@@UEAAJXZ @ 0x1804965A0 (-CancelTouchSwipe@MultitaskingViewGestureHandler@@UEAAJXZ.c)
 *     ?FinishTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x180496DE0 (-FinishTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1804956D0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@@-$_tlgWr.c)
 */

_QWORD *__fastcall MultitaskingViewTelemetry::SwipeGestureState<unsigned int,int,bool>(int *a1, int *a2, char *a3)
{
  _QWORD *result; // rax
  int v7; // r8d
  int v8; // r9d
  _DWORD *v9; // rcx
  int v10; // [rsp+40h] [rbp-18h] BYREF
  int v11; // [rsp+44h] [rbp-14h] BYREF
  __int64 v12; // [rsp+48h] [rbp-10h] BYREF
  char v13; // [rsp+78h] [rbp+20h] BYREF

  result = wil::details::static_lazy<WindowManagementLogging>::get(
             (__int64)a1,
             _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v9 = (_DWORD *)result[1];
  if ( *v9 > 5u )
  {
    v13 = *a3;
    v10 = *a2;
    v11 = *a1;
    v12 = 0x1000000LL;
    return (_QWORD *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                       (_DWORD)v9,
                       (unsigned int)&unk_1806BDC00,
                       v7,
                       v8,
                       (__int64)&v11,
                       (__int64)&v10,
                       (__int64)&v13,
                       (__int64)&v12);
  }
  return result;
}
