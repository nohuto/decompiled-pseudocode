/*
 * XREFs of ??1ViewOptions@@QEAA@XZ @ 0x18045B5B0
 * Callers:
 *     _TouchKeyboardExperienceManager::OnInputAppRequestedShow_::_1_::dtor$0 @ 0x180463241 (_TouchKeyboardExperienceManager--OnInputAppRequestedShow_--_1_--dtor$0.c)
 *     _GetViewOptions_::_1_::dtor$1 @ 0x180471830 (_GetViewOptions_--_1_--dtor$1.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppRequestedShow_::_1_::dtor$4 @ 0x1804754B1 (_KeyboardHosting--TabTipAdapter--OnInputAppRequestedShow_--_1_--dtor$4.c)
 *     _KeyboardHosting::TabTipAdapter::OnPrimaryViewShowingResponse_::_1_::dtor$1 @ 0x180476DE7 (_KeyboardHosting--TabTipAdapter--OnPrimaryViewShowingResponse_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ViewOptions::~ViewOptions(ViewOptions *this)
{
  std::vector<Geometry::CRect>::_Tidy((__int64)(this + 8));
}
