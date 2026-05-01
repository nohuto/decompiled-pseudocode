/*
 * XREFs of ?WorkAreaChanged_ForceToFitRectInMonitor_@TouchKeyboardExperienceTelemetryLogger@@QEBAXPEBGAEBUtagRECT@@1@Z @ 0x18051C22C
 * Callers:
 *     ??$WorkAreaChanged_ForceToFitRectInMonitor@PEBGAEAUtagRECT@@AEBU1@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEAUtagRECT@@AEBU1@@Z @ 0x1805092FC (--$WorkAreaChanged_ForceToFitRectInMonitor@PEBGAEAUtagRECT@@AEBU1@@TouchKeyboardExperienceTeleme.c)
 * Callees:
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@5555555@Z @ 0x18050A564 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::WorkAreaChanged_ForceToFitRectInMonitor_(
        TouchKeyboardExperienceTelemetryLogger *this,
        const unsigned __int16 *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r9
  LONG right; // [rsp+78h] [rbp+27h] BYREF
  LONG top; // [rsp+7Ch] [rbp+2Bh] BYREF
  LONG left; // [rsp+80h] [rbp+2Fh] BYREF
  LONG bottom; // [rsp+84h] [rbp+33h] BYREF
  LONG v14; // [rsp+88h] [rbp+37h] BYREF
  LONG v15; // [rsp+8Ch] [rbp+3Bh] BYREF
  LONG v16; // [rsp+90h] [rbp+3Fh] BYREF
  __int64 v17; // [rsp+98h] [rbp+47h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+4Fh] BYREF
  __int64 v19; // [rsp+B8h] [rbp+67h] BYREF

  v19 = (__int64)this;
  v7 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                   (__int64)this,
                   _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
  if ( *v7 > 5u )
  {
    if ( tlgKeywordOn((__int64)v7, 16LL) )
    {
      LODWORD(v19) = a4->bottom;
      right = a4->right;
      top = a4->top;
      left = a4->left;
      bottom = a3->bottom;
      v14 = a3->right;
      v15 = a3->top;
      v16 = a3->left;
      v17 = (__int64)a2;
      v18 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v8,
        (unsigned __int8 *)dword_18085DC93,
        0LL,
        v9,
        (__int64)&v18,
        (const WCHAR **)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&bottom,
        (__int64)&left,
        (__int64)&top,
        (__int64)&right,
        (__int64)&v19);
    }
  }
}
