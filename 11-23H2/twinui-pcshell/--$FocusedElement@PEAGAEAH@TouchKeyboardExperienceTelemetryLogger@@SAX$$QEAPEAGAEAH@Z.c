/*
 * XREFs of ??$FocusedElement@PEAGAEAH@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEAGAEAH@Z @ 0x180539DD8
 * Callers:
 *     ?GetBoundingRectFromFocusedElementForKnownControlTypes@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUtagRECT@@@Z @ 0x18053B09C (-GetBoundingRectFromFocusedElementForKnownControlTypes@UIAutomationHelpers@KeyboardHosting@@AEAA.c)
 *     ?PreferUseUIAToGetBoundingBox@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomation@@AEA_N@Z @ 0x18053B2F8 (-PreferUseUIAToGetBoundingBox@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUIUIAutomation@@AEA_N.c)
 * Callees:
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180462268 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::FocusedElement<unsigned short *,int &>(__int64 *a1, _DWORD *a2)
{
  __int64 *v4; // rax
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v4 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
         (__int64)a1,
         _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  v5 = (_DWORD *)v4[1];
  if ( *v5 > 5u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v5, 0x200000000000LL);
    if ( (_BYTE)v4 )
    {
      LODWORD(v11) = *a2;
      v10 = *a1;
      v12 = 0x1000000LL;
      LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v6,
                     (unsigned __int8 *)dword_1808658F8,
                     v7,
                     v8,
                     (const WCHAR **)&v10,
                     (__int64)&v11,
                     (__int64)&v12);
    }
  }
  return (char)v4;
}
