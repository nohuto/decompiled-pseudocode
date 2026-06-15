/*
 * XREFs of _CMonitor::OnDeviceDescriptionChanged_::_1_::dtor$1 @ 0x180121F2E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMonitor::OnDeviceDescriptionChanged_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 48));
}
