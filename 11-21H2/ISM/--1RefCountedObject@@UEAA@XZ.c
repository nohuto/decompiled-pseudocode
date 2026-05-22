/*
 * XREFs of ??1RefCountedObject@@UEAA@XZ @ 0x18002151C
 * Callers:
 *     _DWMCursor::DWMCursor_::_1_::dtor$0 @ 0x180055186 (_DWMCursor--DWMCursor_--_1_--dtor$0.c)
 *     _DWMCursorBroker::DWMCursorBroker_::_1_::dtor$0 @ 0x180056B79 (_DWMCursorBroker--DWMCursorBroker_--_1_--dtor$0.c)
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$0 @ 0x180056CA9 (_Win32kInterop--Win32kInterop_--_1_--dtor$0.c)
 *     _KeyboardModifierState::KeyboardModifierState_::_1_::dtor$0 @ 0x180056F56 (_KeyboardModifierState--KeyboardModifierState_--_1_--dtor$0.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$0 @ 0x180056F68 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$0.c)
 *     _SystemContextProvider::SystemContextProvider_::_1_::dtor$0 @ 0x1800574A2 (_SystemContextProvider--SystemContextProvider_--_1_--dtor$0.c)
 *     _DWMInputRouter::GetTargetFromInputSite_::_1_::dtor$27 @ 0x180057630 (_DWMInputRouter--GetTargetFromInputSite_--_1_--dtor$27.c)
 *     _DWMInputRouter::UpdateForegroundTarget_::_1_::dtor$26 @ 0x1800577C0 (_DWMInputRouter--UpdateForegroundTarget_--_1_--dtor$26.c)
 *     _DWMInputRouter::UpdateForegroundTarget_::_1_::dtor$41 @ 0x180057860 (_DWMInputRouter--UpdateForegroundTarget_--_1_--dtor$41.c)
 *     _Win32kInterop::DoConvergedHitTestCallback_::_1_::dtor$20 @ 0x180057A40 (_Win32kInterop--DoConvergedHitTestCallback_--_1_--dtor$20.c)
 *     _GameInputProcessor::GameInputProcessor_::_1_::dtor$0 @ 0x180058563 (_GameInputProcessor--GameInputProcessor_--_1_--dtor$0.c)
 *     _DeviceInputHost::DeviceInputHost_::_1_::dtor$0 @ 0x1800800B7 (_DeviceInputHost--DeviceInputHost_--_1_--dtor$0.c)
 *     _InputProcess::InputProcess_::_1_::dtor$0 @ 0x1800B1753 (_InputProcess--InputProcess_--_1_--dtor$0.c)
 *     _InjectionRawInputProvider::InjectionRawInputProvider_::_1_::dtor$0 @ 0x1800CE502 (_InjectionRawInputProvider--InjectionRawInputProvider_--_1_--dtor$0.c)
 *     _InputContext::InputContext_::_1_::dtor$0 @ 0x1800DDDBA (_InputContext--InputContext_--_1_--dtor$0.c)
 *     _MPCTarget::MPCTarget_::_1_::dtor$0 @ 0x1800F32BC (_MPCTarget--MPCTarget_--_1_--dtor$0.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$0 @ 0x18013D247 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$0.c)
 *     _ResizeProcessor::ResizeProcessor_::_1_::dtor$0 @ 0x180144752 (_ResizeProcessor--ResizeProcessor_--_1_--dtor$0.c)
 *     _EdgyProcessor::EdgyProcessor_::_1_::dtor$0 @ 0x180148377 (_EdgyProcessor--EdgyProcessor_--_1_--dtor$0.c)
 *     _ISMHeatFrameworkHost::ISMHeatFrameworkHost_::_1_::dtor$0 @ 0x180183C88 (_ISMHeatFrameworkHost--ISMHeatFrameworkHost_--_1_--dtor$0.c)
 *     _PenInterface::PenInterface_::_1_::dtor$0 @ 0x1801887EB (_PenInterface--PenInterface_--_1_--dtor$0.c)
 *     _HapticInterface::HapticInterface_::_1_::dtor$0 @ 0x18018B00D (_HapticInterface--HapticInterface_--_1_--dtor$0.c)
 *     _InputInfoValidator::InputInfoValidator_::_1_::dtor$0 @ 0x180196FC0 (_InputInfoValidator--InputInfoValidator_--_1_--dtor$0.c)
 *     _DWMFocusedInputTarget::DWMFocusedInputTarget_::_1_::dtor$0 @ 0x18019C49A (_DWMFocusedInputTarget--DWMFocusedInputTarget_--_1_--dtor$0.c)
 *     _DWMLegacyInputTarget::DWMLegacyInputTarget_::_1_::dtor$0 @ 0x18019CD3A (_DWMLegacyInputTarget--DWMLegacyInputTarget_--_1_--dtor$0.c)
 *     _ButtonRecognizer::ButtonRecognizer_::_1_::dtor$0 @ 0x1801A71DB (_ButtonRecognizer--ButtonRecognizer_--_1_--dtor$0.c)
 *     _InputForwardProcessor::InputForwardProcessor_::_1_::dtor$0 @ 0x1801A8AB3 (_InputForwardProcessor--InputForwardProcessor_--_1_--dtor$0.c)
 *     _GameInputProcessor::_GameInputProcessor_::_1_::dtor$0 @ 0x1801AE804 (_GameInputProcessor--_GameInputProcessor_--_1_--dtor$0.c)
 *     _ButtonProcessor::ButtonProcessor_::_1_::dtor$0 @ 0x1801B9CB1 (_ButtonProcessor--ButtonProcessor_--_1_--dtor$0.c)
 *     _TouchInfoAdapter::TouchInfoAdapter_::_1_::dtor$0 @ 0x1801CCC76 (_TouchInfoAdapter--TouchInfoAdapter_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall RefCountedObject::~RefCountedObject(RefCountedObject *this)
{
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
