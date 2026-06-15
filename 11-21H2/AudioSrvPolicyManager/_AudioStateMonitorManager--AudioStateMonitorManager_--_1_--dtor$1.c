/*
 * XREFs of _AudioStateMonitorManager::AudioStateMonitorManager_::_1_::dtor$1 @ 0x1800451AA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioStateMonitorManager::AudioStateMonitorManager_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::CriticalSection::~CriticalSection((LPCRITICAL_SECTION)(*(_QWORD *)(a2 + 48) + 16LL));
}
