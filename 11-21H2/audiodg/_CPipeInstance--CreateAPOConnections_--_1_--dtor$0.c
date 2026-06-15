/*
 * XREFs of _CPipeInstance::CreateAPOConnections_::_1_::dtor$0 @ 0x140038990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::CreateAPOConnections_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CInPlaceBuffer,wil::err_returncode_policy>::~com_ptr_t<CInPlaceBuffer,wil::err_returncode_policy>(a2 + 136);
}
