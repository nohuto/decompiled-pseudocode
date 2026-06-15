/*
 * XREFs of _CAudioPump::CAudioPump_::_1_::dtor$12 @ 0x1400345DD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioPump::CAudioPump_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 48) + 384LL));
}
