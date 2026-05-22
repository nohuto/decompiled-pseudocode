/*
 * XREFs of ??1?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@XZ @ 0x1800AE500
 * Callers:
 *     _InputAttemptedTargetManager::ProcessInputAttempt_::_1_::dtor$0 @ 0x18006B740 (_InputAttemptedTargetManager--ProcessInputAttempt_--_1_--dtor$0.c)
 *     _Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl_::_1_::dtor$10 @ 0x18006C636 (_Microsoft--BamoImpl--BaseBamoConnectionImpl--BaseBamoConnectionImpl_--_1_--dtor$10.c)
 *     _GameInputProcessor::GameInputProcessor_::_1_::dtor$5 @ 0x18006C864 (_GameInputProcessor--GameInputProcessor_--_1_--dtor$5.c)
 *     _MPCRawInputProvider::FlushQueuedDeviceChanges_::_1_::dtor$1 @ 0x1800CF399 (_MPCRawInputProvider--FlushQueuedDeviceChanges_--_1_--dtor$1.c)
 *     _LampArrayDevice::ProcessLampState_::_1_::dtor$1 @ 0x1800EC653 (_LampArrayDevice--ProcessLampState_--_1_--dtor$1.c)
 *     _Win32kInterop::RoutePointerFrame_::_1_::dtor$0 @ 0x1800FB3A1 (_Win32kInterop--RoutePointerFrame_--_1_--dtor$0.c)
 *     _PointerInputMediator::PointerFrame::PointerFrame_::_1_::dtor$0 @ 0x1800FCA97 (_PointerInputMediator--PointerFrame--PointerFrame_--_1_--dtor$0.c)
 *     _PointerInputMediator::PointerFrame::PointerFrame_::_1_::dtor$1 @ 0x1800FCAAA (_PointerInputMediator--PointerFrame--PointerFrame_--_1_--dtor$1.c)
 *     _PointerInputMediator::PointerFrame::PointerFrame_::_1_::dtor$0_0 @ 0x1800FCB85 (_PointerInputMediator--PointerFrame--PointerFrame_--_1_--dtor$0_0.c)
 *     _PointerInputMediator::PointerFrame::PointerFrame_::_1_::dtor$1_0 @ 0x1800FCB98 (_PointerInputMediator--PointerFrame--PointerFrame_--_1_--dtor$1_0.c)
 *     _SystemCursorShape2::FindClosestShapeBitmap_::_1_::dtor$0 @ 0x1801057E7 (_SystemCursorShape2--FindClosestShapeBitmap_--_1_--dtor$0.c)
 *     _ViewHierarchyWithWindowManager::GetAllAncestors_::_1_::dtor$0 @ 0x180108EB4 (_ViewHierarchyWithWindowManager--GetAllAncestors_--_1_--dtor$0.c)
 *     _MPCInputRouter::Update3DFocusWNF_::_1_::dtor$0 @ 0x18010B415 (_MPCInputRouter--Update3DFocusWNF_--_1_--dtor$0.c)
 *     _ButtonRecognizer::FindExactComboButtonMatch_::_1_::dtor$0 @ 0x1801C5DD2 (_ButtonRecognizer--FindExactComboButtonMatch_--_1_--dtor$0.c)
 *     _ButtonRecognizer::IsComboButtonCandidate_::_1_::dtor$0 @ 0x1801C6206 (_ButtonRecognizer--IsComboButtonCandidate_--_1_--dtor$0.c)
 *     _ButtonRecognizer::RegisterComboButton_::_1_::dtor$0 @ 0x1801C678C (_ButtonRecognizer--RegisterComboButton_--_1_--dtor$0.c)
 *     _GameInputProcessor::_GameInputProcessor_::_1_::dtor$5 @ 0x1801CCC74 (_GameInputProcessor--_GameInputProcessor_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<Windows::UI::Color>::~vector<Windows::UI::Color>(__int64 a1)
{
  std::vector<Windows::UI::Color>::_Tidy(a1);
}
