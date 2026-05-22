/*
 * XREFs of ?LogIdleTelemetry@ISMTracing@@SAXKKK@Z @ 0x1800D1430
 * Callers:
 *     ?IdleTelemetry@MPCHeadMovementDetector@@AEAAXXZ @ 0x1800D1340 (-IdleTelemetry@MPCHeadMovementDetector@@AEAAXXZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x1800D0A94 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

void __fastcall ISMTracing::LogIdleTelemetry(int a1, int a2, int a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  int v9; // [rsp+40h] [rbp-30h] BYREF
  int v10; // [rsp+44h] [rbp-2Ch] BYREF
  int v11; // [rsp+48h] [rbp-28h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-20h] BYREF
  __int64 v13; // [rsp+58h] [rbp-18h] BYREF
  int v14; // [rsp+60h] [rbp-10h]
  WINBOOL fPending; // [rsp+A8h] [rbp+38h] BYREF

  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v13 = (__int64)&`ISMTracing::Instance'::`2'::wrapper;
    Context = &qword_180268B30;
    qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v14 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v13);
  }
  v8 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v8 > 4u
    && (*(_QWORD *)(v8 + 16) & 0x400000000001LL) != 0
    && (*(_QWORD *)(v8 + 24) & 0x400000000001LL) == *(_QWORD *)(v8 + 24) )
  {
    v9 = a3;
    v10 = a2;
    v11 = a1;
    v13 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v8,
      byte_1802232CF,
      v6,
      v7,
      (__int64)&v13,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9);
  }
}
