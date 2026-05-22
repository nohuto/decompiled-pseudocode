/*
 * XREFs of ??1?$lock_guard@Vrecursive_mutex@std@@@std@@QEAA@XZ @ 0x1800B41BC
 * Callers:
 *     _DWMCursorBroker::Initialize_::_1_::dtor$0 @ 0x18006DC21 (_DWMCursorBroker--Initialize_--_1_--dtor$0.c)
 *     _DWMCursorBroker::GetCursor_::_1_::dtor$0 @ 0x18006F811 (_DWMCursorBroker--GetCursor_--_1_--dtor$0.c)
 *     _DWMCursorBroker::OnSystemContextNotification_::_1_::dtor$0 @ 0x18006F823 (_DWMCursorBroker--OnSystemContextNotification_--_1_--dtor$0.c)
 *     _CursorNotificationProcessor::ProcessPositionChangedNotification_::_1_::dtor$0 @ 0x18006F980 (_CursorNotificationProcessor--ProcessPositionChangedNotification_--_1_--dtor$0.c)
 *     _DWMCursorBroker::GetCursorId_::_1_::dtor$0 @ 0x18006FC71 (_DWMCursorBroker--GetCursorId_--_1_--dtor$0.c)
 *     _MPCHolographicInputManager::ProcessCursorData_::_1_::dtor$0 @ 0x1800B7E91 (_MPCHolographicInputManager--ProcessCursorData_--_1_--dtor$0.c)
 *     _DockDeviceCollection::OnDeviceAttach_::_1_::dtor$3 @ 0x1800E24FB (_DockDeviceCollection--OnDeviceAttach_--_1_--dtor$3.c)
 *     _PointerInputMediator::OnNewFrame_::_1_::dtor$0 @ 0x1800FCFED (_PointerInputMediator--OnNewFrame_--_1_--dtor$0.c)
 *     _CursorNotificationProcessor::ProcessAppClipChangedNotification_::_1_::dtor$0 @ 0x1800FDDA2 (_CursorNotificationProcessor--ProcessAppClipChangedNotification_--_1_--dtor$0.c)
 *     _CallOnThreadExit::CallOnThreadExitStatic_::_1_::dtor$0 @ 0x180140A75 (_CallOnThreadExit--CallOnThreadExitStatic_--_1_--dtor$0.c)
 *     _CallOnThreadExit::Register_::_1_::dtor$1 @ 0x180140BFD (_CallOnThreadExit--Register_--_1_--dtor$1.c)
 *     _DWMCursorBroker::GetClosestInteractiveBounds_::_1_::dtor$0 @ 0x1801ED49B (_DWMCursorBroker--GetClosestInteractiveBounds_--_1_--dtor$0.c)
 *     _DWMCursorBroker::GetCursorAppClipRect_::_1_::dtor$0 @ 0x1801ED61B (_DWMCursorBroker--GetCursorAppClipRect_--_1_--dtor$0.c)
 *     _DWMCursorBroker::GetCursorPosition_::_1_::dtor$0 @ 0x1801ED793 (_DWMCursorBroker--GetCursorPosition_--_1_--dtor$0.c)
 *     _DWMCursorBroker::GetIsCursorLocked_::_1_::dtor$0 @ 0x1801ED999 (_DWMCursorBroker--GetIsCursorLocked_--_1_--dtor$0.c)
 *     _DWMCursorBroker::OnTargetChanged_::_1_::dtor$0 @ 0x1801EDC4A (_DWMCursorBroker--OnTargetChanged_--_1_--dtor$0.c)
 *     _DWMCursorBroker::SetCursorPosition_::_1_::dtor$0 @ 0x1801EDF58 (_DWMCursorBroker--SetCursorPosition_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

int __fastcall std::lock_guard<std::recursive_mutex>::~lock_guard<std::recursive_mutex>(_Mtx_t *a1)
{
  return _Mtx_unlock(*a1);
}
