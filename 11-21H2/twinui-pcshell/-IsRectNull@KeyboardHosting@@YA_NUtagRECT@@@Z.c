/*
 * XREFs of ?IsRectNull@KeyboardHosting@@YA_NUtagRECT@@@Z @ 0x180460EC0
 * Callers:
 *     ?ValidateRect@ViewRectHelper@KeyboardHosting@@CAXPEAURect@Foundation@Windows@@@Z @ 0x18022F208 (-ValidateRect@ViewRectHelper@KeyboardHosting@@CAXPEAURect@Foundation@Windows@@@Z.c)
 *     ?AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z @ 0x18045BD28 (-AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@AEBU2@@Z @ 0x18045D9A0 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@AEBU2@@Z.c)
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x18045F8A4 (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?SendPrimaryViewAnimationStartingEvent@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1804648DC (-SendPrimaryViewAnimationStartingEvent@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x180464CD0 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x18046B180 (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeyboardHosting::IsRectNull(KeyboardHosting *this, struct tagRECT *a2)
{
  bool result; // al

  result = 0;
  if ( !*(_DWORD *)this && !*((_DWORD *)this + 1) && !*((_DWORD *)this + 2) )
    return *((_DWORD *)this + 3) == 0;
  return result;
}
