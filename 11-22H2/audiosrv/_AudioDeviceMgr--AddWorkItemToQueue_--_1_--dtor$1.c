/*
 * XREFs of _AudioDeviceMgr::AddWorkItemToQueue_::_1_::dtor$1 @ 0x1800780E2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDeviceMgr::AddWorkItemToQueue_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<WorkItemBase>::~CAutoPtr<WorkItemBase>(a2 + 64);
}
