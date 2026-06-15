/*
 * XREFs of ??1CriticalSection@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180008EB8
 * Callers:
 *     _CProcess::CProcess_::_1_::dtor$1 @ 0x1800449E2 (_CProcess--CProcess_--_1_--dtor$1.c)
 *     _CDuckingManager::CDuckingManager_::_1_::dtor$4 @ 0x180044A24 (_CDuckingManager--CDuckingManager_--_1_--dtor$4.c)
 *     _AudioStateMonitorManager::AudioStateMonitorManager_::_1_::dtor$1 @ 0x1800451AA (_AudioStateMonitorManager--AudioStateMonitorManager_--_1_--dtor$1.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$20 @ 0x18004559C (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$20.c)
 *     _CApplication::CApplication_::_1_::dtor$2 @ 0x18004579F (_CApplication--CApplication_--_1_--dtor$2.c)
 *     _CApplication::CApplication_::_1_::dtor$5 @ 0x1800457E1 (_CApplication--CApplication_--_1_--dtor$5.c)
 *     _CApplication::CApplication_::_1_::dtor$6 @ 0x1800457FA (_CApplication--CApplication_--_1_--dtor$6.c)
 *     _CApplication::CApplication_::_1_::dtor$7 @ 0x180045813 (_CApplication--CApplication_--_1_--dtor$7.c)
 *     _CApplication::CApplication_::_1_::dtor$8 @ 0x18004582C (_CApplication--CApplication_--_1_--dtor$8.c)
 *     _CApplication::CApplication_::_1_::dtor$9 @ 0x180045845 (_CApplication--CApplication_--_1_--dtor$9.c)
 *     _CApplication::CApplication_::_1_::dtor$10 @ 0x18004585E (_CApplication--CApplication_--_1_--dtor$10.c)
 *     _CApplication::CApplication_::_1_::dtor$11 @ 0x180045877 (_CApplication--CApplication_--_1_--dtor$11.c)
 *     _TSSession::Create_::_1_::dtor$7 @ 0x180045F0F (_TSSession--Create_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall Microsoft::WRL::Wrappers::CriticalSection::~CriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
