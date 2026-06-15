/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x1800C115C
 * Callers:
 *     _CSaDeviceProxy::RuntimeClassInitialize_::_1_::dtor$24 @ 0x18006C7C0 (_CSaDeviceProxy--RuntimeClassInitialize_--_1_--dtor$24.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$0 @ 0x18006EBC3 (_CMonitorManager--CMonitorManager_--_1_--dtor$0.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$2 @ 0x18006EBEF (_CMonitorManager--CMonitorManager_--_1_--dtor$2.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$4 @ 0x18006EC1B (_CMonitorManager--CMonitorManager_--_1_--dtor$4.c)
 *     _DynamicAudioEndpointManager::DynamicAudioEndpointManager_::_1_::dtor$1 @ 0x18006F4A6 (_DynamicAudioEndpointManager--DynamicAudioEndpointManager_--_1_--dtor$1.c)
 *     _CAudioSessionManager::CAudioSessionManager_::_1_::dtor$0 @ 0x18006F559 (_CAudioSessionManager--CAudioSessionManager_--_1_--dtor$0.c)
 *     _PhoneCallAudio::PhoneCallAudio_::_1_::dtor$4 @ 0x18006F629 (_PhoneCallAudio--PhoneCallAudio_--_1_--dtor$4.c)
 *     _AudioDeviceMgr::AudioDeviceMgr_::_1_::dtor$6 @ 0x18006F6F2 (_AudioDeviceMgr--AudioDeviceMgr_--_1_--dtor$6.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$2 @ 0x18006F7DE (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$2.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$3 @ 0x18006F7F4 (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$3.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$4 @ 0x18006F80A (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$4.c)
 *     _PhoneTopology::PhoneTopology_::_1_::dtor$2 @ 0x18006F87E (_PhoneTopology--PhoneTopology_--_1_--dtor$2.c)
 *     _CSharedStreamGroupProxy::RuntimeClassInitialize_::_1_::dtor$10 @ 0x180071C90 (_CSharedStreamGroupProxy--RuntimeClassInitialize_--_1_--dtor$10.c)
 *     _AtmosCheck::AtmosCheck_::_1_::dtor$2 @ 0x180072120 (_AtmosCheck--AtmosCheck_--_1_--dtor$2.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$1 @ 0x1800724BF (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$1.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$2 @ 0x1800724D5 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$2.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$3 @ 0x1800724EB (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$3.c)
 *     _CResourcePriorityTracker::CResourcePriorityTracker_::_1_::dtor$0 @ 0x1800F6FF2 (_CResourcePriorityTracker--CResourcePriorityTracker_--_1_--dtor$0.c)
 *     _CBtAudioResourceManager::CBtAudioResourceManager_::_1_::dtor$4 @ 0x18011387C (_CBtAudioResourceManager--CBtAudioResourceManager_--_1_--dtor$4.c)
 *     _CBtAudioResourceManager::CBtAudioResourceManager_::_1_::dtor$6 @ 0x18011389C (_CBtAudioResourceManager--CBtAudioResourceManager_--_1_--dtor$6.c)
 *     _CMonitor::CMonitor_::_1_::dtor$0 @ 0x180119028 (_CMonitor--CMonitor_--_1_--dtor$0.c)
 *     _CExclusiveModeListener::CExclusiveModeListener_::_1_::dtor$4 @ 0x180125A46 (_CExclusiveModeListener--CExclusiveModeListener_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
