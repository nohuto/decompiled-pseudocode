/*
 * XREFs of ?GetBoundingRectForSelectedText@UIAutomationHelpers@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z @ 0x18053A1EC
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x180536860 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 * Callees:
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180110D88 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z @ 0x180513280 (-IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z.c)
 *     ?GetBoundingRectForSelectedTextFromAncestorsOfFocusedElement@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUtagRECT@@@Z @ 0x18053A628 (-GetBoundingRectForSelectedTextFromAncestorsOfFocusedElement@UIAutomationHelpers@KeyboardHosting.c)
 *     ?GetBoundingRectForSelectedTextFromDescendantsOfFocusedElement@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUtagRECT@@@Z @ 0x18053AA50 (-GetBoundingRectForSelectedTextFromDescendantsOfFocusedElement@UIAutomationHelpers@KeyboardHosti.c)
 *     ?GetBoundingRectForSelectedTextFromDescendantsOfForegroundWindow@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUtagRECT@@@Z @ 0x18053ABA4 (-GetBoundingRectForSelectedTextFromDescendantsOfForegroundWindow@UIAutomationHelpers@KeyboardHos.c)
 *     ?GetBoundingRectFromFocusedElementForKnownControlTypes@UIAutomationHelpers@KeyboardHosting@@AEAAJPEAUtagRECT@@@Z @ 0x18053B09C (-GetBoundingRectFromFocusedElementForKnownControlTypes@UIAutomationHelpers@KeyboardHosting@@AEAA.c)
 */

__int64 __fastcall KeyboardHosting::UIAutomationHelpers::GetBoundingRectForSelectedText(
        KeyboardHosting::UIAutomationHelpers *this,
        struct tagRECT *a2)
{
  int BoundingRectFromFocusedElementForKnownControlTypes; // ebx
  int v5; // esi
  int BoundingRectForSelectedTextFromAncestorsOfFocusedElement; // eax
  const struct tagRECT *v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r9
  int v13; // [rsp+60h] [rbp+18h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  BoundingRectFromFocusedElementForKnownControlTypes = KeyboardHosting::UIAutomationHelpers::GetBoundingRectFromFocusedElementForKnownControlTypes(
                                                         this,
                                                         a2);
  if ( BoundingRectFromFocusedElementForKnownControlTypes >= 0 )
    return 0LL;
  v5 = 0;
  while ( 1 )
  {
    ++v5;
    if ( BoundingRectFromFocusedElementForKnownControlTypes >= 0 )
      break;
    BoundingRectForSelectedTextFromAncestorsOfFocusedElement = KeyboardHosting::UIAutomationHelpers::GetBoundingRectForSelectedTextFromAncestorsOfFocusedElement(
                                                                 this,
                                                                 a2);
    BoundingRectFromFocusedElementForKnownControlTypes = BoundingRectForSelectedTextFromAncestorsOfFocusedElement;
    if ( BoundingRectForSelectedTextFromAncestorsOfFocusedElement < 0 )
    {
      if ( BoundingRectForSelectedTextFromAncestorsOfFocusedElement != -2147467259
        && BoundingRectForSelectedTextFromAncestorsOfFocusedElement != -2147023728 )
      {
        return (unsigned int)BoundingRectFromFocusedElementForKnownControlTypes;
      }
    }
    else
    {
      if ( !KeyboardHosting::IsRectNull((KeyboardHosting *)a2, v7) )
        return (unsigned int)BoundingRectFromFocusedElementForKnownControlTypes;
      BoundingRectFromFocusedElementForKnownControlTypes = -2147023728;
    }
    if ( (int)KeyboardHosting::UIAutomationHelpers::GetBoundingRectForSelectedTextFromDescendantsOfFocusedElement(
                this,
                a2) >= 0 )
      return 0LL;
    Sleep(0x96u);
    v9 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                     v8,
                     _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
    if ( *v9 > 5u && tlgKeywordOn((__int64)v9, 0x200000000000LL) )
    {
      v14 = 0x1000000LL;
      v13 = BoundingRectFromFocusedElementForKnownControlTypes;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v10,
        byte_18086593B,
        0LL,
        v11,
        (__int64)&v13,
        (__int64)&v14);
    }
    if ( v5 >= 3 )
    {
      if ( BoundingRectFromFocusedElementForKnownControlTypes < 0 )
        return (unsigned int)KeyboardHosting::UIAutomationHelpers::GetBoundingRectForSelectedTextFromDescendantsOfForegroundWindow(
                               this,
                               a2);
      return (unsigned int)BoundingRectFromFocusedElementForKnownControlTypes;
    }
  }
  return (unsigned int)BoundingRectFromFocusedElementForKnownControlTypes;
}
