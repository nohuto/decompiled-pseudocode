/*
 * XREFs of _DeviceDockServer::DeviceDockServer_::_1_::dtor$1 @ 0x1800586FC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DeviceDockServer::DeviceDockServer_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::vector<wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>::~vector<wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>(*(_QWORD *)(a2 + 48) + 56LL);
}
