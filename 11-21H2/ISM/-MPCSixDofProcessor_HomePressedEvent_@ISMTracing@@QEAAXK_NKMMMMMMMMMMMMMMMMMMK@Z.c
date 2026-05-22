/*
 * XREFs of ?MPCSixDofProcessor_HomePressedEvent_@ISMTracing@@QEAAXK_NKMMMMMMMMMMMMMMMMMMK@Z @ 0x1801C03EC
 * Callers:
 *     ??$MPCSixDofProcessor_HomePressedEvent@KAEA_NAEAKAEBMAEBMAEBMAEBMAEBMAEBMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEBI@ISMTracing@@SAX$$QEAKAEA_NAEAKAEBM33333AEAM44444444444AEBI@Z @ 0x1801BD280 (--$MPCSixDofProcessor_HomePressedEvent@KAEA_NAEAKAEBMAEBMAEBMAEBMAEBMAEBMAEAMAEAMAEAMAEAMAEAMAEA.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@33333333333333333333@Z @ 0x1801BD518 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U.c)
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
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // [rsp+D8h] [rbp-80h] BYREF
  float v30; // [rsp+DCh] [rbp-7Ch] BYREF
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
  int v48; // [rsp+124h] [rbp-34h] BYREF
  _DWORD v49[4]; // [rsp+128h] [rbp-30h] BYREF
  ISMTracing *v50; // [rsp+148h] [rbp-10h] BYREF

  v50 = this;
  v26 = wil::details::static_lazy<ISMTracing>::get(
          (__int64)this,
          _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v26 > 5u && (*(_BYTE *)(v26 + 16) & 1) != 0 && (*(_QWORD *)(v26 + 24) & 1LL) == *(_QWORD *)(v26 + 24) )
  {
    v29 = a23;
    v30 = a22;
    v31 = a21;
    v32 = a20;
    v33 = a19;
    v34 = a18;
    v35 = a17;
    v36 = a16;
    v37 = a15;
    v38 = a14;
    v39 = a13;
    v40 = a12;
    v41 = a11;
    v42 = a10;
    v43 = a9;
    v44 = a8;
    v45 = a7;
    v46 = a6;
    v47 = a5;
    v48 = a4;
    LOBYTE(v50) = a3;
    v49[0] = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v26,
      byte_180206D7D,
      v27,
      v28,
      (__int64)v49,
      (__int64)&v50,
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
      (__int64)&v30,
      (__int64)&v29);
  }
}
