/*
 * XREFs of _Init_thread_abort @ 0x18004AD30
 * Callers:
 *     _InputSiteHierarchyManager::UpdateHierarchyFromInputSinkDataCache_::_1_::dtor$2 @ 0x1800546C0 (_InputSiteHierarchyManager--UpdateHierarchyFromInputSinkDataCache_--_1_--dtor$2.c)
 *     _CUIHierarchy::GetInstance_::_1_::dtor$0 @ 0x180084F17 (_CUIHierarchy--GetInstance_--_1_--dtor$0.c)
 *     _RotationWatcher::Initialize_::_1_::dtor$0 @ 0x1800FB204 (_RotationWatcher--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_abort(_DWORD *a1)
{
  EnterCriticalSection(&CriticalSection);
  *a1 = 0;
  LeaveCriticalSection(&CriticalSection);
  return Init_thread_notify();
}
