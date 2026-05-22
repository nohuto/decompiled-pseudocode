/*
 * XREFs of _CAnimationFrameStats::Create_::_1_::dtor$0 @ 0x1800B1DB6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationFrameStats::Create_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CAnimationFrameStats,wil::err_returncode_policy>::~com_ptr_t<CAnimationFrameStats,wil::err_returncode_policy>(a2 + 64);
}
