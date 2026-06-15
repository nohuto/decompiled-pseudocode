/*
 * XREFs of _CStreamGroup::CreateBridgeStreamToTargetStreamGroup_::_1_::dtor$8 @ 0x140063BC1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::CreateBridgeStreamToTargetStreamGroup_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)(a2 + 240));
}
