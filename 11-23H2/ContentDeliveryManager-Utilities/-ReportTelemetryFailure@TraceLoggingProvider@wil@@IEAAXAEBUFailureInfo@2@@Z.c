/*
 * XREFs of ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x18003E370
 * Callers:
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x180039750 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@45456456@Z @ 0x180001618 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     _tlgKeywordOn @ 0x180001D28 (_tlgKeywordOn.c)
 */

void __fastcall wil::TraceLoggingProvider::ReportTelemetryFailure(
        wil::TraceLoggingProvider *this,
        const struct wil::FailureInfo *a2)
{
  _DWORD *v2; // rcx
  int v3; // ecx
  __int64 v4; // r9
  int v5; // [rsp+A0h] [rbp-9h] BYREF
  int v6; // [rsp+A4h] [rbp-5h] BYREF
  __int64 v7; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v8; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v9; // [rsp+B8h] [rbp+Fh] BYREF
  __int64 v10; // [rsp+C0h] [rbp+17h] BYREF
  __int64 v11; // [rsp+C8h] [rbp+1Fh] BYREF
  __int64 v12; // [rsp+D0h] [rbp+27h] BYREF
  __int64 v13; // [rsp+D8h] [rbp+2Fh] BYREF
  __int64 v14; // [rsp+E0h] [rbp+37h] BYREF
  __int64 v15; // [rsp+E8h] [rbp+3Fh] BYREF
  __int64 v16; // [rsp+F0h] [rbp+47h] BYREF
  __int64 v17; // [rsp+110h] [rbp+67h] BYREF
  __int64 v18; // [rsp+120h] [rbp+77h] BYREF
  __int64 v19; // [rsp+128h] [rbp+7Fh] BYREF

  v2 = (_DWORD *)*((_QWORD *)this + 1);
  if ( *v2 > 2u )
  {
    if ( tlgKeywordOn((__int64)v2, 0x200000000000LL) )
    {
      v8 = *(_QWORD *)(v4 + 120);
      v9 = *(_QWORD *)(v4 + 112);
      LODWORD(v17) = *(_DWORD *)(v4 + 104);
      v10 = *(_QWORD *)(v4 + 96);
      v11 = *(_QWORD *)(v4 + 88);
      LODWORD(v18) = *(_DWORD *)(v4 + 80);
      v12 = *(_QWORD *)(v4 + 72);
      LODWORD(v19) = *(_DWORD *)(v4 + 32);
      v13 = *(_QWORD *)(v4 + 24);
      v5 = *(_DWORD *)v4;
      v14 = *(_QWORD *)(v4 + 128);
      v6 = *(_DWORD *)(v4 + 64);
      v15 = *(_QWORD *)(v4 + 56);
      LODWORD(v7) = *(_DWORD *)(v4 + 8);
      v16 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
        v3,
        (int)&dword_18017A401,
        0,
        v4,
        (__int64)&v16,
        (__int64)&v7,
        (const wchar_t **)&v15,
        (__int64)&v6,
        (const wchar_t **)&v14,
        (__int64)&v5,
        (const wchar_t **)&v13,
        (__int64)&v19,
        (const wchar_t **)&v12,
        (__int64)&v18,
        (const wchar_t **)&v11,
        (const wchar_t **)&v10,
        (__int64)&v17,
        (const wchar_t **)&v9,
        (const wchar_t **)&v8);
    }
  }
}
