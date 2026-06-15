/*
 * XREFs of _AudioDeviceMgr::AddWorkItemToQueue_::_1_::dtor$1 @ 0x18015C525
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDeviceMgr::AddWorkItemToQueue_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<WorkItemBase>::~CAutoPtr<WorkItemBase>((__int64 *)(a2 + 64));
}
