/*
 * XREFs of _IsCaptureDevice_::_1_::dtor$0 @ 0x14006D49D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IsCaptureDevice_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)(a2 + 56));
}
