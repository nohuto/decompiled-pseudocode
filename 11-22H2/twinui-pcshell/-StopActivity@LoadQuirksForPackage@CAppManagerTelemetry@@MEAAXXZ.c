/*
 * XREFs of ?StopActivity@LoadQuirksForPackage@CAppManagerTelemetry@@MEAAXXZ @ 0x180064970
 * Callers:
 *     <none>
 * Callees:
 *     ?zInternalStop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18002326C (-zInternalStop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800C3264 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180394F78 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180394F78.c)
 */

void __fastcall CAppManagerTelemetry::LoadQuirksForPackage::StopActivity(
        CAppManagerTelemetry::LoadQuirksForPackage *this)
{
  int *v1; // rax
  int v3; // ecx
  _DWORD *v4; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v6; // r8
  int v7; // eax
  int *v8; // rsi
  _DWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // [rsp+C0h] [rbp-80h] BYREF
  int v13; // [rsp+C8h] [rbp-78h]
  int v14; // [rsp+D0h] [rbp-70h] BYREF
  int v15; // [rsp+D4h] [rbp-6Ch] BYREF
  int v16; // [rsp+D8h] [rbp-68h] BYREF
  int v17; // [rsp+DCh] [rbp-64h] BYREF
  int v18; // [rsp+E0h] [rbp-60h] BYREF
  LPVOID v19; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v20; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v21; // [rsp+F8h] [rbp-48h] BYREF
  __int64 v22; // [rsp+100h] [rbp-40h] BYREF
  __int64 v23; // [rsp+108h] [rbp-38h] BYREF
  __int64 v24; // [rsp+110h] [rbp-30h] BYREF
  __int64 v25; // [rsp+118h] [rbp-28h] BYREF
  __int64 v26; // [rsp+120h] [rbp-20h] BYREF
  __int64 v27; // [rsp+128h] [rbp-18h] BYREF
  __int64 v28; // [rsp+130h] [rbp-10h] BYREF
  __int64 v29[5]; // [rsp+138h] [rbp-8h] BYREF
  WINBOOL fPending; // [rsp+170h] [rbp+30h] BYREF
  __int64 v31; // [rsp+178h] [rbp+38h] BYREF
  __int64 v32; // [rsp+180h] [rbp+40h] BYREF
  LPVOID Context; // [rsp+188h] [rbp+48h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 >= 0 || v3 != v1[22] || (v8 = v1 + 20, v1 == (int *)-80LL) )
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      v12 = (__int64)&`CAppManagerLogging::Instance'::`2'::wrapper;
      Context = &qword_18098DB60;
      qword_18098DB60 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_18098DB78 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      v13 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v12);
    }
    v4 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v4 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v6 = *((_QWORD *)this + 6);
      LODWORD(v31) = CurrentThreadId;
      v7 = *(_DWORD *)(v6 + 76);
      v12 = 0LL;
      LODWORD(v32) = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (_DWORD)v4,
        (unsigned int)&unk_180842452,
        v6 + 8,
        0,
        (__int64)&v12,
        (__int64)&v32,
        (__int64)&v31);
    }
  }
  else
  {
    wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
    v19 = 0LL;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &v19) && fPending )
    {
      v12 = (__int64)&`CAppManagerLogging::Instance'::`2'::wrapper;
      v19 = &qword_18098DB60;
      qword_18098DB60 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_18098DB78 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      v13 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v12);
    }
    v9 = (_DWORD *)*((_QWORD *)v19 + 1);
    if ( *v9 > 5u )
    {
      v20 = *((_QWORD *)v8 + 6);
      LODWORD(v31) = v8[17];
      LODWORD(v32) = v8[4];
      v21 = *((_QWORD *)v8 + 15);
      v22 = *((_QWORD *)v8 + 14);
      v10 = *((_QWORD *)this + 6);
      LODWORD(Context) = v8[26];
      v11 = *((_QWORD *)v8 + 12);
      v12 = 0LL;
      v23 = v11;
      v24 = *((_QWORD *)v8 + 11);
      v14 = v8[20];
      v25 = *((_QWORD *)v8 + 9);
      v15 = v8[8];
      v26 = *((_QWORD *)v8 + 3);
      v16 = *v8;
      v27 = *((_QWORD *)v8 + 16);
      v17 = v8[16];
      v28 = *((_QWORD *)v8 + 7);
      v18 = v8[2];
      v29[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)v9,
        (int)&dword_180842303,
        v10 + 8,
        (__int64)&v12,
        (__int64)v29,
        (__int64)&v18,
        (__int64)&v28,
        (__int64)&v17,
        (__int64)&v27,
        (__int64)&v16,
        (__int64)&v26,
        (__int64)&v15,
        (__int64)&v25,
        (__int64)&v14,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&Context,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v20);
    }
  }
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(this);
}
