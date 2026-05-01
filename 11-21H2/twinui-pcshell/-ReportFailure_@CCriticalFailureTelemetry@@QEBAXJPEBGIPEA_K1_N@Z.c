/*
 * XREFs of ?ReportFailure_@CCriticalFailureTelemetry@@QEBAXJPEBGIPEA_K1_N@Z @ 0x1805E8C94
 * Callers:
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1805E8BC0 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$07@@U3@U?$_tlgWrapperByVal@$00@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$07@@5AEBU?$_tlgWrapperByVal@$00@@5@Z @ 0x1805E8A4C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$07@@U3@U-$_tlgWrapper.c)
 *     ?get@?$static_lazy@VCCriticalFailureLogging@@@details@wil@@QEAAPEAVCCriticalFailureLogging@@P6AXXZ@Z @ 0x1805E922C (-get@-$static_lazy@VCCriticalFailureLogging@@@details@wil@@QEAAPEAVCCriticalFailureLogging@@P6AX.c)
 */

void __fastcall CCriticalFailureTelemetry::ReportFailure_(
        CCriticalFailureTelemetry *this,
        int a2,
        const unsigned __int16 *a3,
        int a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        bool a7)
{
  __int64 v10; // rax
  char v11; // al
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // [rsp+68h] [rbp+Fh] BYREF
  int v18; // [rsp+6Ch] [rbp+13h] BYREF
  __int64 v19; // [rsp+70h] [rbp+17h] BYREF
  __int64 v20; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v21; // [rsp+80h] [rbp+27h] BYREF
  __int64 v22; // [rsp+88h] [rbp+2Fh] BYREF
  __int64 v23; // [rsp+A8h] [rbp+4Fh] BYREF

  v23 = (__int64)this;
  v10 = wil::details::static_lazy<CCriticalFailureLogging>::get(
          this,
          _lambda_67a4077a10b7c017ab26ed22531248f2_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v10 + 8) > 5u )
  {
    v11 = tlgKeywordOn(*(_QWORD *)(v10 + 8), 0x200000000000LL);
    v15 = 0LL;
    if ( v11 )
    {
      LOBYTE(v23) = a7;
      v19 = 0x1000000LL;
      if ( a6 )
        v16 = *a6;
      else
        v16 = 0LL;
      v20 = v16;
      if ( a5 )
        v15 = *a5;
      v21 = v15;
      v17 = a4;
      v22 = (__int64)a3;
      v18 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
        v14,
        (unsigned __int8 *)dword_1806CD956,
        v12,
        v13,
        (__int64)&v18,
        (const WCHAR **)&v22,
        (__int64)&v17,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v23,
        (__int64)&v19);
    }
  }
}
