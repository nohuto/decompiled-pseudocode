/*
 * XREFs of ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x1800BE690
 * Callers:
 *     ?HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x180152950 (-HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Win.c)
 *     ?OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlSelectionChangedEventArgs@45678@@Z @ 0x1801BB4E0 (-OnEditControlSelectionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core.c)
 *     ?GetOccludingRectInGlobalCoordinates@ViewRectHelper@KeyboardHosting@@SA?AUtagRECT@@U3@URect@Foundation@Windows@@@Z @ 0x1802DE180 (-GetOccludingRectInGlobalCoordinates@ViewRectHelper@KeyboardHosting@@SA-AUtagRECT@@U3@URect@Foun.c)
 *     ?ValidateRect@ViewRectHelper@KeyboardHosting@@CAXPEAURect@Foundation@Windows@@@Z @ 0x1802DE1E8 (-ValidateRect@ViewRectHelper@KeyboardHosting@@CAXPEAURect@Foundation@Windows@@@Z.c)
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x180514044 (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 *     ?GetCurrentTextSelectionRect@TabTipAdapter@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z @ 0x180523008 (-GetCurrentTextSelectionRect@TabTipAdapter@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@URect@Foundation@Windows@@0@Z @ 0x18052F7C0 (-GetAvoidanceRect@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@URect@Foundation@Windows@@0@Z.c)
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x18052FAEC (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 *     ?GetViewRectNearFocusedElement@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@1PEAU9Foundation@8@PEA_N3@Z @ 0x18052FE54 (-GetViewRectNearFocusedElement@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRe.c)
 *     ?GetViewRectRelativeToInside@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@PEAU9Foundation@8@@Z @ 0x180530078 (-GetViewRectRelativeToInside@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequ.c)
 *     ?IgnoreRelativeToFocusedElementShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180533914 (-IgnoreRelativeToFocusedElementShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKe.c)
 *     ?IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x180533A0C (-IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ.c)
 *     ?UpdateCurrentMonitorIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x1805350D8 (-UpdateCurrentMonitorIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUCoreKeyboardPosit.c)
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x180536860 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 *     ?IsViewOccludingCaret@ViewRectProvider@KeyboardHosting@@AEAA_NAEAURect@Foundation@Windows@@0@Z @ 0x1805373E4 (-IsViewOccludingCaret@ViewRectProvider@KeyboardHosting@@AEAA_NAEAURect@Foundation@Windows@@0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeyboardHosting::IsRectNull(KeyboardHosting *this, const struct Windows::Foundation::Rect *a2)
{
  return *(float *)this == 0.0
      && *((float *)this + 1) == 0.0
      && *((float *)this + 2) == 0.0
      && *((float *)this + 3) == 0.0;
}
