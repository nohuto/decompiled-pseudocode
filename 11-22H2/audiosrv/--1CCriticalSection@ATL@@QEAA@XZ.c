/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x18008101C
 * Callers:
 *     _CResourcePriorityTracker::CResourcePriorityTracker_::_1_::dtor$0 @ 0x18007926C (_CResourcePriorityTracker--CResourcePriorityTracker_--_1_--dtor$0.c)
 *     _PhoneTopology::PhoneTopology_::_1_::dtor$2 @ 0x18007A5EB (_PhoneTopology--PhoneTopology_--_1_--dtor$2.c)
 *     _CAudioSessionManager::CAudioSessionManager_::_1_::dtor$0 @ 0x18007A938 (_CAudioSessionManager--CAudioSessionManager_--_1_--dtor$0.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$1 @ 0x18007AD6A (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$1.c)
 *     _DynamicAudioEndpointManager::DynamicAudioEndpointManager_::_1_::dtor$1 @ 0x18007CE2F (_DynamicAudioEndpointManager--DynamicAudioEndpointManager_--_1_--dtor$1.c)
 *     _AudioDeviceMgr::AudioDeviceMgr_::_1_::dtor$6 @ 0x18007CF4D (_AudioDeviceMgr--AudioDeviceMgr_--_1_--dtor$6.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$0 @ 0x18007D04C (_CMonitorManager--CMonitorManager_--_1_--dtor$0.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$2 @ 0x18007D062 (_CMonitorManager--CMonitorManager_--_1_--dtor$2.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$4 @ 0x18007D08E (_CMonitorManager--CMonitorManager_--_1_--dtor$4.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$2 @ 0x18007D282 (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$2.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$3 @ 0x18007D298 (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$3.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$4 @ 0x18007D2AE (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$4.c)
 *     _AtmosCheck::AtmosCheck_::_1_::dtor$2 @ 0x18007D4D8 (_AtmosCheck--AtmosCheck_--_1_--dtor$2.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$2 @ 0x18007DA81 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$2.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$3 @ 0x18007DA97 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$3.c)
 *     _PhoneCallAudio::PhoneCallAudio_::_1_::dtor$4 @ 0x18007DC46 (_PhoneCallAudio--PhoneCallAudio_--_1_--dtor$4.c)
 *     _CBtAudioResourceManagerBase::CBtAudioResourceManagerBase_::_1_::dtor$5 @ 0x1800F52A7 (_CBtAudioResourceManagerBase--CBtAudioResourceManagerBase_--_1_--dtor$5.c)
 *     _CBtAudioResourceManagerBase::CBtAudioResourceManagerBase_::_1_::dtor$7 @ 0x1800F52CA (_CBtAudioResourceManagerBase--CBtAudioResourceManagerBase_--_1_--dtor$7.c)
 *     _CExclusiveModeListener::CExclusiveModeListener_::_1_::dtor$4 @ 0x1801335EE (_CExclusiveModeListener--CExclusiveModeListener_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
