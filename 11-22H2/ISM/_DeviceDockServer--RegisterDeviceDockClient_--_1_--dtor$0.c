/*
 * XREFs of _DeviceDockServer::RegisterDeviceDockClient_::_1_::dtor$0 @ 0x1801AC137
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DeviceDockServer::RegisterDeviceDockClient_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>::~com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>((__int64 *)(a2 + 64));
}
