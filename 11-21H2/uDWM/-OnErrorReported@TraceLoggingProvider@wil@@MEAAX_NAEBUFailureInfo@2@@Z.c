/*
 * XREFs of ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x1800064E0
 * Callers:
 *     ?FallbackTelemetryCallback@WindowFrameLoggingTelemetry@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x180006410 (-FallbackTelemetryCallback@WindowFrameLoggingTelemetry@@SAX_NAEBUFailureInfo@wil@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18003E1A0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x180093318 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180095378 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 */

void __fastcall wil::TraceLoggingProvider::OnErrorReported(
        wil::TraceLoggingProvider *this,
        char a2,
        const struct wil::FailureInfo *a3)
{
  _DWORD *v3; // rcx
  int v4; // ecx
  int *v5; // r9
  int v6; // [rsp+A0h] [rbp-9h] BYREF
  int v7; // [rsp+A4h] [rbp-5h] BYREF
  int v8; // [rsp+A8h] [rbp-1h] BYREF
  int v9; // [rsp+ACh] [rbp+3h] BYREF
  __int64 v10; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v11; // [rsp+B8h] [rbp+Fh] BYREF
  __int64 v12; // [rsp+C0h] [rbp+17h] BYREF
  __int64 v13; // [rsp+C8h] [rbp+1Fh] BYREF
  __int64 v14; // [rsp+D0h] [rbp+27h] BYREF
  __int64 v15; // [rsp+D8h] [rbp+2Fh] BYREF
  __int64 v16; // [rsp+E0h] [rbp+37h] BYREF
  __int64 v17; // [rsp+E8h] [rbp+3Fh] BYREF
  __int64 v18; // [rsp+F0h] [rbp+47h] BYREF
  int v19; // [rsp+118h] [rbp+6Fh] BYREF
  int v20; // [rsp+128h] [rbp+7Fh] BYREF

  if ( !a2 )
  {
    if ( *((_DWORD *)this + 5) == 1 )
    {
      v3 = (_DWORD *)*((_QWORD *)this + 1);
      if ( *v3 > 2u )
      {
        if ( (unsigned __int8)tlgKeywordOn(v3, 0x200000000000LL) )
        {
          v10 = *((_QWORD *)v5 + 15);
          v11 = *((_QWORD *)v5 + 14);
          v19 = v5[26];
          v12 = *((_QWORD *)v5 + 12);
          v13 = *((_QWORD *)v5 + 11);
          v20 = v5[20];
          v14 = *((_QWORD *)v5 + 9);
          v6 = v5[8];
          v15 = *((_QWORD *)v5 + 3);
          v7 = *v5;
          v16 = *((_QWORD *)v5 + 16);
          v8 = v5[16];
          v17 = *((_QWORD *)v5 + 7);
          v9 = v5[2];
          v18 = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
            v4,
            (unsigned int)&unk_18011E23F,
            0,
            (_DWORD)v5,
            (__int64)&v18,
            (__int64)&v9,
            (__int64)&v17,
            (__int64)&v8,
            (__int64)&v16,
            (__int64)&v7,
            (__int64)&v15,
            (__int64)&v6,
            (__int64)&v14,
            (__int64)&v20,
            (__int64)&v13,
            (__int64)&v12,
            (__int64)&v19,
            (__int64)&v11,
            (__int64)&v10);
        }
      }
    }
    else if ( *((_DWORD *)this + 5) == 2 )
    {
      wil::TraceLoggingProvider::ReportTraceLoggingFailure(this, a3);
    }
  }
}
