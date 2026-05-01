/*
 * XREFs of ?StopActivity@TitleBarButtonCloseRequested@CAppManagerTelemetry@@MEAAXXZ @ 0x180300B80
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800C5DC8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x1802DDDC0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1802DDDC0.c)
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802EC284 (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall CAppManagerTelemetry::TitleBarButtonCloseRequested::StopActivity(
        CAppManagerTelemetry::TitleBarButtonCloseRequested *this)
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
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v36 = 0LL;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &v36) && fPending )
    {
      v18 = (__int64)&`CAppManagerLogging::Instance'::`2'::wrapper;
      v36 = &qword_1807B3D58;
      qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      v19 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer((LPINIT_ONCE *)&v18, v12, v13);
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
        byte_18069F685,
        (const GUID *)(v16 + 8),
        0LL,
        (__int64)&v18,
        (__int64)&v35,
        (__int64)&v34);
    }
  }
  else
  {
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      v18 = (__int64)&`CAppManagerLogging::Instance'::`2'::wrapper;
      Context = &qword_1807B3D58;
      qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      v19 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer((LPINIT_ONCE *)&v18, v5, v6);
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
        (unsigned __int8 *)dword_18069F551,
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
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CAppManagerTelemetry::TitleBarButtonCloseRequested *)((char *)this + 8));
}
