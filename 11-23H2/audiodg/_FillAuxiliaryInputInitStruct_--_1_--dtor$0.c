/*
 * XREFs of _FillAuxiliaryInputInitStruct_::_1_::dtor$0 @ 0x14004F45B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FillAuxiliaryInputInitStruct_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)(a2 + 56));
}
