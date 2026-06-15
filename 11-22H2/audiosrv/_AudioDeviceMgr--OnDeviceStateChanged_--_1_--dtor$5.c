/*
 * XREFs of _AudioDeviceMgr::OnDeviceStateChanged_::_1_::dtor$5 @ 0x1800780D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDeviceMgr::OnDeviceStateChanged_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<WorkItemBase>::~CAutoPtr<WorkItemBase>(a2 + 136);
}
