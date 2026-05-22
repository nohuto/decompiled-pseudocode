/*
 * XREFs of ?MPCSixDofProcessor_HomePressedEvent_@ISMTracing@@QEAAXK_NKMMMMMMMMMMMMMMMMMMK@Z @ 0x1801DEDC8
 * Callers:
 *     ??$MPCSixDofProcessor_HomePressedEvent@KAEA_NAEAKAEBMAEBMAEBMAEBMAEBMAEBMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEBI@ISMTracing@@SAX$$QEAKAEA_NAEAKAEBM33333AEAM44444444444AEBI@Z @ 0x1801DB888 (--$MPCSixDofProcessor_HomePressedEvent@KAEA_NAEAKAEBMAEBMAEBMAEBMAEBMAEBMAEAMAEAMAEAMAEAMAEAMAEA.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@33333333333333333333@Z @ 0x1801DBBB8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U.c)
 */

void __fastcall ISMTracing::MPCSixDofProcessor_HomePressedEvent_(
        ISMTracing *this,
        int a2,
        char a3,
        int a4,
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
        float a21,
        float a22,
        unsigned int a23)
{
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  WINBOOL fPending; // [rsp+D8h] [rbp-80h] BYREF
  unsigned int v30; // [rsp+DCh] [rbp-7Ch] BYREF
  float v31; // [rsp+E0h] [rbp-78h] BYREF
  float v32; // [rsp+E4h] [rbp-74h] BYREF
  float v33; // [rsp+E8h] [rbp-70h] BYREF
  float v34; // [rsp+ECh] [rbp-6Ch] BYREF
  float v35; // [rsp+F0h] [rbp-68h] BYREF
  float v36; // [rsp+F4h] [rbp-64h] BYREF
  float v37; // [rsp+F8h] [rbp-60h] BYREF
  float v38; // [rsp+FCh] [rbp-5Ch] BYREF
  float v39; // [rsp+100h] [rbp-58h] BYREF
  float v40; // [rsp+104h] [rbp-54h] BYREF
  float v41; // [rsp+108h] [rbp-50h] BYREF
  float v42; // [rsp+10Ch] [rbp-4Ch] BYREF
  float v43; // [rsp+110h] [rbp-48h] BYREF
  float v44; // [rsp+114h] [rbp-44h] BYREF
  float v45; // [rsp+118h] [rbp-40h] BYREF
  float v46; // [rsp+11Ch] [rbp-3Ch] BYREF
  float v47; // [rsp+120h] [rbp-38h] BYREF
  float v48; // [rsp+124h] [rbp-34h] BYREF
  int v49; // [rsp+128h] [rbp-30h] BYREF
  int v50; // [rsp+12Ch] [rbp-2Ch] BYREF
  LPVOID Context; // [rsp+130h] [rbp-28h] BYREF
  union _RTL_RUN_ONCE *v52; // [rsp+138h] [rbp-20h] BYREF
  int v53; // [rsp+140h] [rbp-18h]
  ISMTracing *v54; // [rsp+168h] [rbp+10h] BYREF

  v54 = this;
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v52 = &`ISMTracing::Instance'::`2'::wrapper;
    Context = &qword_180268B30;
    qword_180268B30 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268B48 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v53 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v52);
  }
  v28 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v28 > 5u && (*(_BYTE *)(v28 + 16) & 1) != 0 && (*(_QWORD *)(v28 + 24) & 1LL) == *(_QWORD *)(v28 + 24) )
  {
    v30 = a23;
    v31 = a22;
    v32 = a21;
    v33 = a20;
    v34 = a19;
    v35 = a18;
    v36 = a17;
    v37 = a16;
    v38 = a15;
    v39 = a14;
    v40 = a13;
    v41 = a12;
    v42 = a11;
    v43 = a10;
    v44 = a9;
    v45 = a8;
    v46 = a7;
    v47 = a6;
    v48 = a5;
    v49 = a4;
    LOBYTE(v54) = a3;
    v50 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v28,
      byte_180229299,
      v26,
      v27,
      (__int64)&v50,
      (__int64)&v54,
      (__int64)&v49,
      (__int64)&v48,
      (__int64)&v47,
      (__int64)&v46,
      (__int64)&v45,
      (__int64)&v44,
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
      (__int64)&v30);
  }
}
