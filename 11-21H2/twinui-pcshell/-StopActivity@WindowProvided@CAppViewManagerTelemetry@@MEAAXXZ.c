/*
 * XREFs of ?StopActivity@WindowProvided@CAppViewManagerTelemetry@@MEAAXXZ @ 0x1802FAC30
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007A1DC (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800C5DC8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x1802DE088 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1802DE088.c)
 */

void __fastcall CAppViewManagerTelemetry::WindowProvided::StopActivity(CAppViewManagerTelemetry::WindowProvided *this)
{
  int *v1; // rax
  int v3; // ecx
  int *v4; // rsi
  __int64 v5; // r9
  __int64 v6; // rdx
  void (*v7)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  void (*v12)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v13; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // [rsp+C0h] [rbp-80h] BYREF
  int v18; // [rsp+C8h] [rbp-78h]
  int v19; // [rsp+D0h] [rbp-70h] BYREF
  int v20; // [rsp+D4h] [rbp-6Ch] BYREF
  int v21; // [rsp+D8h] [rbp-68h] BYREF
  int v22; // [rsp+DCh] [rbp-64h] BYREF
  int v23; // [rsp+E0h] [rbp-60h] BYREF
  LPVOID Context; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v25; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v26; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v27; // [rsp+100h] [rbp-40h] BYREF
  __int64 v28; // [rsp+108h] [rbp-38h] BYREF
  __int64 v29; // [rsp+110h] [rbp-30h] BYREF
  __int64 v30; // [rsp+118h] [rbp-28h] BYREF
  __int64 v31; // [rsp+120h] [rbp-20h] BYREF
  __int64 v32; // [rsp+128h] [rbp-18h] BYREF
  __int64 v33; // [rsp+130h] [rbp-10h] BYREF
  __int64 v34[5]; // [rsp+138h] [rbp-8h] BYREF
  WINBOOL fPending; // [rsp+170h] [rbp+30h] BYREF
  __int64 v36; // [rsp+178h] [rbp+38h] BYREF
  __int64 v37; // [rsp+180h] [rbp+40h] BYREF
  LPVOID v38; // [rsp+188h] [rbp+48h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 >= 0 || v3 != v1[22] || (v4 = v1 + 20, v1 == (int *)-80LL) )
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v38 = 0LL;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &v38) && fPending )
    {
      v17 = (__int64)&`CAppManagerLogging::Instance'::`2'::wrapper;
      v38 = &qword_1807B3D58;
      qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      v18 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer((LPINIT_ONCE *)&v17, v11, v12);
    }
    v13 = (_DWORD *)*((_QWORD *)v38 + 1);
    if ( *v13 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v15 = *((_QWORD *)this + 6);
      LODWORD(v36) = CurrentThreadId;
      v16 = *(_DWORD *)(v15 + 76);
      v17 = 0LL;
      LODWORD(v37) = v16;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v13,
        byte_18069E951,
        (const GUID *)(v15 + 8),
        0LL,
        (__int64)&v17,
        (__int64)&v37,
        (__int64)&v36);
    }
  }
  else
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
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
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer((LPINIT_ONCE *)&v17, v6, v7);
    }
    v8 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v8 > 5u )
    {
      v25 = *((_QWORD *)v4 + 6);
      LODWORD(v36) = v4[17];
      LODWORD(v37) = v4[4];
      v26 = *((_QWORD *)v4 + 15);
      v27 = *((_QWORD *)v4 + 14);
      v9 = *((_QWORD *)this + 6);
      LODWORD(v38) = v4[26];
      v10 = *((_QWORD *)v4 + 12);
      v17 = 0LL;
      v28 = v10;
      v29 = *((_QWORD *)v4 + 11);
      v19 = v4[20];
      v30 = *((_QWORD *)v4 + 9);
      v20 = v4[8];
      v31 = *((_QWORD *)v4 + 3);
      v21 = *v4;
      v32 = *((_QWORD *)v4 + 16);
      v22 = v4[16];
      v33 = *((_QWORD *)v4 + 7);
      v23 = v4[2];
      v34[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (__int64)v8,
        (unsigned __int8 *)dword_18069E808,
        (const GUID *)(v9 + 8),
        v5,
        (__int64)&v17,
        (__int64)v34,
        (__int64)&v23,
        (const wchar_t **)&v33,
        (__int64)&v22,
        (const wchar_t **)&v32,
        (__int64)&v21,
        (const WCHAR **)&v31,
        (__int64)&v20,
        (const wchar_t **)&v30,
        (__int64)&v19,
        (const wchar_t **)&v29,
        (const WCHAR **)&v28,
        (__int64)&v38,
        (const wchar_t **)&v27,
        (const WCHAR **)&v26,
        (__int64)&v37,
        (__int64)&v36,
        (const wchar_t **)&v25);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CAppViewManagerTelemetry::WindowProvided *)((char *)this + 8));
}
