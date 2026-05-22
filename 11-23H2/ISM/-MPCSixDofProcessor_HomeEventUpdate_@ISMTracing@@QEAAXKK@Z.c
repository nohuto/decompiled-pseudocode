/*
 * XREFs of ?MPCSixDofProcessor_HomeEventUpdate_@ISMTracing@@QEAAXKK@Z @ 0x1801DEA48
 * Callers:
 *     ??$MPCSixDofProcessor_HomeEventUpdate@KAEAK@ISMTracing@@SAX$$QEAKAEAK@Z @ 0x1801DB708 (--$MPCSixDofProcessor_HomeEventUpdate@KAEAK@ISMTracing@@SAX$$QEAKAEAK@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800D6D20 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall ISMTracing::MPCSixDofProcessor_HomeEventUpdate_(ISMTracing *this, int a2, int a3)
{
  __int64 v5; // rcx
  int v6; // [rsp+40h] [rbp-20h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-18h] BYREF
  __int64 v8; // [rsp+50h] [rbp-10h] BYREF
  int v9; // [rsp+58h] [rbp-8h]
  ISMTracing *fPending; // [rsp+80h] [rbp+20h] BYREF
  int v11; // [rsp+98h] [rbp+38h] BYREF

  fPending = this;
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    v8 = (__int64)&`ISMTracing::Instance'::`2'::wrapper;
    Context = &qword_180268B30;
    qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v9 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v8);
  }
  v5 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 4u
    && (*(_QWORD *)(v5 + 16) & 0x400000000001LL) != 0
    && (*(_QWORD *)(v5 + 24) & 0x400000000001LL) == *(_QWORD *)(v5 + 24) )
  {
    v11 = a3;
    v6 = a2;
    v8 = 50331648LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v5,
      byte_1802290D7,
      0LL,
      0LL,
      (__int64)&v8,
      (__int64)&v6,
      (__int64)&v11);
  }
}
