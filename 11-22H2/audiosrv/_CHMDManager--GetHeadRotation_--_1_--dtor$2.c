/*
 * XREFs of _CHMDManager::GetHeadRotation_::_1_::dtor$2 @ 0x18010F830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHMDManager::GetHeadRotation_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)(a2 + 56));
}
