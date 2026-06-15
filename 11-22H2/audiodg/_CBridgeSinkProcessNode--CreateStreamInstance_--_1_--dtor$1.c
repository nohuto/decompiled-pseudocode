/*
 * XREFs of _CBridgeSinkProcessNode::CreateStreamInstance_::_1_::dtor$1 @ 0x14005DC7A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBridgeSinkProcessNode::CreateStreamInstance_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)(a2 + 88));
}
