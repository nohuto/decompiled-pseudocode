/*
 * XREFs of _CCompFrameStats::Create_::_1_::dtor$0 @ 0x1801A984D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompFrameStats::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDCompositionDeviceInternal,wil::err_returncode_policy>::~com_ptr_t<IDCompositionDeviceInternal,wil::err_returncode_policy>((__int64 *)(a2 + 64));
}
