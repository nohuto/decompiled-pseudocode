/*
 * XREFs of ?StartActivity@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXPEBGPEAUHWND__@@KK@Z @ 0x18000DFA8
 * Callers:
 *     ?SuppressSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEBGPEAUHWND__@@W4SplashScreenSuppressionReason@2@K@Z @ 0x18000DEA8 (-SuppressSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEBGPEAUHWND__@@W4Sp.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@344@Z @ 0x18000E0E4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U2@U2@@-$_tlgWrit.c)
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?zInternalStart@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800C5EAC (-zInternalStart@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180187D80 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     atexit @ 0x18018879C (atexit.c)
 */

void __fastcall CFramePresentationTelemetry::SplashScreenSuppressed::StartActivity(
        CFramePresentationTelemetry::SplashScreenSuppressed *this,
        const unsigned __int16 *a2,
        __int64 a3,
        int a4,
        unsigned int a5)
{
  _DWORD *v9; // rdi
  DWORD CurrentThreadId; // eax
  unsigned int v11; // [rsp+58h] [rbp-1h] BYREF
  int v12; // [rsp+5Ch] [rbp+3h] BYREF
  __int64 v13; // [rsp+60h] [rbp+7h] BYREF
  LPVOID Context; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v15; // [rsp+70h] [rbp+17h] BYREF
  __int64 v16; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v17; // [rsp+80h] [rbp+27h] BYREF
  int v18; // [rsp+88h] [rbp+2Fh]
  WINBOOL fPending; // [rsp+B8h] [rbp+5Fh] BYREF

  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v17 = (__int64)&`CAppManagerLogging::Instance'::`2'::wrapper;
    Context = &qword_1807B3D58;
    qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    v18 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v17);
  }
  v9 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v9 > 5u && (unsigned __int8)tlgKeywordOn(*((_QWORD *)Context + 1), 0x400000000000LL) )
  {
    v11 = a5;
    v12 = a4;
    v15 = a3;
    v16 = (__int64)a2;
    CurrentThreadId = GetCurrentThreadId();
    v17 = 0LL;
    LODWORD(v13) = CurrentThreadId;
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)v9,
      (int)&dword_1806A0963,
      (__int64)&v17,
      (__int64)&v13,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v12,
      (__int64)&v11);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CFramePresentationTelemetry::SplashScreenSuppressed *)((char *)this + 8));
}
