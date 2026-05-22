/*
 * XREFs of ?MPCMouseProcessor_PopulateTargetingDataForMouseDelta_@ISMTracing@@QEAAXIMMMMMMJJHJJMM@Z @ 0x1801C8A6C
 * Callers:
 *     ??$MPCMouseProcessor_PopulateTargetingDataForMouseDelta@AEAKAEAMAEAMAEAMAEAMAEAMAEAMAEAJAEAJAEAHAEAJAEAJAEAMAEAM@ISMTracing@@SAXAEAKAEAM11111AEAJ2AEAH2211@Z @ 0x1801C755C (--$MPCMouseProcessor_PopulateTargetingDataForMouseDelta@AEAKAEAMAEAMAEAMAEAMAEAMAEAMAEAJAEAJAEAH.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333333333@Z @ 0x1801C7674 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$.c)
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
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  float v19; // [rsp+98h] [rbp-39h] BYREF
  int v20; // [rsp+9Ch] [rbp-35h] BYREF
  int v21; // [rsp+A0h] [rbp-31h] BYREF
  int v22; // [rsp+A4h] [rbp-2Dh] BYREF
  int v23; // [rsp+A8h] [rbp-29h] BYREF
  int v24; // [rsp+ACh] [rbp-25h] BYREF
  float v25; // [rsp+B0h] [rbp-21h] BYREF
  float v26; // [rsp+B4h] [rbp-1Dh] BYREF
  float v27; // [rsp+B8h] [rbp-19h] BYREF
  float v28; // [rsp+BCh] [rbp-15h] BYREF
  float v29; // [rsp+C0h] [rbp-11h] BYREF
  float v30; // [rsp+C4h] [rbp-Dh] BYREF
  _DWORD v31[4]; // [rsp+C8h] [rbp-9h] BYREF
  ISMTracing *v32; // [rsp+E8h] [rbp+17h] BYREF
  float v33; // [rsp+F8h] [rbp+27h]
  float v34; // [rsp+100h] [rbp+2Fh]

  v34 = a4;
  v33 = a3;
  v32 = this;
  v16 = wil::details::static_lazy<ISMTracing>::get(
          (__int64)this,
          _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v16 > 5u && (*(_BYTE *)(v16 + 16) & 1) != 0 && (*(_QWORD *)(v16 + 24) & 1LL) == *(_QWORD *)(v16 + 24) )
  {
    *(float *)&v32 = a15;
    v19 = a14;
    v20 = a13;
    v21 = a12;
    v22 = a11;
    v23 = a10;
    v24 = a9;
    v25 = a8;
    v26 = a7;
    v27 = a6;
    v28 = a5;
    v29 = v34;
    v30 = v33;
    v31[0] = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v16,
      byte_1802071A5,
      v17,
      v18,
      (__int64)v31,
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
      (__int64)&v19,
      (__int64)&v32);
  }
}
