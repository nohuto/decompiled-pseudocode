/*
 * XREFs of ??$OverriddenMonitorSizeFound@PEBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG@Z @ 0x180457FBC
 * Callers:
 *     ?InitializeShellPreferencesDesktop@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18008D324 (-InitializeShellPreferencesDesktop@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?InitializeShellPreferencesHub@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18045FFC4 (-InitializeShellPreferencesHub@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180066424 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C1340 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::OverriddenMonitorSizeFound<unsigned short const *>(__int64 *a1)
{
  __int64 *v2; // rax
  _DWORD *v3; // rcx
  int v4; // ecx
  __int64 v5; // r9
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v2 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
         (__int64)a1,
         _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  v3 = (_DWORD *)v2[1];
  if ( *v3 > 5u )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)v3, 16LL);
    if ( (_BYTE)v2 )
    {
      v7 = *a1;
      LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
                     v4,
                     (int)&dword_1806B630E,
                     0,
                     v5,
                     (const WCHAR **)&v7);
    }
  }
  return (char)v2;
}
