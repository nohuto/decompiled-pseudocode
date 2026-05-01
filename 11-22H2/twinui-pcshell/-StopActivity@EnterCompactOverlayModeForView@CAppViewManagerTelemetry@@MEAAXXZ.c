/*
 * XREFs of ?StopActivity@EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@MEAAXXZ @ 0x1803B37D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800C3264 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802D0BB0 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x180394CB0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180394CB0.c)
 */

void __fastcall CAppViewManagerTelemetry::EnterCompactOverlayModeForView::StopActivity(
        CAppViewManagerTelemetry::EnterCompactOverlayModeForView *this)
{
  int *v1; // rax
  int v3; // ecx
  int *v4; // rsi
  __int64 v5; // rdx
  void (*v6)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  void (*v13)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v14; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // [rsp+A0h] [rbp-80h] BYREF
  int v19; // [rsp+A8h] [rbp-78h]
  int v20; // [rsp+B0h] [rbp-70h] BYREF
  int v21; // [rsp+B4h] [rbp-6Ch] BYREF
  __int64 v22; // [rsp+B8h] [rbp-68h] BYREF
  LPVOID Context; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v24; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v25; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v26; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v27; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v28; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v29; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v30; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v31; // [rsp+100h] [rbp-20h] BYREF
  __int64 v32[5]; // [rsp+108h] [rbp-18h] BYREF
  WINBOOL fPending; // [rsp+140h] [rbp+20h] BYREF
  __int64 v34; // [rsp+148h] [rbp+28h] BYREF
  __int64 v35; // [rsp+150h] [rbp+30h] BYREF
  LPVOID v36; // [rsp+158h] [rbp+38h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 >= 0 || v3 != v1[22] || (v4 = v1 + 20, v1 == (int *)-80LL) )
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v36 = 0LL;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &v36) && fPending )
    {
      v18 = (__int64)&`CAppManagerLogging::Instance'::`2'::wrapper;
      v36 = &qword_18098DB60;
      qword_18098DB60 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_18098DB78 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      v19 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v18, v12, v13);
    }
    v14 = (_DWORD *)*((_QWORD *)v36 + 1);
    if ( *v14 > 5u && tlgKeywordOn(*((_QWORD *)v36 + 1), 0x200000000000LL) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v16 = *((_QWORD *)this + 6);
      LODWORD(v34) = CurrentThreadId;
      v17 = *(_DWORD *)(v16 + 76);
      v18 = 0LL;
      LODWORD(v35) = v17;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v14,
        byte_180843BF5,
        (const GUID *)(v16 + 8),
        0LL,
        (__int64)&v18,
        (__int64)&v35,
        (__int64)&v34);
    }
  }
  else
  {
    wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      v18 = (__int64)&`CAppManagerLogging::Instance'::`2'::wrapper;
      Context = &qword_18098DB60;
      qword_18098DB60 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_18098DB78 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      v19 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v18, v5, v6);
    }
    v7 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v7 > 5u && tlgKeywordOn((__int64)v7, 0x200000000000LL) )
    {
      v10 = *((_QWORD *)v4 + 15);
      v11 = *((_QWORD *)this + 6);
      v18 = 0LL;
      v24 = v10;
      v25 = *((_QWORD *)v4 + 14);
      LODWORD(v34) = v4[26];
      v26 = *((_QWORD *)v4 + 12);
      v27 = *((_QWORD *)v4 + 11);
      LODWORD(v35) = v4[20];
      v28 = *((_QWORD *)v4 + 9);
      LODWORD(v36) = v4[8];
      v29 = *((_QWORD *)v4 + 3);
      v20 = *v4;
      v30 = *((_QWORD *)v4 + 16);
      v21 = v4[16];
      v31 = *((_QWORD *)v4 + 7);
      LODWORD(v22) = v4[2];
      v32[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
        v8,
        (unsigned __int8 *)dword_180843ABF,
        (const GUID *)(v11 + 8),
        v9,
        (__int64)&v18,
        (__int64)v32,
        (__int64)&v22,
        (const wchar_t **)&v31,
        (__int64)&v21,
        (const wchar_t **)&v30,
        (__int64)&v20,
        (const WCHAR **)&v29,
        (__int64)&v36,
        (const wchar_t **)&v28,
        (__int64)&v35,
        (const wchar_t **)&v27,
        (const WCHAR **)&v26,
        (__int64)&v34,
        (const wchar_t **)&v25,
        (const WCHAR **)&v24);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)this);
}
