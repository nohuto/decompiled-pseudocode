/*
 * XREFs of ?StopActivity@AppFrameHostStartup@CAppManagerTelemetry@@MEAAXXZ @ 0x18002AB80
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?zInternalStop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800AFE7C (-zInternalStop@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800C3264 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x180394CB0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180394CB0.c)
 */

void __fastcall CAppManagerTelemetry::AppFrameHostStartup::StopActivity(
        CAppManagerTelemetry::AppFrameHostStartup *this)
{
  int *v1; // rax
  int v3; // ecx
  _DWORD *v4; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v6; // r8
  int v7; // eax
  int *v8; // rsi
  _DWORD *v9; // rcx
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // [rsp+A0h] [rbp-80h] BYREF
  int v14; // [rsp+A8h] [rbp-78h]
  int v15; // [rsp+B0h] [rbp-70h] BYREF
  int v16; // [rsp+B4h] [rbp-6Ch] BYREF
  __int64 v17; // [rsp+B8h] [rbp-68h] BYREF
  LPVOID v18; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v19; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v20; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v21; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v22; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v23; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v24; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v25; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v26; // [rsp+100h] [rbp-20h] BYREF
  __int64 v27[5]; // [rsp+108h] [rbp-18h] BYREF
  WINBOOL fPending; // [rsp+140h] [rbp+20h] BYREF
  __int64 v29; // [rsp+148h] [rbp+28h] BYREF
  __int64 v30; // [rsp+150h] [rbp+30h] BYREF
  LPVOID Context; // [rsp+158h] [rbp+38h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 >= 0 || v3 != v1[22] || (v8 = v1 + 20, v1 == (int *)-80LL) )
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      v13 = (__int64)&`CAppManagerLogging::Instance'::`2'::wrapper;
      Context = &qword_18098DB60;
      qword_18098DB60 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_18098DB78 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      v14 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v13);
    }
    v4 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v4 > 5u && (unsigned __int8)tlgKeywordOn(*((_QWORD *)Context + 1), 0x400000000000LL) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v6 = *((_QWORD *)this + 6);
      LODWORD(v29) = CurrentThreadId;
      v7 = *(_DWORD *)(v6 + 76);
      v13 = 0LL;
      LODWORD(v30) = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (_DWORD)v4,
        (unsigned int)&unk_180844E39,
        v6 + 8,
        0,
        (__int64)&v13,
        (__int64)&v30,
        (__int64)&v29);
    }
  }
  else
  {
    wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
    v18 = 0LL;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &v18) && fPending )
    {
      v13 = (__int64)&`CAppManagerLogging::Instance'::`2'::wrapper;
      v18 = &qword_18098DB60;
      qword_18098DB60 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_18098DB78 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      v14 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v13);
    }
    v9 = (_DWORD *)*((_QWORD *)v18 + 1);
    if ( *v9 > 5u && (unsigned __int8)tlgKeywordOn(v9, 0x400000000000LL) )
    {
      v11 = *((_QWORD *)v8 + 15);
      v12 = *((_QWORD *)this + 6);
      v13 = 0LL;
      v19 = v11;
      v20 = *((_QWORD *)v8 + 14);
      LODWORD(v29) = v8[26];
      v21 = *((_QWORD *)v8 + 12);
      v22 = *((_QWORD *)v8 + 11);
      LODWORD(v30) = v8[20];
      v23 = *((_QWORD *)v8 + 9);
      LODWORD(Context) = v8[8];
      v24 = *((_QWORD *)v8 + 3);
      v15 = *v8;
      v25 = *((_QWORD *)v8 + 16);
      v16 = v8[16];
      v26 = *((_QWORD *)v8 + 7);
      LODWORD(v17) = v8[2];
      v27[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
        v10,
        (int)&dword_180844D0E,
        v12 + 8,
        (__int64)&v13,
        (__int64)v27,
        (__int64)&v17,
        (__int64)&v26,
        (__int64)&v16,
        (__int64)&v25,
        (__int64)&v15,
        (__int64)&v24,
        (__int64)&Context,
        (__int64)&v23,
        (__int64)&v30,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v29,
        (__int64)&v20,
        (__int64)&v19);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(this);
}
