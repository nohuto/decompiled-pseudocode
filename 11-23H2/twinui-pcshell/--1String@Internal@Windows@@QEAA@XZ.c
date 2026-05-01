/*
 * XREFs of ??1String@Internal@Windows@@QEAA@XZ @ 0x1801BF480
 * Callers:
 *     _IsGameManager::LoadKGLFromGameDVRFolder_::_1_::dtor$0 @ 0x1802B3B64 (_IsGameManager--LoadKGLFromGameDVRFolder_--_1_--dtor$0.c)
 *     _UwpWindowEventDispatcher::UwpWindowActivating_::_1_::dtor$32 @ 0x1802B7726 (_UwpWindowEventDispatcher--UwpWindowActivating_--_1_--dtor$32.c)
 *     _IsGameManager::LoadKGLFromGameDVRFolder_::_1_::dtor$1 @ 0x1802B89B8 (_IsGameManager--LoadKGLFromGameDVRFolder_--_1_--dtor$1.c)
 *     _IsGameManager::UpdateGameDVRKGLCopy_::_1_::dtor$1 @ 0x1802B9E38 (_IsGameManager--UpdateGameDVRKGLCopy_--_1_--dtor$1.c)
 *     _IsGameManager::CheckStateRepositoryForIsGameFromAppId_::_1_::dtor$5 @ 0x1802BEBCE (_IsGameManager--CheckStateRepositoryForIsGameFromAppId_--_1_--dtor$5.c)
 *     _IsGameManager::CheckStateRepositoryForIsGameFromAppId_::_1_::dtor$7 @ 0x1802BEBF2 (_IsGameManager--CheckStateRepositoryForIsGameFromAppId_--_1_--dtor$7.c)
 *     _UwpWindowEventDispatcher::UwpWindowAdded_::_1_::dtor$11 @ 0x1802C497B (_UwpWindowEventDispatcher--UwpWindowAdded_--_1_--dtor$11.c)
 *     _UwpWindowEventDispatcher::UwpWindowAdded_::_1_::dtor$12 @ 0x1802C498D (_UwpWindowEventDispatcher--UwpWindowAdded_--_1_--dtor$12.c)
 *     _dynamic_atexit_destructor_for__GameDVR_OutputDebug::s_TraceOutputFilePath__ @ 0x1802C7B30 (_dynamic_atexit_destructor_for__GameDVR_OutputDebug--s_TraceOutputFilePath__.c)
 *     _BroadcastDVRComponent::GetNonServiceProcessListAndIds_::_1_::dtor$1 @ 0x1803D898E (_BroadcastDVRComponent--GetNonServiceProcessListAndIds_--_1_--dtor$1.c)
 *     _BroadcastDVRComponent::GetSortedUniqueProcessList_::_1_::dtor$1 @ 0x1803D8BC2 (_BroadcastDVRComponent--GetSortedUniqueProcessList_--_1_--dtor$1.c)
 *     _BroadcastDVRComponent::LaunchGameOverlayWithStartupTipsFlag_::_1_::dtor$2 @ 0x1803D920A (_BroadcastDVRComponent--LaunchGameOverlayWithStartupTipsFlag_--_1_--dtor$2.c)
 *     _IsGameManager::UpdateGameFullPathInGameConfigStore_::_1_::dtor$0 @ 0x1803E175F (_IsGameManager--UpdateGameFullPathInGameConfigStore_--_1_--dtor$0.c)
 *     _WindowEventDispatcher::AppViewActivationRequested_::_1_::dtor$29 @ 0x1804BF7E7 (_WindowEventDispatcher--AppViewActivationRequested_--_1_--dtor$29.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::String::~String(HSTRING *this)
{
  HSTRING v1; // rcx

  v1 = *this;
  if ( v1 )
    WindowsDeleteString(v1);
}
