/*
 * XREFs of ??$UIAFoundBoundingRectForSelectedTextUsing@AEAY0CG@$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEAY0CG@$$CBG@Z @ 0x180539E64
 * Callers:
 *     ?GetBoundingRectForSelectedTextFromAncestorsOfFocusedElement@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUtagRECT@@@Z @ 0x18053A628 (-GetBoundingRectForSelectedTextFromAncestorsOfFocusedElement@UIAutomationHelpers@KeyboardHosting.c)
 * Callees:
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18018F764 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::UIAFoundBoundingRectForSelectedTextUsing<unsigned short const (&)[38]>(
        __int64 a1)
{
  __int64 *v1; // rax
  _DWORD *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v6 = a1;
  v1 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
         a1,
         _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  v2 = (_DWORD *)v1[1];
  if ( *v2 > 5u )
  {
    LOBYTE(v1) = tlgKeywordOn((__int64)v2, 0x200000000000LL);
    if ( (_BYTE)v1 )
    {
      v6 = 0x1000000LL;
      v7 = (__int64)L"SearchUpBoundingBoxFromFocusedElement";
      LOBYTE(v1) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v3,
                     (unsigned __int8 *)dword_18086585B,
                     0LL,
                     v4,
                     (const WCHAR **)&v7,
                     (__int64)&v6);
    }
  }
  return (char)v1;
}
