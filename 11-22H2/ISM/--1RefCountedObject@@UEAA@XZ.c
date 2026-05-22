/*
 * XREFs of ??1RefCountedObject@@UEAA@XZ @ 0x18002BAFC
 * Callers:
 *     _Win32kInterop::DoConvergedHitTestCallback_::_1_::dtor$8 @ 0x18007F4C0 (_Win32kInterop--DoConvergedHitTestCallback_--_1_--dtor$8.c)
 *     _KeyboardModifierState::KeyboardModifierState_::_1_::dtor$0 @ 0x1800804CB (_KeyboardModifierState--KeyboardModifierState_--_1_--dtor$0.c)
 *     _SystemContextProvider::SystemContextProvider_::_1_::dtor$0 @ 0x180080F1E (_SystemContextProvider--SystemContextProvider_--_1_--dtor$0.c)
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$0 @ 0x180080F34 (_Win32kInterop--Win32kInterop_--_1_--dtor$0.c)
 *     _DWMInputRouter::UpdateForegroundTarget_::_1_::dtor$26 @ 0x180081860 (_DWMInputRouter--UpdateForegroundTarget_--_1_--dtor$26.c)
 *     _DWMFocusedInputTarget::DWMFocusedInputTarget_::_1_::dtor$0 @ 0x180081B23 (_DWMFocusedInputTarget--DWMFocusedInputTarget_--_1_--dtor$0.c)
 *     _GameInputProcessor::GameInputProcessor_::_1_::dtor$0 @ 0x18008212E (_GameInputProcessor--GameInputProcessor_--_1_--dtor$0.c)
 *     _DWMCursorBroker::DWMCursorBroker_::_1_::dtor$0 @ 0x1800829AE (_DWMCursorBroker--DWMCursorBroker_--_1_--dtor$0.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$0 @ 0x180083164 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$0.c)
 *     _DWMCursor::DWMCursor_::_1_::dtor$0 @ 0x180083680 (_DWMCursor--DWMCursor_--_1_--dtor$0.c)
 *     _ContextualProcessorBuffer::ContextualProcessorBuffer_::_1_::dtor$0 @ 0x18008370A (_ContextualProcessorBuffer--ContextualProcessorBuffer_--_1_--dtor$0.c)
 *     _DeviceInputHost::DeviceInputHost_::_1_::dtor$0 @ 0x1800A96AB (_DeviceInputHost--DeviceInputHost_--_1_--dtor$0.c)
 *     _InputProcess::InputProcess_::_1_::dtor$0 @ 0x1800D9B27 (_InputProcess--InputProcess_--_1_--dtor$0.c)
 *     _InjectionRawInputProvider::InjectionRawInputProvider_::_1_::dtor$0 @ 0x1800F6B2E (_InjectionRawInputProvider--InjectionRawInputProvider_--_1_--dtor$0.c)
 *     _InputContext::InputContext_::_1_::dtor$0 @ 0x1801064D2 (_InputContext--InputContext_--_1_--dtor$0.c)
 *     _MPCTarget::MPCTarget_::_1_::dtor$0 @ 0x18011B07C (_MPCTarget--MPCTarget_--_1_--dtor$0.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$0 @ 0x18016A65B (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$0.c)
 *     _ResizeProcessor::ResizeProcessor_::_1_::dtor$0 @ 0x18017170A (_ResizeProcessor--ResizeProcessor_--_1_--dtor$0.c)
 *     _EdgyProcessor::EdgyProcessor_::_1_::dtor$0 @ 0x1801751A4 (_EdgyProcessor--EdgyProcessor_--_1_--dtor$0.c)
 *     _ISMHeatFrameworkHost::ISMHeatFrameworkHost_::_1_::dtor$0 @ 0x1801B0DCC (_ISMHeatFrameworkHost--ISMHeatFrameworkHost_--_1_--dtor$0.c)
 *     _PenInterface::PenInterface_::_1_::dtor$0 @ 0x1801B48F1 (_PenInterface--PenInterface_--_1_--dtor$0.c)
 *     _HapticInterface::HapticInterface_::_1_::dtor$0 @ 0x1801B7151 (_HapticInterface--HapticInterface_--_1_--dtor$0.c)
 *     _InputInfoValidator::InputInfoValidator_::_1_::dtor$0 @ 0x1801C2780 (_InputInfoValidator--InputInfoValidator_--_1_--dtor$0.c)
 *     _DWMLegacyInputTarget::DWMLegacyInputTarget_::_1_::dtor$0 @ 0x1801C87CA (_DWMLegacyInputTarget--DWMLegacyInputTarget_--_1_--dtor$0.c)
 *     _ButtonRecognizer::ButtonRecognizer_::_1_::dtor$0 @ 0x1801D2E0B (_ButtonRecognizer--ButtonRecognizer_--_1_--dtor$0.c)
 *     _InputForwardProcessor::InputForwardProcessor_::_1_::dtor$0 @ 0x1801D46A3 (_InputForwardProcessor--InputForwardProcessor_--_1_--dtor$0.c)
 *     _GameInputProcessor::_GameInputProcessor_::_1_::dtor$0 @ 0x1801DA494 (_GameInputProcessor--_GameInputProcessor_--_1_--dtor$0.c)
 *     _ButtonProcessor::ButtonProcessor_::_1_::dtor$0 @ 0x1801E5891 (_ButtonProcessor--ButtonProcessor_--_1_--dtor$0.c)
 *     _TouchInfoAdapter::TouchInfoAdapter_::_1_::dtor$0 @ 0x1801F8A86 (_TouchInfoAdapter--TouchInfoAdapter_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall RefCountedObject::~RefCountedObject(RefCountedObject *this)
{
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
