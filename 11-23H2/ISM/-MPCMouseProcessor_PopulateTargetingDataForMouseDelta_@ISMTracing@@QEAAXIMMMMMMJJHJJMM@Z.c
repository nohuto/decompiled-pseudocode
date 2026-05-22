/*
 * XREFs of ?MPCMouseProcessor_PopulateTargetingDataForMouseDelta_@ISMTracing@@QEAAXIMMMMMMJJHJJMM@Z @ 0x1801E78EC
 * Callers:
 *     ??$MPCMouseProcessor_PopulateTargetingDataForMouseDelta@AEAKAEAMAEAMAEAMAEAMAEAMAEAMAEAJAEAJAEAHAEAJAEAJAEAMAEAM@ISMTracing@@SAXAEAKAEAM11111AEAJ2AEAH2211@Z @ 0x1801E6298 (--$MPCMouseProcessor_PopulateTargetingDataForMouseDelta@AEAKAEAMAEAMAEAMAEAMAEAMAEAMAEAJAEAJAEAH.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333333333@Z @ 0x1801E6440 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$.c)
 */

void __fastcall ISMTracing::MPCMouseProcessor_PopulateTargetingDataForMouseDelta_(
        ISMTracing *this,
        int a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        float a14,
        float a15)
{
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  float v19; // [rsp+98h] [rbp-49h] BYREF
  float v20; // [rsp+9Ch] [rbp-45h] BYREF
  int v21; // [rsp+A0h] [rbp-41h] BYREF
  int v22; // [rsp+A4h] [rbp-3Dh] BYREF
  int v23; // [rsp+A8h] [rbp-39h] BYREF
  int v24; // [rsp+ACh] [rbp-35h] BYREF
  int v25; // [rsp+B0h] [rbp-31h] BYREF
  float v26; // [rsp+B4h] [rbp-2Dh] BYREF
  float v27; // [rsp+B8h] [rbp-29h] BYREF
  float v28; // [rsp+BCh] [rbp-25h] BYREF
  float v29; // [rsp+C0h] [rbp-21h] BYREF
  float v30; // [rsp+C4h] [rbp-1Dh] BYREF
  float v31; // [rsp+C8h] [rbp-19h] BYREF
  int v32; // [rsp+CCh] [rbp-15h] BYREF
  LPVOID Context; // [rsp+D0h] [rbp-11h] BYREF
  union _RTL_RUN_ONCE *v34; // [rsp+D8h] [rbp-9h] BYREF
  int v35; // [rsp+E0h] [rbp-1h]
  ISMTracing *fPending; // [rsp+108h] [rbp+27h] BYREF
  float v37; // [rsp+118h] [rbp+37h]
  float v38; // [rsp+120h] [rbp+3Fh]

  v38 = a4;
  v37 = a3;
  fPending = this;
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    v34 = &`ISMTracing::Instance'::`2'::wrapper;
    Context = &qword_180268B30;
    qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v35 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v34);
  }
  v18 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v18 > 5u && (*(_BYTE *)(v18 + 16) & 1) != 0 && (*(_QWORD *)(v18 + 24) & 1LL) == *(_QWORD *)(v18 + 24) )
  {
    v19 = a15;
    v20 = a14;
    v21 = a13;
    v22 = a12;
    v23 = a11;
    v24 = a10;
    v25 = a9;
    v26 = a8;
    v27 = a7;
    v28 = a6;
    v29 = a5;
    v30 = v38;
    v31 = v37;
    v32 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v18,
      byte_18022952C,
      v16,
      v17,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19);
  }
}
