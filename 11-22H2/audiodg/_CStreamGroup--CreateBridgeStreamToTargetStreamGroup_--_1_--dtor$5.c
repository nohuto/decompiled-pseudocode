/*
 * XREFs of _CStreamGroup::CreateBridgeStreamToTargetStreamGroup_::_1_::dtor$5 @ 0x140063BED
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::CreateBridgeStreamToTargetStreamGroup_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)(a2 + 88));
}
