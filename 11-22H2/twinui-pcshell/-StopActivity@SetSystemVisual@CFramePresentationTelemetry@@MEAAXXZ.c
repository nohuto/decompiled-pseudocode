/*
 * XREFs of ?StopActivity@SetSystemVisual@CFramePresentationTelemetry@@MEAAXXZ @ 0x180021490
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800BADF8 (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800C3264 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x180394CB0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180394CB0.c)
 */

void __fastcall CFramePresentationTelemetry::SetSystemVisual::StopActivity(
        CFramePresentationTelemetry::SetSystemVisual *this)
{
  int *v1; // rax
  int v3; // ecx
  int *v4; // rsi
  _DWORD *v5; // rdi
  _DWORD *v6; // rcx
  int v7; // ecx
  __int64 v8; // r8
  DWORD CurrentThreadId; // eax
  __int64 v10; // r8
  __int64 v11; // [rsp+A0h] [rbp-80h] BYREF
  int v12; // [rsp+A8h] [rbp-78h]
  int v13; // [rsp+B0h] [rbp-70h] BYREF
  int v14; // [rsp+B4h] [rbp-6Ch] BYREF
  __int64 v15; // [rsp+B8h] [rbp-68h] BYREF
  LPVOID v16; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v17; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v18; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v19; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v20; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v21; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v22; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v23; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v24; // [rsp+100h] [rbp-20h] BYREF
  __int64 v25[5]; // [rsp+108h] [rbp-18h] BYREF
  WINBOOL fPending; // [rsp+140h] [rbp+20h] BYREF
  __int64 v27; // [rsp+148h] [rbp+28h] BYREF
  __int64 v28; // [rsp+150h] [rbp+30h] BYREF
  LPVOID Context; // [rsp+158h] [rbp+38h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[22] && (v4 = v1 + 20, v1 != (int *)-80LL) )
  {
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v16 = 0LL;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &v16) && fPending )
    {
      v11 = (__int64)&`CAppManagerLogging::Instance'::`2'::wrapper;
      v16 = &qword_18098DB60;
      qword_18098DB60 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_18098DB78 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      v12 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v11);
    }
    v6 = (_DWORD *)*((_QWORD *)v16 + 1);
    if ( *v6 > 5u && (unsigned __int8)tlgKeywordOn(v6, 0x200000000000LL) )
    {
      v8 = *((_QWORD *)this + 6);
      v17 = *((_QWORD *)v4 + 15);
      v18 = *((_QWORD *)v4 + 14);
      LODWORD(v27) = v4[26];
      v19 = *((_QWORD *)v4 + 12);
      v20 = *((_QWORD *)v4 + 11);
      LODWORD(v28) = v4[20];
      v21 = *((_QWORD *)v4 + 9);
      LODWORD(Context) = v4[8];
      v22 = *((_QWORD *)v4 + 3);
      v13 = *v4;
      v23 = *((_QWORD *)v4 + 16);
      v14 = v4[16];
      v24 = *((_QWORD *)v4 + 7);
      LODWORD(v15) = v4[2];
      v25[0] = 0x1000000LL;
      v11 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
        v7,
        (int)&dword_18084659F,
        v8 + 8,
        (__int64)&v11,
        (__int64)v25,
        (__int64)&v15,
        (__int64)&v24,
        (__int64)&v14,
        (__int64)&v23,
        (__int64)&v13,
        (__int64)&v22,
        (__int64)&Context,
        (__int64)&v21,
        (__int64)&v28,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v27,
        (__int64)&v18,
        (__int64)&v17);
    }
  }
  else
  {
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      v11 = (__int64)&`CAppManagerLogging::Instance'::`2'::wrapper;
      Context = &qword_18098DB60;
      qword_18098DB60 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_18098DB78 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      v12 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v11);
    }
    v5 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v5 > 5u && (unsigned __int8)tlgKeywordOn(*((_QWORD *)Context + 1), 0x200000000000LL) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v10 = *((_QWORD *)this + 6);
      LODWORD(v27) = CurrentThreadId;
      LODWORD(v28) = *(_DWORD *)(v10 + 76);
      v11 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (_DWORD)v5,
        (unsigned int)&unk_1808466C6,
        v10 + 8,
        0,
        (__int64)&v11,
        (__int64)&v28,
        (__int64)&v27);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CFramePresentationTelemetry::SetSystemVisual *)((char *)this + 8));
}
