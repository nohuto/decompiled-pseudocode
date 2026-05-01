/*
 * XREFs of ?FireInputPaneShowingEvent_@TouchKeyboardExperienceTelemetryLogger@@QEBAXIAEBUtagRECT@@@Z @ 0x18045DB84
 * Callers:
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@AEBU2@@Z @ 0x18045D9A0 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@AEBU2@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C1340 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333@Z @ 0x18014A4B8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEB.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::FireInputPaneShowingEvent_(
        TouchKeyboardExperienceTelemetryLogger *this,
        int a2,
        const struct tagRECT *a3)
{
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  LONG top; // [rsp+50h] [rbp-18h] BYREF
  LONG left; // [rsp+54h] [rbp-14h] BYREF
  _DWORD v11[4]; // [rsp+58h] [rbp-10h] BYREF
  TouchKeyboardExperienceTelemetryLogger *v12; // [rsp+70h] [rbp+8h] BYREF
  LONG right; // [rsp+88h] [rbp+20h] BYREF

  v12 = this;
  v5 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                   (__int64)this,
                   _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
  if ( *v5 > 5u )
  {
    if ( tlgKeywordOn((__int64)v5, 16LL) )
    {
      LODWORD(v12) = a3->bottom;
      right = a3->right;
      top = a3->top;
      left = a3->left;
      v11[0] = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v6,
        byte_1806B6725,
        v7,
        v8,
        (__int64)v11,
        (__int64)&left,
        (__int64)&top,
        (__int64)&right,
        (__int64)&v12);
    }
  }
}
