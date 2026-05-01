/*
 * XREFs of ??1ViewOptions@@QEAA@XZ @ 0x18050CDFC
 * Callers:
 *     _TouchKeyboardExperienceManager::OnInputAppRequestedShow_::_1_::dtor$0 @ 0x18020B239 (_TouchKeyboardExperienceManager--OnInputAppRequestedShow_--_1_--dtor$0.c)
 *     ?Show@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@PEAUIViewOptions@Text@Shell@Internal@4@@Z @ 0x1805164C0 (-Show@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@PEAUIViewOptions@Text@Shel.c)
 *     _TouchKeyboardExperienceManager::Show_::_1_::dtor$3 @ 0x1805168E4 (_TouchKeyboardExperienceManager--Show_--_1_--dtor$3.c)
 *     _GetViewOptions_::_1_::dtor$1 @ 0x180523E29 (_GetViewOptions_--_1_--dtor$1.c)
 *     _KeyboardHosting::TabTipAdapter::InvokeInputAppRequestedShow_::_1_::dtor$0 @ 0x180524D41 (_KeyboardHosting--TabTipAdapter--InvokeInputAppRequestedShow_--_1_--dtor$0.c)
 *     _KeyboardHosting::TabTipAdapter::OnInputAppRequestedShow_::_1_::dtor$4 @ 0x180527007 (_KeyboardHosting--TabTipAdapter--OnInputAppRequestedShow_--_1_--dtor$4.c)
 *     _KeyboardHosting::TabTipAdapter::OnPrimaryViewShowingResponse_::_1_::dtor$1 @ 0x180527DE6 (_KeyboardHosting--TabTipAdapter--OnPrimaryViewShowingResponse_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ViewOptions::~ViewOptions(ViewOptions *this)
{
  std::vector<Geometry::CRect>::_Tidy((__int64)(this + 8));
}
