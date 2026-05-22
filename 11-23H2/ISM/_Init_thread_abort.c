/*
 * XREFs of _Init_thread_abort @ 0x180056B70
 * Callers:
 *     _InputSiteHierarchyManager::UpdateHierarchyFromInputSinkDataCache_::_1_::dtor$2 @ 0x18006B8C0 (_InputSiteHierarchyManager--UpdateHierarchyFromInputSinkDataCache_--_1_--dtor$2.c)
 *     _CUIHierarchy::GetInstance_::_1_::dtor$0 @ 0x18009BF8F (_CUIHierarchy--GetInstance_--_1_--dtor$0.c)
 *     _RotationWatcher::Initialize_::_1_::dtor$0 @ 0x180117210 (_RotationWatcher--Initialize_--_1_--dtor$0.c)
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
