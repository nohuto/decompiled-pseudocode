/*
 * XREFs of ?ReportTraceLoggingMessage@TraceLoggingProvider@wil@@IEAAXPEBDPEAD@Z @ 0x1803EDFD8
 * Callers:
 *     ?TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ @ 0x1803EE630 (-TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800B49D8 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800C3614 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18028E130 (_alloca_probe.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x180392E84 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 */

void __fastcall wil::TraceLoggingProvider::ReportTraceLoggingMessage(
        wil::TraceLoggingProvider *this,
        const char *a2,
        char *a3)
{
  unsigned __int16 *v4; // rdx
  __int64 v5; // r10
  va_list v6; // r11
  __int64 v7; // r9
  _DWORD *v8; // rcx
  __int64 v9; // [rsp+30h] [rbp-1028h] BYREF
  _BYTE v10[4096]; // [rsp+40h] [rbp-1018h] BYREF

  if ( wil::TraceLoggingProvider::IsEnabled_(this, 5u) )
  {
    wil::details::PrintLoggingMessage((wil::details *)v10, v4, v5, v6);
    v8 = (_DWORD *)*((_QWORD *)this + 1);
    if ( *v8 > 5u )
    {
      v9 = (__int64)v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        (int)v8,
        (int)&dword_18084854F,
        0,
        v7,
        (const WCHAR **)&v9);
    }
  }
}
