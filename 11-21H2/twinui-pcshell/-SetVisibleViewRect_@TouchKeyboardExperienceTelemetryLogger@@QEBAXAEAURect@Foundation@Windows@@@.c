/*
 * XREFs of ?SetVisibleViewRect_@TouchKeyboardExperienceTelemetryLogger@@QEBAXAEAURect@Foundation@Windows@@@Z @ 0x180464B5C
 * Callers:
 *     ??$SetVisibleViewRect@AEAURect@Foundation@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAURect@Foundation@Windows@@@Z @ 0x1804582CC (--$SetVisibleViewRect@AEAURect@Foundation@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXA.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x180037AFC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C1340 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::SetVisibleViewRect_(
        TouchKeyboardExperienceTelemetryLogger *this,
        struct Windows::Foundation::Rect *a2)
{
  _DWORD *v3; // rcx
  __int64 v4; // r9
  _DWORD v5[6]; // [rsp+40h] [rbp-18h] BYREF
  TouchKeyboardExperienceTelemetryLogger *v6; // [rsp+60h] [rbp+8h] BYREF
  int v7; // [rsp+70h] [rbp+18h] BYREF
  int v8; // [rsp+78h] [rbp+20h] BYREF

  v6 = this;
  v3 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                   (__int64)this,
                   _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
  if ( *v3 > 5u )
  {
    LODWORD(v6) = *((_DWORD *)a2 + 3);
    v7 = *((_DWORD *)a2 + 2);
    v8 = *((_DWORD *)a2 + 1);
    v5[0] = *(_DWORD *)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)v3,
      (int)&unk_1806B6780,
      0,
      v4,
      (__int64)v5,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6);
  }
}
