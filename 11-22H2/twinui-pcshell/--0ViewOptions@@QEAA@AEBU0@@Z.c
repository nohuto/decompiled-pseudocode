/*
 * XREFs of ??0ViewOptions@@QEAA@AEBU0@@Z @ 0x1802DA8C8
 * Callers:
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@UViewOptions@@@Z @ 0x18020B060 (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@UViewOptions@@@Z.c)
 *     ?Show@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@PEAUIViewOptions@Text@Shell@Internal@4@@Z @ 0x1805164C0 (-Show@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@PEAUIViewOptions@Text@Shel.c)
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x180526850 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewShowingResponseEventArgs@45678@@Z @ 0x180527AE0 (-OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 * Callees:
 *     ??0?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1802DA7C8 (--0-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@std@@@std@@QEAA@AE.c)
 */

ViewOptions *__fastcall ViewOptions::ViewOptions(ViewOptions *this, const struct ViewOptions *a2)
{
  *(_BYTE *)this = *(_BYTE *)a2;
  *((_BYTE *)this + 1) = *((_BYTE *)a2 + 1);
  *((_BYTE *)this + 2) = *((_BYTE *)a2 + 2);
  *((_BYTE *)this + 3) = *((_BYTE *)a2 + 3);
  this[1] = *((ViewOptions *)a2 + 1);
  this[2] = *((ViewOptions *)a2 + 2);
  this[3] = *((ViewOptions *)a2 + 3);
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  std::vector<Windows::Foundation::Rect>::vector<Windows::Foundation::Rect>((__int64 *)this + 4, (__int64)a2 + 32);
  return this;
}
