/*
 * XREFs of _CMonitorManager::OnDefaultDeviceChanged_::_1_::dtor$1 @ 0x180078212
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitorManager::OnDefaultDeviceChanged_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<DefaultChangedContext>::~CAutoPtr<DefaultChangedContext>(a2 + 56);
}
