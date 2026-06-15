/*
 * XREFs of _AudioDeviceMgr::WorkItemThreadProc_::_1_::dtor$0 @ 0x18007D3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDeviceMgr::WorkItemThreadProc_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<WorkItemBase>::~CAutoPtr<WorkItemBase>(a2 + 112);
}
