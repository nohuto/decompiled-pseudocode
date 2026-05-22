/*
 * XREFs of ?MPCSixDofProcessor_HomeEvent_@ISMTracing@@QEAAXK_N000K0M0@Z @ 0x1801DEB54
 * Callers:
 *     ??$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_N2AEBI2$$QEAM1@Z @ 0x1801DB3A4 (--$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_N2A.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U2@U3@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@5554545@Z @ 0x1801DBFD0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U3@U3@U3@U2@.c)
 */

void __fastcall ISMTracing::MPCSixDofProcessor_HomeEvent_(
        ISMTracing *this,
        int a2,
        char a3,
        char a4,
        bool a5,
        bool a6,
        unsigned int a7,
        bool a8,
        float a9,
        bool a10)
{
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  bool v16; // [rsp+78h] [rbp-19h] BYREF
  bool v17; // [rsp+79h] [rbp-18h] BYREF
  bool v18; // [rsp+7Ah] [rbp-17h] BYREF
  char v19; // [rsp+7Bh] [rbp-16h] BYREF
  _BYTE v20[4]; // [rsp+7Ch] [rbp-15h] BYREF
  WINBOOL fPending; // [rsp+80h] [rbp-11h] BYREF
  float v22; // [rsp+84h] [rbp-Dh] BYREF
  unsigned int v23; // [rsp+88h] [rbp-9h] BYREF
  int v24; // [rsp+8Ch] [rbp-5h] BYREF
  LPVOID Context; // [rsp+90h] [rbp-1h] BYREF
  __int64 v26; // [rsp+98h] [rbp+7h] BYREF
  int v27; // [rsp+A0h] [rbp+Fh]
  ISMTracing *v28; // [rsp+C8h] [rbp+37h] BYREF

  v28 = this;
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v26 = (__int64)&`ISMTracing::Instance'::`2'::wrapper;
    Context = &qword_180268B30;
    qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v27 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v26);
  }
  v15 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v15 > 4u
    && (*(_QWORD *)(v15 + 16) & 0x400000000001LL) != 0
    && (*(_QWORD *)(v15 + 24) & 0x400000000001LL) == *(_QWORD *)(v15 + 24) )
  {
    LOBYTE(v28) = a10;
    v22 = a9;
    v16 = a8;
    v23 = a7;
    v17 = a6;
    v18 = a5;
    v19 = a4;
    v20[0] = a3;
    v24 = a2;
    v26 = 50331648LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      v15,
      byte_180229174,
      v13,
      v14,
      (__int64)&v26,
      (__int64)&v24,
      (__int64)v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v23,
      (__int64)&v16,
      (__int64)&v22,
      (__int64)&v28);
  }
}
