/*
 * XREFs of ?StopActivity@DeleteWindow@CImmersiveAppTelemetry@@MEAAXXZ @ 0x180159DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007A1DC (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x1802DE088 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1802DE088.c)
 */

void __fastcall CImmersiveAppTelemetry::DeleteWindow::StopActivity(CImmersiveAppTelemetry::DeleteWindow *this)
{
  int *v1; // rax
  int v3; // ecx
  _DWORD *v4; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v6; // r8
  int *v7; // rsi
  __int64 v8; // rdx
  void (*v9)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  void (*v13)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v14; // [rsp+C0h] [rbp-80h] BYREF
  DWORD v15; // [rsp+C4h] [rbp-7Ch] BYREF
  WINBOOL fPending[2]; // [rsp+C8h] [rbp-78h] BYREF
  LPVOID Context; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v18; // [rsp+D8h] [rbp-68h] BYREF
  int v19; // [rsp+E0h] [rbp-60h]
  WINBOOL v20; // [rsp+E8h] [rbp-58h] BYREF
  int v21; // [rsp+ECh] [rbp-54h] BYREF
  int v22; // [rsp+F0h] [rbp-50h] BYREF
  int v23; // [rsp+F4h] [rbp-4Ch] BYREF
  int v24; // [rsp+F8h] [rbp-48h] BYREF
  int v25; // [rsp+FCh] [rbp-44h] BYREF
  __int64 v26; // [rsp+100h] [rbp-40h] BYREF
  __int64 v27; // [rsp+108h] [rbp-38h] BYREF
  __int64 v28; // [rsp+110h] [rbp-30h] BYREF
  __int64 v29; // [rsp+118h] [rbp-28h] BYREF
  __int64 v30; // [rsp+120h] [rbp-20h] BYREF
  __int64 v31; // [rsp+128h] [rbp-18h] BYREF
  __int64 v32; // [rsp+130h] [rbp-10h] BYREF
  __int64 v33; // [rsp+138h] [rbp-8h] BYREF
  __int64 v34; // [rsp+140h] [rbp+0h] BYREF
  __int64 v35; // [rsp+148h] [rbp+8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+150h] [rbp+10h] BYREF
  __int64 *v37; // [rsp+170h] [rbp+30h]
  __int64 v38; // [rsp+178h] [rbp+38h]
  int *v39; // [rsp+180h] [rbp+40h]
  __int64 v40; // [rsp+188h] [rbp+48h]
  DWORD *v41; // [rsp+190h] [rbp+50h]
  __int64 v42; // [rsp+198h] [rbp+58h]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 >= 0 || v3 != v1[22] || (v7 = v1 + 20, v1 == (int *)-80LL) )
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
      && fPending[0] )
    {
      v18 = (__int64)&`CAppManagerLogging::Instance'::`2'::wrapper;
      Context = &qword_1807B3D58;
      qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      v19 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer((LPINIT_ONCE *)&v18, v12, v13);
    }
    v4 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v4 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v6 = *((_QWORD *)this + 6);
      v15 = CurrentThreadId;
      v42 = 4LL;
      v40 = 4LL;
      v14 = *(_DWORD *)(v6 + 76);
      v41 = &v15;
      v39 = &v14;
      v37 = &v18;
      v18 = 0LL;
      v38 = 8LL;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)v4,
        (unsigned __int8 *)dword_18069FE8B,
        (const GUID *)(v6 + 8),
        0LL,
        5u,
        &v36);
    }
  }
  else
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v20, &Context) && v20 )
    {
      v18 = (__int64)&`CAppManagerLogging::Instance'::`2'::wrapper;
      Context = &qword_1807B3D58;
      qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      v19 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer((LPINIT_ONCE *)&v18, v8, v9);
    }
    v10 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v10 > 5u )
    {
      v26 = *((_QWORD *)v7 + 6);
      v21 = v7[17];
      v22 = v7[4];
      v27 = *((_QWORD *)v7 + 15);
      v28 = *((_QWORD *)v7 + 14);
      v11 = *((_QWORD *)this + 6);
      v23 = v7[26];
      v29 = *((_QWORD *)v7 + 12);
      v30 = *((_QWORD *)v7 + 11);
      v24 = v7[20];
      v31 = *((_QWORD *)v7 + 9);
      v25 = v7[8];
      v32 = *((_QWORD *)v7 + 3);
      v14 = *v7;
      v33 = *((_QWORD *)v7 + 16);
      v15 = v7[16];
      v34 = *((_QWORD *)v7 + 7);
      fPending[0] = v7[2];
      v35 = 0x1000000LL;
      v18 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v10,
        (int)&dword_18069FD44,
        v11 + 8,
        (__int64)&v18,
        (__int64)&v35,
        (__int64)fPending,
        (__int64)&v34,
        (__int64)&v15,
        (__int64)&v33,
        (__int64)&v14,
        (__int64)&v32,
        (__int64)&v25,
        (__int64)&v31,
        (__int64)&v24,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v23,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v26);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CImmersiveAppTelemetry::DeleteWindow *)((char *)this + 8));
}
