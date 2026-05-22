/*
 * XREFs of ??1?$lock_guard@Vrecursive_mutex@std@@@std@@QEAA@XZ @ 0x18009CC38
 * Callers:
 *     _DWMCursorBroker::CreateCursor_::_1_::dtor$0 @ 0x180055110 (_DWMCursorBroker--CreateCursor_--_1_--dtor$0.c)
 *     _DWMCursorBroker::Initialize_::_1_::dtor$0 @ 0x18005832F (_DWMCursorBroker--Initialize_--_1_--dtor$0.c)
 *     _CursorNotificationProcessor::ProcessPositionChangedNotification_::_1_::dtor$0 @ 0x180058662 (_CursorNotificationProcessor--ProcessPositionChangedNotification_--_1_--dtor$0.c)
 *     _DWMCursorBroker::GetCursor_::_1_::dtor$0 @ 0x180058686 (_DWMCursorBroker--GetCursor_--_1_--dtor$0.c)
 *     _DWMCursorBroker::OnSystemContextNotification_::_1_::dtor$0 @ 0x180058826 (_DWMCursorBroker--OnSystemContextNotification_--_1_--dtor$0.c)
 *     _DWMCursorBroker::GetCursorId_::_1_::dtor$0 @ 0x180058864 (_DWMCursorBroker--GetCursorId_--_1_--dtor$0.c)
 *     _MPCHolographicInputManager::ProcessCursorData_::_1_::dtor$0 @ 0x1800A0691 (_MPCHolographicInputManager--ProcessCursorData_--_1_--dtor$0.c)
 *     _DockDeviceCollection::OnDeviceAttach_::_1_::dtor$3 @ 0x1800C8B32 (_DockDeviceCollection--OnDeviceAttach_--_1_--dtor$3.c)
 *     _Win32kInterop::DoConvergedMTCallback_::_1_::dtor$3 @ 0x1800DFC5D (_Win32kInterop--DoConvergedMTCallback_--_1_--dtor$3.c)
 *     _CursorNotificationProcessor::ProcessAppClipChangedNotification_::_1_::dtor$0 @ 0x1800E4F8A (_CursorNotificationProcessor--ProcessAppClipChangedNotification_--_1_--dtor$0.c)
 *     _CallOnThreadExit::CallOnThreadExitStatic_::_1_::dtor$0 @ 0x1801263F5 (_CallOnThreadExit--CallOnThreadExitStatic_--_1_--dtor$0.c)
 *     _CallOnThreadExit::Register_::_1_::dtor$1 @ 0x18012657D (_CallOnThreadExit--Register_--_1_--dtor$1.c)
 *     _DWMCursorBroker::GetClosestInteractiveBounds_::_1_::dtor$0 @ 0x1801CE4AA (_DWMCursorBroker--GetClosestInteractiveBounds_--_1_--dtor$0.c)
 *     _DWMCursorBroker::GetCursorAppClipRect_::_1_::dtor$0 @ 0x1801CE610 (_DWMCursorBroker--GetCursorAppClipRect_--_1_--dtor$0.c)
 *     _DWMCursorBroker::GetCursorPosition_::_1_::dtor$0 @ 0x1801CE76F (_DWMCursorBroker--GetCursorPosition_--_1_--dtor$0.c)
 *     _DWMCursorBroker::GetIsCursorLocked_::_1_::dtor$0 @ 0x1801CE95E (_DWMCursorBroker--GetIsCursorLocked_--_1_--dtor$0.c)
 *     _DWMCursorBroker::OnTargetChanged_::_1_::dtor$0 @ 0x1801CEBFA (_DWMCursorBroker--OnTargetChanged_--_1_--dtor$0.c)
 *     _DWMCursorBroker::SetCursorPosition_::_1_::dtor$0 @ 0x1801CEEF7 (_DWMCursorBroker--SetCursorPosition_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

int __fastcall std::lock_guard<std::recursive_mutex>::~lock_guard<std::recursive_mutex>(_Mtx_t *a1)
{
  return _Mtx_unlock(*a1);
}
