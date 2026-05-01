/*
 * XREFs of ?StartActivity@RemoveSessionIdleTaskCompletion@ViewManagerInteropTraceLogging@@QEAAXK@Z @ 0x18003668C
 * Callers:
 *     ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x18008F924 (-ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ.c)
 *     ?ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ @ 0x180415F54 (-ReconcileSessionIdleTaskCompletion@UwpWindowWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     ?zInternalStart@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18006238C (-zInternalStart@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x180090CEC (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800C5DC8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::StartActivity(
        ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *this,
        int a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rdi
  DWORD CurrentThreadId; // eax
  int v7; // eax
  int v8; // [rsp+60h] [rbp+8h] BYREF
  DWORD v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v5 = *(_DWORD **)(wil::details::static_lazy<ViewManagerInteropLogging>::get(
                      v4,
                      _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v5 > 5u )
  {
    v8 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v10 = 0LL;
    v9 = CurrentThreadId;
    v7 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (_DWORD)v5,
      (unsigned int)&unk_1806B290C,
      *((_QWORD *)this + 6) + 8,
      v7,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion *)((char *)this + 8));
}
