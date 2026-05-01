/*
 * XREFs of ?StopActivity@Initialization@CFramePresentationTelemetry@@MEAAXXZ @ 0x18014C850
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007A1DC (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x1802DE088 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_1802DE088.c)
 */

void __fastcall CFramePresentationTelemetry::Initialization::StopActivity(
        CFramePresentationTelemetry::Initialization *this)
{
  int *v1; // rax
  int v3; // ecx
  __int64 v4; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v6; // r8
  REGHANDLE v7; // rcx
  int *v8; // rsi
  __int64 v9; // rdx
  void (*v10)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  void (*v14)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v15; // [rsp+C0h] [rbp-80h] BYREF
  DWORD v16; // [rsp+C4h] [rbp-7Ch] BYREF
  WINBOOL fPending[2]; // [rsp+C8h] [rbp-78h] BYREF
  LPVOID Context; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v19; // [rsp+D8h] [rbp-68h] BYREF
  __int64 v20; // [rsp+E0h] [rbp-60h] BYREF
  int v21; // [rsp+E8h] [rbp-58h]
  WINBOOL v22; // [rsp+F0h] [rbp-50h] BYREF
  int v23; // [rsp+F4h] [rbp-4Ch] BYREF
  int v24; // [rsp+F8h] [rbp-48h] BYREF
  int v25; // [rsp+FCh] [rbp-44h] BYREF
  int v26; // [rsp+100h] [rbp-40h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+108h] [rbp-38h] BYREF
  __int64 v28; // [rsp+118h] [rbp-28h] BYREF
  __int64 v29; // [rsp+120h] [rbp-20h] BYREF
  __int64 v30; // [rsp+128h] [rbp-18h] BYREF
  __int64 v31; // [rsp+130h] [rbp-10h] BYREF
  __int64 v32; // [rsp+138h] [rbp-8h] BYREF
  __int64 v33; // [rsp+140h] [rbp+0h] BYREF
  __int64 v34; // [rsp+148h] [rbp+8h] BYREF
  __int64 v35; // [rsp+150h] [rbp+10h] BYREF
  __int64 v36; // [rsp+158h] [rbp+18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+160h] [rbp+20h] BYREF
  void *v38; // [rsp+170h] [rbp+30h]
  int v39; // [rsp+178h] [rbp+38h]
  int v40; // [rsp+17Ch] [rbp+3Ch]
  __int64 *v41; // [rsp+180h] [rbp+40h]
  __int64 v42; // [rsp+188h] [rbp+48h]
  int *v43; // [rsp+190h] [rbp+50h]
  __int64 v44; // [rsp+198h] [rbp+58h]
  DWORD *v45; // [rsp+1A0h] [rbp+60h]
  __int64 v46; // [rsp+1A8h] [rbp+68h]

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 >= 0 || v3 != v1[22] || (v8 = v1 + 20, v1 == (int *)-80LL) )
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, fPending, &Context)
      && fPending[0] )
    {
      v20 = (__int64)&`CAppManagerLogging::Instance'::`2'::wrapper;
      Context = &qword_1807B3D58;
      qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      v21 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer((LPINIT_ONCE *)&v20, v13, v14);
    }
    v4 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v4 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v6 = *((_QWORD *)this + 6);
      v16 = CurrentThreadId;
      v46 = 4LL;
      v44 = 4LL;
      v15 = *(_DWORD *)(v6 + 76);
      v45 = &v16;
      v43 = &v15;
      v41 = &v20;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *(_QWORD *)(v4 + 8);
      v20 = 0LL;
      v42 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v38 = &unk_1806A06C2;
      UserData.Reserved = 2;
      v7 = *(_QWORD *)(v4 + 32);
      v39 = 67;
      v40 = 1;
      LODWORD(v19) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(v7, &EventDescriptor, (LPCGUID)(v6 + 8), 0LL, 5u, &UserData);
    }
  }
  else
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v22, &Context) && v22 )
    {
      v20 = (__int64)&`CAppManagerLogging::Instance'::`2'::wrapper;
      Context = &qword_1807B3D58;
      qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      v21 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer((LPINIT_ONCE *)&v20, v9, v10);
    }
    v11 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v11 > 5u )
    {
      v28 = *((_QWORD *)v8 + 6);
      v23 = v8[17];
      v24 = v8[4];
      v29 = *((_QWORD *)v8 + 15);
      v30 = *((_QWORD *)v8 + 14);
      v12 = *((_QWORD *)this + 6);
      v25 = v8[26];
      v31 = *((_QWORD *)v8 + 12);
      v32 = *((_QWORD *)v8 + 11);
      v26 = v8[20];
      v33 = *((_QWORD *)v8 + 9);
      LODWORD(v19) = v8[8];
      v34 = *((_QWORD *)v8 + 3);
      v15 = *v8;
      v35 = *((_QWORD *)v8 + 16);
      v16 = v8[16];
      v36 = *((_QWORD *)v8 + 7);
      fPending[0] = v8[2];
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      v20 = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v11,
        (int)&dword_1806A056E,
        v12 + 8,
        (__int64)&v20,
        (__int64)&EventDescriptor,
        (__int64)fPending,
        (__int64)&v36,
        (__int64)&v16,
        (__int64)&v35,
        (__int64)&v15,
        (__int64)&v34,
        (__int64)&v19,
        (__int64)&v33,
        (__int64)&v26,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v25,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v28);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CFramePresentationTelemetry::Initialization *)((char *)this + 8));
}
