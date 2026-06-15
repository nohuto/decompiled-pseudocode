/*
 * XREFs of ??1CriticalSection@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180016308
 * Callers:
 *     _CDuckingManager::CDuckingManager_::_1_::dtor$1 @ 0x180049D4B (_CDuckingManager--CDuckingManager_--_1_--dtor$1.c)
 *     _CDuckingManager::CDuckingManager_::_1_::dtor$4 @ 0x180049D8D (_CDuckingManager--CDuckingManager_--_1_--dtor$4.c)
 *     _ApplicationSpecificEndpointInfo::ApplicationSpecificEndpointInfo_::_1_::dtor$1 @ 0x18004A424 (_ApplicationSpecificEndpointInfo--ApplicationSpecificEndpointInfo_--_1_--dtor$1.c)
 *     _CEndpointVolumeStateManager::CEndpointVolumeStateManager_::_1_::dtor$1 @ 0x18004A4C3 (_CEndpointVolumeStateManager--CEndpointVolumeStateManager_--_1_--dtor$1.c)
 *     _CApplication::CApplication_::_1_::dtor$2 @ 0x18004A892 (_CApplication--CApplication_--_1_--dtor$2.c)
 *     _CApplication::CApplication_::_1_::dtor$5 @ 0x18004A8D4 (_CApplication--CApplication_--_1_--dtor$5.c)
 *     _CApplication::CApplication_::_1_::dtor$6 @ 0x18004A8ED (_CApplication--CApplication_--_1_--dtor$6.c)
 *     _CApplication::CApplication_::_1_::dtor$7 @ 0x18004A906 (_CApplication--CApplication_--_1_--dtor$7.c)
 *     _CApplication::CApplication_::_1_::dtor$8 @ 0x18004A91F (_CApplication--CApplication_--_1_--dtor$8.c)
 *     _CApplication::CApplication_::_1_::dtor$9 @ 0x18004A938 (_CApplication--CApplication_--_1_--dtor$9.c)
 *     _CApplication::CApplication_::_1_::dtor$10 @ 0x18004A951 (_CApplication--CApplication_--_1_--dtor$10.c)
 *     _CApplication::CApplication_::_1_::dtor$11 @ 0x18004A96A (_CApplication--CApplication_--_1_--dtor$11.c)
 *     _CProcess::CProcess_::_1_::dtor$1 @ 0x18004A9AE (_CProcess--CProcess_--_1_--dtor$1.c)
 *     _CStreamClassPolicyGains::CStreamClassPolicyGains_::_1_::dtor$0 @ 0x18004AB7A (_CStreamClassPolicyGains--CStreamClassPolicyGains_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Microsoft::WRL::Wrappers::CriticalSection::~CriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
