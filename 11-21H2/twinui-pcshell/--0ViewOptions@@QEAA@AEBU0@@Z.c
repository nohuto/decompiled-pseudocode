/*
 * XREFs of ??0ViewOptions@@QEAA@AEBU0@@Z @ 0x18022E026
 * Callers:
 *     _lambda_41fdec79629b933043b6dd44cc33a98f_::_lambda_41fdec79629b933043b6dd44cc33a98f_ @ 0x1801AF10C (_lambda_41fdec79629b933043b6dd44cc33a98f_--_lambda_41fdec79629b933043b6dd44cc33a98f_.c)
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x180474140 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewShowingResponseEventArgs@45678@@Z @ 0x1804763F0 (-OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 * Callees:
 *     ??0?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18045A8E0 (--0-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@std@@@std@@QEAA@AE.c)
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
  std::vector<Windows::Foundation::Rect>::vector<Windows::Foundation::Rect>(this + 8, (char *)a2 + 32);
  return this;
}
