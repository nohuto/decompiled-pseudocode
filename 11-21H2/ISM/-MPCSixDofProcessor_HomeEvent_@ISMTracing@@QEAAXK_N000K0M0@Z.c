/*
 * XREFs of ?MPCSixDofProcessor_HomeEvent_@ISMTracing@@QEAAXK_N000K0M0@Z @ 0x1801C0250
 * Callers:
 *     ??$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_N2AEBI2$$QEAM1@Z @ 0x1801BCF9C (--$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_N2A.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U2@U3@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@5554545@Z @ 0x1801BD930 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U3@U3@U3@U2@.c)
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
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  bool v16; // [rsp+78h] [rbp+7h] BYREF
  bool v17; // [rsp+79h] [rbp+8h] BYREF
  bool v18; // [rsp+7Ah] [rbp+9h] BYREF
  char v19; // [rsp+7Bh] [rbp+Ah] BYREF
  _BYTE v20[4]; // [rsp+7Ch] [rbp+Bh] BYREF
  float v21; // [rsp+80h] [rbp+Fh] BYREF
  unsigned int v22; // [rsp+84h] [rbp+13h] BYREF
  int v23; // [rsp+88h] [rbp+17h] BYREF
  __int64 v24; // [rsp+90h] [rbp+1Fh] BYREF
  ISMTracing *v25; // [rsp+A8h] [rbp+37h] BYREF

  v25 = this;
  v13 = wil::details::static_lazy<ISMTracing>::get(
          (__int64)this,
          _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v13 > 4u
    && (*(_QWORD *)(v13 + 16) & 0x400000000001LL) != 0
    && (*(_QWORD *)(v13 + 24) & 0x400000000001LL) == *(_QWORD *)(v13 + 24) )
  {
    LOBYTE(v25) = a10;
    v21 = a9;
    v16 = a8;
    v22 = a7;
    v17 = a6;
    v18 = a5;
    v19 = a4;
    v20[0] = a3;
    v23 = a2;
    v24 = 50331648LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      v13,
      byte_180206FA7,
      v14,
      v15,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v22,
      (__int64)&v16,
      (__int64)&v21,
      (__int64)&v25);
  }
}
