/*
 * XREFs of ??1PendingShowHideViewData@TabTipAdapter@KeyboardHosting@@QEAA@XZ @ 0x180521514
 * Callers:
 *     _KeyboardHosting::TabTipAdapter::OnInputAppRequestedHide_::_1_::dtor$4 @ 0x180526448 (_KeyboardHosting--TabTipAdapter--OnInputAppRequestedHide_--_1_--dtor$4.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppRequestedShow_::_1_::dtor$8 @ 0x180527013 (_KeyboardHosting--TabTipAdapter--OnInputAppRequestedShow_--_1_--dtor$8.c)
 *     ?OnPrimaryViewHidingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewHidingResponseEventArgs@45678@@Z @ 0x180527770 (-OnPrimaryViewHidingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 *     _KeyboardHosting::TabTipAdapter::OnPrimaryViewHidingResponse_::_1_::dtor$0 @ 0x180527ABA (_KeyboardHosting--TabTipAdapter--OnPrimaryViewHidingResponse_--_1_--dtor$0.c)
 *     ?OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewShowingResponseEventArgs@45678@@Z @ 0x180527AE0 (-OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 *     _KeyboardHosting::TabTipAdapter::OnPrimaryViewShowingResponse_::_1_::dtor$0 @ 0x180527DDA (_KeyboardHosting--TabTipAdapter--OnPrimaryViewShowingResponse_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall KeyboardHosting::TabTipAdapter::PendingShowHideViewData::~PendingShowHideViewData(
        KeyboardHosting::TabTipAdapter::PendingShowHideViewData *this)
{
  std::vector<Geometry::CRect>::_Tidy((__int64)this + 96);
}
