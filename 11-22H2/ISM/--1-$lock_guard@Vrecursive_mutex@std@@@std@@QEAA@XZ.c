/*
 * XREFs of ??1?$lock_guard@Vrecursive_mutex@std@@@std@@QEAA@XZ @ 0x1800C58C4
 * Callers:
 *     _DWMCursorBroker::Initialize_::_1_::dtor$0 @ 0x180080238 (_DWMCursorBroker--Initialize_--_1_--dtor$0.c)
 *     _DWMCursorBroker::GetCursor_::_1_::dtor$0 @ 0x180083011 (_DWMCursorBroker--GetCursor_--_1_--dtor$0.c)
 *     _DWMCursorBroker::OnSystemContextNotification_::_1_::dtor$0 @ 0x180083023 (_DWMCursorBroker--OnSystemContextNotification_--_1_--dtor$0.c)
 *     _CursorNotificationProcessor::ProcessPositionChangedNotification_::_1_::dtor$0 @ 0x180083487 (_CursorNotificationProcessor--ProcessPositionChangedNotification_--_1_--dtor$0.c)
 *     _DWMCursorBroker::GetCursorId_::_1_::dtor$0 @ 0x18008378E (_DWMCursorBroker--GetCursorId_--_1_--dtor$0.c)
 *     _MPCHolographicInputManager::ProcessCursorData_::_1_::dtor$0 @ 0x1800C8FA9 (_MPCHolographicInputManager--ProcessCursorData_--_1_--dtor$0.c)
 *     _DockDeviceCollection::OnDeviceAttach_::_1_::dtor$3 @ 0x1800F145B (_DockDeviceCollection--OnDeviceAttach_--_1_--dtor$3.c)
 *     _PointerInputMediator::OnNewFrame_::_1_::dtor$0 @ 0x18010BB0D (_PointerInputMediator--OnNewFrame_--_1_--dtor$0.c)
 *     _CursorNotificationProcessor::ProcessAppClipChangedNotification_::_1_::dtor$0 @ 0x18010C8C2 (_CursorNotificationProcessor--ProcessAppClipChangedNotification_--_1_--dtor$0.c)
 *     _CallOnThreadExit::CallOnThreadExitStatic_::_1_::dtor$0 @ 0x18014EB25 (_CallOnThreadExit--CallOnThreadExitStatic_--_1_--dtor$0.c)
 *     _CallOnThreadExit::Register_::_1_::dtor$1 @ 0x18014ECAD (_CallOnThreadExit--Register_--_1_--dtor$1.c)
 *     _DWMCursorBroker::GetClosestInteractiveBounds_::_1_::dtor$0 @ 0x1801FA1CB (_DWMCursorBroker--GetClosestInteractiveBounds_--_1_--dtor$0.c)
 *     _DWMCursorBroker::GetCursorAppClipRect_::_1_::dtor$0 @ 0x1801FA34B (_DWMCursorBroker--GetCursorAppClipRect_--_1_--dtor$0.c)
 *     _DWMCursorBroker::GetCursorPosition_::_1_::dtor$0 @ 0x1801FA4C3 (_DWMCursorBroker--GetCursorPosition_--_1_--dtor$0.c)
 *     _DWMCursorBroker::GetIsCursorLocked_::_1_::dtor$0 @ 0x1801FA6C9 (_DWMCursorBroker--GetIsCursorLocked_--_1_--dtor$0.c)
 *     _DWMCursorBroker::OnTargetChanged_::_1_::dtor$0 @ 0x1801FA97A (_DWMCursorBroker--OnTargetChanged_--_1_--dtor$0.c)
 *     _DWMCursorBroker::SetCursorPosition_::_1_::dtor$0 @ 0x1801FAC88 (_DWMCursorBroker--SetCursorPosition_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

int __fastcall std::lock_guard<std::recursive_mutex>::~lock_guard<std::recursive_mutex>(_Mtx_t *a1)
{
  return _Mtx_unlock(*a1);
}
