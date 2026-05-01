/*
 * XREFs of ?StartActivity@ConnectToWindowManager@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x1800622F4
 * Callers:
 *     ?WaitForWindowManagerConnection@WindowManagerBridge@@UEAAJXZ @ 0x180062210 (-WaitForWindowManagerConnection@WindowManagerBridge@@UEAAJXZ.c)
 *     ?WaitForWindowManagerConnection@UwpWindowManagerBridge@@UEAAJXZ @ 0x180403870 (-WaitForWindowManagerConnection@UwpWindowManagerBridge@@UEAAJXZ.c)
 * Callees:
 *     ?zInternalStart@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18006238C (-zInternalStart@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x180090CEC (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800C5B9C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall ViewManagerInteropTraceLogging::ConnectToWindowManager::StartActivity(
        ViewManagerInteropTraceLogging::ConnectToWindowManager *this)
{
  __int64 v2; // rcx
  _DWORD *v3; // rdi
  int v4; // eax
  DWORD CurrentThreadId; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v3 = *(_DWORD **)(wil::details::static_lazy<ViewManagerInteropLogging>::get(
                      v2,
                      _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v3 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v6 = 0LL;
    v4 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (_DWORD)v3,
      (unsigned int)&unk_1806B22FA,
      *((_QWORD *)this + 6) + 8,
      v4,
      (__int64)&v6,
      (__int64)&CurrentThreadId);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((ViewManagerInteropTraceLogging::ConnectToWindowManager *)((char *)this + 8));
}
