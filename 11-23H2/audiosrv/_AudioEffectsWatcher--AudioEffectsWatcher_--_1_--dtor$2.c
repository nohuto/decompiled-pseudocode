/*
 * XREFs of _AudioEffectsWatcher::AudioEffectsWatcher_::_1_::dtor$2 @ 0x1800D55F5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioEffectsWatcher::AudioEffectsWatcher_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 64) + 80LL));
}
