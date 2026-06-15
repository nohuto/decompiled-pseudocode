/*
 * XREFs of _CExclusiveModeListener::CExclusiveModeListener_::_1_::dtor$3 @ 0x18013358E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CExclusiveModeListener::CExclusiveModeListener_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 48) + 72LL));
}
