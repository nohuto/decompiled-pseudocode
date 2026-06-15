/*
 * XREFs of _CApplication::DelinkProcess_::_1_::dtor$1 @ 0x18004A56E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplication::DelinkProcess_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)(a2 + 112));
}
