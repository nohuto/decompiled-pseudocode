/*
 * XREFs of ?StartActivity@AppFrameHostStartup@CAppManagerTelemetry@@QEAAXXZ @ 0x18002A9D8
 * Callers:
 *     ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x180029E6C (-_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z.c)
 * Callees:
 *     ?zInternalStart@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18002AAA8 (-zInternalStart@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800B7174 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800BCA00 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801D69D8 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall CAppManagerTelemetry::AppFrameHostStartup::StartActivity(
        CAppManagerTelemetry::AppFrameHostStartup *this)
{
  _DWORD *v2; // rdi
  int v3; // eax
  union _RTL_RUN_ONCE *v4; // [rsp+30h] [rbp-10h] BYREF
  int v5; // [rsp+38h] [rbp-8h]
  WINBOOL fPending; // [rsp+60h] [rbp+20h] BYREF
  DWORD CurrentThreadId; // [rsp+68h] [rbp+28h] BYREF
  LPVOID Context; // [rsp+70h] [rbp+30h] BYREF
  __int64 v9; // [rsp+78h] [rbp+38h] BYREF

  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v4 = &`CAppManagerLogging::Instance'::`2'::wrapper;
    Context = &qword_18098DB60;
    qword_18098DB60 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_18098DB78 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    v5 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v4);
  }
  v2 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v2 > 5u && (unsigned __int8)tlgKeywordOn(*((_QWORD *)Context + 1), 0x400000000000LL) )
  {
    CurrentThreadId = GetCurrentThreadId();
    v9 = 0LL;
    v3 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (_DWORD)v2,
      (unsigned int)&unk_180844B99,
      *((_QWORD *)this + 6) + 8,
      v3,
      (__int64)&v9,
      (__int64)&CurrentThreadId);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CAppManagerTelemetry::AppFrameHostStartup *)((char *)this + 8));
}
