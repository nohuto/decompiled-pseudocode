/*
 * XREFs of _DeviceDockServer::DeviceDockServer_::_1_::dtor$2 @ 0x180080CCE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DeviceDockServer::DeviceDockServer_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>::~com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 48) + 80LL));
}
