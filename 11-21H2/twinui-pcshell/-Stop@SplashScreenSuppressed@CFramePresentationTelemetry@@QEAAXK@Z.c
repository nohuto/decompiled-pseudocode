/*
 * XREFs of ?Stop@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXK@Z @ 0x18000EB08
 * Callers:
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x18000EA8C (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x1800798A0 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x18000EC20 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?zInternalStop@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180017624 (-zInternalStop@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564@Z @ 0x18030CC30 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18030CC30.c)
 */

void __fastcall CFramePresentationTelemetry::SplashScreenSuppressed::Stop(
        CFramePresentationTelemetry::SplashScreenSuppressed *this,
        int a2)
{
  int *v2; // rax
  int v5; // ecx
  _DWORD *v6; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v8; // r8
  int v9; // eax
  int *v10; // rsi
  _DWORD *v11; // rcx
  int v12; // ecx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // [rsp+B0h] [rbp-80h] BYREF
  LPVOID Context; // [rsp+B8h] [rbp-78h] BYREF
  __int64 v17; // [rsp+C0h] [rbp-70h] BYREF
  int v18; // [rsp+C8h] [rbp-68h]
  int v19; // [rsp+D0h] [rbp-60h] BYREF
  int v20; // [rsp+D4h] [rbp-5Ch] BYREF
  int v21; // [rsp+D8h] [rbp-58h] BYREF
  int v22; // [rsp+DCh] [rbp-54h] BYREF
  __int64 v23; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v24; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v25; // [rsp+F0h] [rbp-40h] BYREF
  __int64 v26; // [rsp+F8h] [rbp-38h] BYREF
  __int64 v27; // [rsp+100h] [rbp-30h] BYREF
  __int64 v28; // [rsp+108h] [rbp-28h] BYREF
  __int64 v29; // [rsp+110h] [rbp-20h] BYREF
  __int64 v30; // [rsp+118h] [rbp-18h] BYREF
  __int64 v31; // [rsp+120h] [rbp-10h] BYREF
  WINBOOL fPending; // [rsp+160h] [rbp+30h] BYREF
  __int64 v33; // [rsp+170h] [rbp+40h] BYREF
  __int64 v34; // [rsp+178h] [rbp+48h] BYREF

  v2 = (int *)*((_QWORD *)this + 6);
  v5 = v2[19];
  if ( v5 >= 0 || v5 != v2[22] || (v10 = v2 + 20, v2 == (int *)-80LL) )
  {
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
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
    v6 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v6 > 5u && (unsigned __int8)tlgKeywordOn(*((_QWORD *)Context + 1), 0x400000000000LL) )
    {
      LODWORD(v33) = a2;
      CurrentThreadId = GetCurrentThreadId();
      v8 = *((_QWORD *)this + 6);
      LODWORD(v34) = CurrentThreadId;
      v9 = *(_DWORD *)(v8 + 76);
      v17 = 0LL;
      LODWORD(v15) = v9;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (_DWORD)v6,
        (unsigned int)&unk_1806A13C2,
        v8 + 8,
        0,
        (__int64)&v17,
        (__int64)&v15,
        (__int64)&v34,
        (__int64)&v33);
    }
  }
  else
  {
    wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop(this);
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
    v11 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v11 > 5u && (unsigned __int8)tlgKeywordOn(v11, 0x400000000000LL) )
    {
      v13 = *((_QWORD *)this + 6);
      v23 = *((_QWORD *)v10 + 15);
      v14 = *((_QWORD *)v10 + 14);
      v17 = 0LL;
      v24 = v14;
      LODWORD(v34) = v10[26];
      v25 = *((_QWORD *)v10 + 12);
      v26 = *((_QWORD *)v10 + 11);
      v19 = v10[20];
      v27 = *((_QWORD *)v10 + 9);
      v20 = v10[8];
      v28 = *((_QWORD *)v10 + 3);
      v21 = *v10;
      v29 = *((_QWORD *)v10 + 16);
      v22 = v10[16];
      v30 = *((_QWORD *)v10 + 7);
      LODWORD(v15) = v10[2];
      LODWORD(v33) = a2;
      v31 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v12,
        (int)&dword_1806A127F,
        v13 + 8,
        (__int64)&v17,
        (__int64)&v31,
        (__int64)&v15,
        (__int64)&v30,
        (__int64)&v22,
        (__int64)&v29,
        (__int64)&v21,
        (__int64)&v28,
        (__int64)&v20,
        (__int64)&v27,
        (__int64)&v19,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v34,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v33);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CFramePresentationTelemetry::SplashScreenSuppressed *)((char *)this + 8));
}
