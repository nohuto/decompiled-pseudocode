/*
 * XREFs of ??1CGlobalManipulationManager@@EEAA@XZ @ 0x1802834D8
 * Callers:
 *     ??_ECGlobalManipulationManager@@EEAAPEAXI@Z @ 0x180283730 (--_ECGlobalManipulationManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?ShutDownManipulationThread@CManipulationManager@@IEAAXXZ @ 0x1801A17BC (-ShutDownManipulationThread@CManipulationManager@@IEAAXXZ.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x1801B5738 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 */

void __fastcall CGlobalManipulationManager::~CGlobalManipulationManager(CGlobalManipulationManager *this)
{
  *(_QWORD *)this = &CGlobalManipulationManager::`vftable';
  CManipulationManager::ShutDownManipulationThread(this);
  CMmcssTask::UnloadRuntime((CGlobalManipulationManager *)((char *)this + 312));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 312));
  CManipulationManager::~CManipulationManager(this);
}
