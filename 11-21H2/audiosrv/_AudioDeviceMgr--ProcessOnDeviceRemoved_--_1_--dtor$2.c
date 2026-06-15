/*
 * XREFs of _AudioDeviceMgr::ProcessOnDeviceRemoved_::_1_::dtor$2 @ 0x18015CDFF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioDeviceMgr::ProcessOnDeviceRemoved_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 32));
}
