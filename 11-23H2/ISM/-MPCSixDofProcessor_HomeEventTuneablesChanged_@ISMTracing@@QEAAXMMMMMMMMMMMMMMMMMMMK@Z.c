/*
 * XREFs of ?MPCSixDofProcessor_HomeEventTuneablesChanged_@ISMTracing@@QEAAXMMMMMMMMMMMMMMMMMMMK@Z @ 0x1801DE7F0
 * Callers:
 *     ??$MPCSixDofProcessor_HomeEventTuneablesChanged@MMMMMMMMMMMMMMMMMMMK@ISMTracing@@SAX$$QEAM000000000000000000$$QEAK@Z @ 0x1801DB4D4 (--$MPCSixDofProcessor_HomeEventTuneablesChanged@MMMMMMMMMMMMMMMMMMMK@ISMTracing@@SAX$$QEAM000000.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444444444444444444@Z @ 0x1801DBDD0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@_ea_1801DBDD0.c)
 */

void __fastcall ISMTracing::MPCSixDofProcessor_HomeEventTuneablesChanged_(
        ISMTracing *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13,
        float a14,
        float a15,
        float a16,
        float a17,
        float a18,
        float a19,
        float a20,
        unsigned int a21)
{
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  unsigned int v24; // [rsp+D8h] [rbp-80h] BYREF
  float v25; // [rsp+DCh] [rbp-7Ch] BYREF
  float v26; // [rsp+E0h] [rbp-78h] BYREF
  float v27; // [rsp+E4h] [rbp-74h] BYREF
  float v28; // [rsp+E8h] [rbp-70h] BYREF
  float v29; // [rsp+ECh] [rbp-6Ch] BYREF
  float v30; // [rsp+F0h] [rbp-68h] BYREF
  float v31; // [rsp+F4h] [rbp-64h] BYREF
  float v32; // [rsp+F8h] [rbp-60h] BYREF
  float v33; // [rsp+FCh] [rbp-5Ch] BYREF
  float v34; // [rsp+100h] [rbp-58h] BYREF
  float v35; // [rsp+104h] [rbp-54h] BYREF
  float v36; // [rsp+108h] [rbp-50h] BYREF
  float v37; // [rsp+10Ch] [rbp-4Ch] BYREF
  float v38; // [rsp+110h] [rbp-48h] BYREF
  float v39; // [rsp+114h] [rbp-44h] BYREF
  float v40; // [rsp+118h] [rbp-40h] BYREF
  float v41; // [rsp+11Ch] [rbp-3Ch] BYREF
  float v42; // [rsp+120h] [rbp-38h] BYREF
  float v43; // [rsp+124h] [rbp-34h] BYREF
  LPVOID Context; // [rsp+128h] [rbp-30h] BYREF
  __int64 v45; // [rsp+130h] [rbp-28h] BYREF
  int v46; // [rsp+138h] [rbp-20h]
  ISMTracing *fPending; // [rsp+168h] [rbp+10h] BYREF
  float v48; // [rsp+170h] [rbp+18h]
  float v49; // [rsp+178h] [rbp+20h]
  float v50; // [rsp+180h] [rbp+28h]

  v50 = a4;
  v49 = a3;
  v48 = a2;
  fPending = this;
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    v45 = (__int64)&`ISMTracing::Instance'::`2'::wrapper;
    Context = &qword_180268B30;
    qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v46 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v45);
  }
  v23 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v23 > 4u
    && (*(_QWORD *)(v23 + 16) & 0x400000000001LL) != 0
    && (*(_QWORD *)(v23 + 24) & 0x400000000001LL) == *(_QWORD *)(v23 + 24) )
  {
    v24 = a21;
    v25 = a20;
    v26 = a19;
    v27 = a18;
    v28 = a17;
    v29 = a16;
    v30 = a15;
    v31 = a14;
    v32 = a13;
    v33 = a12;
    v34 = a11;
    v35 = a10;
    v36 = a9;
    v37 = a8;
    v38 = a7;
    v39 = a6;
    v40 = a5;
    v41 = v50;
    v42 = v49;
    v43 = v48;
    v45 = 50331648LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v23,
      byte_180228ECD,
      v21,
      v22,
      (__int64)&v45,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24);
  }
}
