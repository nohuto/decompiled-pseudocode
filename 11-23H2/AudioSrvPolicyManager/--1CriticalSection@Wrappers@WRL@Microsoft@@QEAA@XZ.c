/*
 * XREFs of ??1CriticalSection@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180016118
 * Callers:
 *     _CDuckingManager::CDuckingManager_::_1_::dtor$1 @ 0x1800488BB (_CDuckingManager--CDuckingManager_--_1_--dtor$1.c)
 *     _CDuckingManager::CDuckingManager_::_1_::dtor$4 @ 0x1800488FD (_CDuckingManager--CDuckingManager_--_1_--dtor$4.c)
 *     _ApplicationSpecificEndpointInfo::ApplicationSpecificEndpointInfo_::_1_::dtor$1 @ 0x180048F94 (_ApplicationSpecificEndpointInfo--ApplicationSpecificEndpointInfo_--_1_--dtor$1.c)
 *     _CEndpointVolumeStateManager::CEndpointVolumeStateManager_::_1_::dtor$1 @ 0x180049033 (_CEndpointVolumeStateManager--CEndpointVolumeStateManager_--_1_--dtor$1.c)
 *     _CApplication::CApplication_::_1_::dtor$2 @ 0x180049402 (_CApplication--CApplication_--_1_--dtor$2.c)
 *     _CApplication::CApplication_::_1_::dtor$5 @ 0x180049444 (_CApplication--CApplication_--_1_--dtor$5.c)
 *     _CApplication::CApplication_::_1_::dtor$6 @ 0x18004945D (_CApplication--CApplication_--_1_--dtor$6.c)
 *     _CApplication::CApplication_::_1_::dtor$7 @ 0x180049476 (_CApplication--CApplication_--_1_--dtor$7.c)
 *     _CApplication::CApplication_::_1_::dtor$8 @ 0x18004948F (_CApplication--CApplication_--_1_--dtor$8.c)
 *     _CApplication::CApplication_::_1_::dtor$9 @ 0x1800494A8 (_CApplication--CApplication_--_1_--dtor$9.c)
 *     _CApplication::CApplication_::_1_::dtor$10 @ 0x1800494C1 (_CApplication--CApplication_--_1_--dtor$10.c)
 *     _CApplication::CApplication_::_1_::dtor$11 @ 0x1800494DA (_CApplication--CApplication_--_1_--dtor$11.c)
 *     _CProcess::CProcess_::_1_::dtor$1 @ 0x18004951E (_CProcess--CProcess_--_1_--dtor$1.c)
 *     _CStreamClassPolicyGains::CStreamClassPolicyGains_::_1_::dtor$0 @ 0x1800496EA (_CStreamClassPolicyGains--CStreamClassPolicyGains_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Microsoft::WRL::Wrappers::CriticalSection::~CriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
