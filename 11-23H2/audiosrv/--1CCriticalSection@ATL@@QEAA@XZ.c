/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x180080FEC
 * Callers:
 *     _CResourcePriorityTracker::CResourcePriorityTracker_::_1_::dtor$0 @ 0x18007923C (_CResourcePriorityTracker--CResourcePriorityTracker_--_1_--dtor$0.c)
 *     _PhoneTopology::PhoneTopology_::_1_::dtor$2 @ 0x18007A5BB (_PhoneTopology--PhoneTopology_--_1_--dtor$2.c)
 *     _CAudioSessionManager::CAudioSessionManager_::_1_::dtor$0 @ 0x18007A908 (_CAudioSessionManager--CAudioSessionManager_--_1_--dtor$0.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$1 @ 0x18007AD3A (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$1.c)
 *     _DynamicAudioEndpointManager::DynamicAudioEndpointManager_::_1_::dtor$1 @ 0x18007CDFF (_DynamicAudioEndpointManager--DynamicAudioEndpointManager_--_1_--dtor$1.c)
 *     _AudioDeviceMgr::AudioDeviceMgr_::_1_::dtor$6 @ 0x18007CF1D (_AudioDeviceMgr--AudioDeviceMgr_--_1_--dtor$6.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$0 @ 0x18007D01C (_CMonitorManager--CMonitorManager_--_1_--dtor$0.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$2 @ 0x18007D032 (_CMonitorManager--CMonitorManager_--_1_--dtor$2.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$4 @ 0x18007D05E (_CMonitorManager--CMonitorManager_--_1_--dtor$4.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$2 @ 0x18007D252 (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$2.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$3 @ 0x18007D268 (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$3.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$4 @ 0x18007D27E (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$4.c)
 *     _AtmosCheck::AtmosCheck_::_1_::dtor$2 @ 0x18007D4A8 (_AtmosCheck--AtmosCheck_--_1_--dtor$2.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$2 @ 0x18007DA51 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$2.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$3 @ 0x18007DA67 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$3.c)
 *     _PhoneCallAudio::PhoneCallAudio_::_1_::dtor$4 @ 0x18007DC16 (_PhoneCallAudio--PhoneCallAudio_--_1_--dtor$4.c)
 *     _CBtAudioResourceManagerBase::CBtAudioResourceManagerBase_::_1_::dtor$5 @ 0x1800F5257 (_CBtAudioResourceManagerBase--CBtAudioResourceManagerBase_--_1_--dtor$5.c)
 *     _CBtAudioResourceManagerBase::CBtAudioResourceManagerBase_::_1_::dtor$7 @ 0x1800F527A (_CBtAudioResourceManagerBase--CBtAudioResourceManagerBase_--_1_--dtor$7.c)
 *     _CExclusiveModeListener::CExclusiveModeListener_::_1_::dtor$4 @ 0x18013359E (_CExclusiveModeListener--CExclusiveModeListener_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
