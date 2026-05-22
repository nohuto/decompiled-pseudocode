/*
 * XREFs of ??1RefCountedObject@@UEAA@XZ @ 0x18002A1DC
 * Callers:
 *     _Win32kInterop::DoConvergedHitTestCallback_::_1_::dtor$8 @ 0x18006B9E0 (_Win32kInterop--DoConvergedHitTestCallback_--_1_--dtor$8.c)
 *     _GameInputProcessor::GameInputProcessor_::_1_::dtor$0 @ 0x18006C7F6 (_GameInputProcessor--GameInputProcessor_--_1_--dtor$0.c)
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$0 @ 0x18006CDE6 (_Win32kInterop--Win32kInterop_--_1_--dtor$0.c)
 *     _DWMInputRouter::UpdateForegroundTarget_::_1_::dtor$26 @ 0x18006D6E0 (_DWMInputRouter--UpdateForegroundTarget_--_1_--dtor$26.c)
 *     _DWMFocusedInputTarget::DWMFocusedInputTarget_::_1_::dtor$0 @ 0x18006D963 (_DWMFocusedInputTarget--DWMFocusedInputTarget_--_1_--dtor$0.c)
 *     _KeyboardModifierState::KeyboardModifierState_::_1_::dtor$0 @ 0x18006DE76 (_KeyboardModifierState--KeyboardModifierState_--_1_--dtor$0.c)
 *     _SystemContextProvider::SystemContextProvider_::_1_::dtor$0 @ 0x18006E752 (_SystemContextProvider--SystemContextProvider_--_1_--dtor$0.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$0 @ 0x18006E800 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$0.c)
 *     _DWMCursorBroker::DWMCursorBroker_::_1_::dtor$0 @ 0x18006F199 (_DWMCursorBroker--DWMCursorBroker_--_1_--dtor$0.c)
 *     _DWMCursor::DWMCursor_::_1_::dtor$0 @ 0x18006FB79 (_DWMCursor--DWMCursor_--_1_--dtor$0.c)
 *     _ContextualProcessorBuffer::ContextualProcessorBuffer_::_1_::dtor$0 @ 0x18006FC03 (_ContextualProcessorBuffer--ContextualProcessorBuffer_--_1_--dtor$0.c)
 *     _DeviceInputHost::DeviceInputHost_::_1_::dtor$0 @ 0x18009700B (_DeviceInputHost--DeviceInputHost_--_1_--dtor$0.c)
 *     _InputProcess::InputProcess_::_1_::dtor$0 @ 0x1800CA8CB (_InputProcess--InputProcess_--_1_--dtor$0.c)
 *     _InjectionRawInputProvider::InjectionRawInputProvider_::_1_::dtor$0 @ 0x1800E7BAE (_InjectionRawInputProvider--InjectionRawInputProvider_--_1_--dtor$0.c)
 *     _InputContext::InputContext_::_1_::dtor$0 @ 0x1800F7A52 (_InputContext--InputContext_--_1_--dtor$0.c)
 *     _MPCTarget::MPCTarget_::_1_::dtor$0 @ 0x18010CEB5 (_MPCTarget--MPCTarget_--_1_--dtor$0.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$0 @ 0x18015C3DB (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$0.c)
 *     _ResizeProcessor::ResizeProcessor_::_1_::dtor$0 @ 0x18016348A (_ResizeProcessor--ResizeProcessor_--_1_--dtor$0.c)
 *     _EdgyProcessor::EdgyProcessor_::_1_::dtor$0 @ 0x180166F24 (_EdgyProcessor--EdgyProcessor_--_1_--dtor$0.c)
 *     _ISMHeatFrameworkHost::ISMHeatFrameworkHost_::_1_::dtor$0 @ 0x1801A2DEC (_ISMHeatFrameworkHost--ISMHeatFrameworkHost_--_1_--dtor$0.c)
 *     _PenInterface::PenInterface_::_1_::dtor$0 @ 0x1801A6911 (_PenInterface--PenInterface_--_1_--dtor$0.c)
 *     _HapticInterface::HapticInterface_::_1_::dtor$0 @ 0x1801A9171 (_HapticInterface--HapticInterface_--_1_--dtor$0.c)
 *     _InputInfoValidator::InputInfoValidator_::_1_::dtor$0 @ 0x1801B5058 (_InputInfoValidator--InputInfoValidator_--_1_--dtor$0.c)
 *     _DWMLegacyInputTarget::DWMLegacyInputTarget_::_1_::dtor$0 @ 0x1801BAF2A (_DWMLegacyInputTarget--DWMLegacyInputTarget_--_1_--dtor$0.c)
 *     _ButtonRecognizer::ButtonRecognizer_::_1_::dtor$0 @ 0x1801C559B (_ButtonRecognizer--ButtonRecognizer_--_1_--dtor$0.c)
 *     _InputForwardProcessor::InputForwardProcessor_::_1_::dtor$0 @ 0x1801C6E33 (_InputForwardProcessor--InputForwardProcessor_--_1_--dtor$0.c)
 *     _GameInputProcessor::_GameInputProcessor_::_1_::dtor$0 @ 0x1801CCC24 (_GameInputProcessor--_GameInputProcessor_--_1_--dtor$0.c)
 *     _ButtonProcessor::ButtonProcessor_::_1_::dtor$0 @ 0x1801D8021 (_ButtonProcessor--ButtonProcessor_--_1_--dtor$0.c)
 *     _TouchInfoAdapter::TouchInfoAdapter_::_1_::dtor$0 @ 0x1801EBD56 (_TouchInfoAdapter--TouchInfoAdapter_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall RefCountedObject::~RefCountedObject(RefCountedObject *this)
{
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
