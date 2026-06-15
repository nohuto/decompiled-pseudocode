/*
 * XREFs of ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x1800C1414
 * Callers:
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x1800C13C0 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x1800C0B10 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 */

void __fastcall wil::TraceLoggingProvider::ReportTelemetryFailure(
        wil::TraceLoggingProvider *this,
        const struct wil::FailureInfo *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rcx
  int v5; // [rsp+A8h] [rbp-9h] BYREF
  int v6; // [rsp+ACh] [rbp-5h] BYREF
  int v7; // [rsp+B0h] [rbp-1h] BYREF
  void *v8; // [rsp+B8h] [rbp+7h] BYREF
  const CHAR *v9; // [rsp+C0h] [rbp+Fh] BYREF
  void *v10; // [rsp+C8h] [rbp+17h] BYREF
  const CHAR *v11; // [rsp+D0h] [rbp+1Fh] BYREF
  const CHAR *v12; // [rsp+D8h] [rbp+27h] BYREF
  void *v13; // [rsp+E0h] [rbp+2Fh] BYREF
  const CHAR *v14; // [rsp+E8h] [rbp+37h] BYREF
  const CHAR *v15; // [rsp+F0h] [rbp+3Fh] BYREF
  __int64 v16; // [rsp+F8h] [rbp+47h] BYREF
  int v17; // [rsp+118h] [rbp+67h] BYREF
  int v18; // [rsp+128h] [rbp+77h] BYREF
  int v19; // [rsp+130h] [rbp+7Fh] BYREF

  v4 = *((_QWORD *)this + 1);
  if ( *(_DWORD *)v4 > 2u
    && (*(_QWORD *)(v4 + 16) & 0x200000000000LL) != 0
    && (*(_QWORD *)(v4 + 24) & 0x200000000000LL) == *(_QWORD *)(v4 + 24) )
  {
    v8 = (void *)*((_QWORD *)a2 + 15);
    v9 = (const CHAR *)*((_QWORD *)a2 + 14);
    v17 = *((_DWORD *)a2 + 26);
    v10 = (void *)*((_QWORD *)a2 + 12);
    v11 = (const CHAR *)*((_QWORD *)a2 + 11);
    v18 = *((_DWORD *)a2 + 20);
    v12 = (const CHAR *)*((_QWORD *)a2 + 9);
    v19 = *((_DWORD *)a2 + 8);
    v13 = (void *)*((_QWORD *)a2 + 3);
    v5 = *(_DWORD *)a2;
    v14 = (const CHAR *)*((_QWORD *)a2 + 16);
    v6 = *((_DWORD *)a2 + 16);
    v15 = (const CHAR *)*((_QWORD *)a2 + 7);
    v7 = *((_DWORD *)a2 + 2);
    v16 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      v4,
      byte_180187D87,
      0x200000000000LL,
      a4,
      (__int64)&v16,
      (__int64)&v7,
      &v15,
      (__int64)&v6,
      &v14,
      (__int64)&v5,
      &v13,
      (__int64)&v19,
      &v12,
      (__int64)&v18,
      &v11,
      &v10,
      (__int64)&v17,
      &v9,
      &v8);
  }
}
