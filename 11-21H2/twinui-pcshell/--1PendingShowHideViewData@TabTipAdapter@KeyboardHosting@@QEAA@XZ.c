/*
 * XREFs of ??1PendingShowHideViewData@TabTipAdapter@KeyboardHosting@@QEAA@XZ @ 0x18046F3E0
 * Callers:
 *     _KeyboardHosting::TabTipAdapter::OnInputAppRequestedHide_::_1_::dtor$4 @ 0x180473CCC (_KeyboardHosting--TabTipAdapter--OnInputAppRequestedHide_--_1_--dtor$4.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppRequestedShow_::_1_::dtor$24 @ 0x1804754BD (_KeyboardHosting--TabTipAdapter--OnInputAppRequestedShow_--_1_--dtor$24.c)
 *     _KeyboardHosting::TabTipAdapter::OnPrimaryViewHidingResponse_::_1_::dtor$0 @ 0x1804763C8 (_KeyboardHosting--TabTipAdapter--OnPrimaryViewHidingResponse_--_1_--dtor$0.c)
 *     _KeyboardHosting::TabTipAdapter::OnPrimaryViewShowingResponse_::_1_::dtor$0 @ 0x180476DDB (_KeyboardHosting--TabTipAdapter--OnPrimaryViewShowingResponse_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall KeyboardHosting::TabTipAdapter::PendingShowHideViewData::~PendingShowHideViewData(
        KeyboardHosting::TabTipAdapter::PendingShowHideViewData *this)
{
  std::vector<Geometry::CRect>::_Tidy((__int64)this + 96);
}
