/*
 * XREFs of _CInteractionFrameStats::Create_::_1_::dtor$0 @ 0x1801A5688
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionFrameStats::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CInteractionFrameStats,wil::err_returncode_policy>::~com_ptr_t<CInteractionFrameStats,wil::err_returncode_policy>((CCompFrameStats **)(a2 + 72));
}
