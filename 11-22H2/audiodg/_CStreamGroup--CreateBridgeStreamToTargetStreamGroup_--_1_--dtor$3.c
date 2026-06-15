/*
 * XREFs of _CStreamGroup::CreateBridgeStreamToTargetStreamGroup_::_1_::dtor$3 @ 0x140063BD5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::CreateBridgeStreamToTargetStreamGroup_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)(a2 + 72));
}
