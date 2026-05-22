/*
 * XREFs of ?MPCGestureHandler_PointerUpdated_@ISMTracing@@QEAAXJJIKKKK@Z @ 0x1800BC0DC
 * Callers:
 *     ??$MPCGestureHandler_PointerUpdated@AEAJAEAJAEAIAEAIAEAKAEAKAEAW4InputType@@@ISMTracing@@SAXAEAJ0AEAI1AEAK2AEAW4InputType@@@Z @ 0x1800B9DF4 (--$MPCGestureHandler_PointerUpdated@AEAJAEAJAEAIAEAIAEAKAEAKAEAW4InputType@@@ISMTracing@@SAXAEAJ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18003F3A0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333@Z @ 0x1800B37DC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_.c)
 */

void __fastcall ISMTracing::MPCGestureHandler_PointerUpdated_(
        ISMTracing *this,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned int v14; // [rsp+68h] [rbp-19h] BYREF
  unsigned int v15; // [rsp+6Ch] [rbp-15h] BYREF
  unsigned int v16; // [rsp+70h] [rbp-11h] BYREF
  unsigned int v17; // [rsp+74h] [rbp-Dh] BYREF
  int v18; // [rsp+78h] [rbp-9h] BYREF
  int v19; // [rsp+7Ch] [rbp-5h] BYREF
  int v20; // [rsp+80h] [rbp-1h] BYREF
  LPVOID Context; // [rsp+88h] [rbp+7h] BYREF
  union _RTL_RUN_ONCE *v22; // [rsp+90h] [rbp+Fh] BYREF
  int v23; // [rsp+98h] [rbp+17h]
  ISMTracing *fPending; // [rsp+C8h] [rbp+47h] BYREF

  fPending = this;
  if ( ISMTracing::IsEnabled((char)this) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
      && (_DWORD)fPending )
    {
      v22 = &`ISMTracing::Instance'::`2'::wrapper;
      Context = &qword_180268B30;
      qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      v23 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v22);
    }
    v13 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v13 > 5u
      && (*(_BYTE *)(v13 + 16) & 1) != 0
      && (*(_QWORD *)(v13 + 24) & 1LL) == *(_QWORD *)(v13 + 24) )
    {
      v14 = a8;
      v15 = a7;
      v16 = a6;
      v17 = a5;
      v18 = a4;
      v19 = a3;
      v20 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v13,
        byte_180221D55,
        v11,
        v12,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14);
    }
  }
}
