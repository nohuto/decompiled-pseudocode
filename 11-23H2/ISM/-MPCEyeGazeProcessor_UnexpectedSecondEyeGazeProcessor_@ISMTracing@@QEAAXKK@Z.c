/*
 * XREFs of ?MPCEyeGazeProcessor_UnexpectedSecondEyeGazeProcessor_@ISMTracing@@QEAAXKK@Z @ 0x1801E9544
 * Callers:
 *     ??$MPCEyeGazeProcessor_UnexpectedSecondEyeGazeProcessor@AEAKK@ISMTracing@@SAXAEAK$$QEAK@Z @ 0x1801E925C (--$MPCEyeGazeProcessor_UnexpectedSecondEyeGazeProcessor@AEAKK@ISMTracing@@SAXAEAK$$QEAK@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800BDE48 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall ISMTracing::MPCEyeGazeProcessor_UnexpectedSecondEyeGazeProcessor_(ISMTracing *this, int a2, int a3)
{
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rcx
  int v8; // [rsp+30h] [rbp-20h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-18h] BYREF
  union _RTL_RUN_ONCE *v10; // [rsp+40h] [rbp-10h] BYREF
  int v11; // [rsp+48h] [rbp-8h]
  ISMTracing *fPending; // [rsp+70h] [rbp+20h] BYREF
  int v13; // [rsp+88h] [rbp+38h] BYREF

  fPending = this;
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    v10 = &`ISMTracing::Instance'::`2'::wrapper;
    Context = &qword_180268B30;
    qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v11 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v10);
  }
  v7 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v7 > 4u )
  {
    v13 = a3;
    v8 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v7,
      byte_1802296AE,
      v5,
      v6,
      (__int64)&v8,
      (__int64)&v13);
  }
}
