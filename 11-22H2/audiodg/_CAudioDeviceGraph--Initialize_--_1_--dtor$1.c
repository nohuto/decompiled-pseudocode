/*
 * XREFs of _CAudioDeviceGraph::Initialize_::_1_::dtor$1 @ 0x140035F41
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioDeviceGraph::Initialize_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)(a2 + 136));
}
