/*
 * XREFs of ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x140003580
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x1400503FC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgWrap.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x140051540 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 */

void __fastcall wil::TraceLoggingProvider::OnErrorReported(
        wil::TraceLoggingProvider *this,
        char a2,
        const struct wil::FailureInfo *a3,
        int a4)
{
  __int64 v4; // rcx
  int v5; // [rsp+A0h] [rbp-9h] BYREF
  int v6; // [rsp+A4h] [rbp-5h] BYREF
  int v7; // [rsp+A8h] [rbp-1h] BYREF
  int v8; // [rsp+ACh] [rbp+3h] BYREF
  __int64 v9; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v10; // [rsp+B8h] [rbp+Fh] BYREF
  __int64 v11; // [rsp+C0h] [rbp+17h] BYREF
  __int64 v12; // [rsp+C8h] [rbp+1Fh] BYREF
  __int64 v13; // [rsp+D0h] [rbp+27h] BYREF
  __int64 v14; // [rsp+D8h] [rbp+2Fh] BYREF
  __int64 v15; // [rsp+E0h] [rbp+37h] BYREF
  __int64 v16; // [rsp+E8h] [rbp+3Fh] BYREF
  __int64 v17; // [rsp+F0h] [rbp+47h] BYREF
  int v18; // [rsp+118h] [rbp+6Fh] BYREF
  int v19; // [rsp+128h] [rbp+7Fh] BYREF

  if ( !a2 )
  {
    if ( *((_DWORD *)this + 5) == 1 )
    {
      v4 = *((_QWORD *)this + 1);
      if ( *(_DWORD *)v4 > 2u
        && (*(_QWORD *)(v4 + 16) & 0x200000000000LL) != 0
        && (*(_QWORD *)(v4 + 24) & 0x200000000000LL) == *(_QWORD *)(v4 + 24) )
      {
        v9 = *((_QWORD *)a3 + 15);
        v10 = *((_QWORD *)a3 + 14);
        v18 = *((_DWORD *)a3 + 26);
        v11 = *((_QWORD *)a3 + 12);
        v12 = *((_QWORD *)a3 + 11);
        v19 = *((_DWORD *)a3 + 20);
        v13 = *((_QWORD *)a3 + 9);
        v5 = *((_DWORD *)a3 + 8);
        v14 = *((_QWORD *)a3 + 3);
        v6 = *(_DWORD *)a3;
        v15 = *((_QWORD *)a3 + 16);
        v7 = *((_DWORD *)a3 + 16);
        v16 = *((_QWORD *)a3 + 7);
        v8 = *((_DWORD *)a3 + 2);
        v17 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v4,
          (unsigned int)&unk_1400A6376,
          (_DWORD)a3,
          a4,
          (__int64)&v17,
          (__int64)&v8,
          (__int64)&v16,
          (__int64)&v7,
          (__int64)&v15,
          (__int64)&v6,
          (__int64)&v14,
          (__int64)&v5,
          (__int64)&v13,
          (__int64)&v19,
          (__int64)&v12,
          (__int64)&v11,
          (__int64)&v18,
          (__int64)&v10,
          (__int64)&v9);
      }
    }
    else if ( *((_DWORD *)this + 5) == 2 )
    {
      wil::TraceLoggingProvider::ReportTraceLoggingFailure(this, a3);
    }
  }
}
