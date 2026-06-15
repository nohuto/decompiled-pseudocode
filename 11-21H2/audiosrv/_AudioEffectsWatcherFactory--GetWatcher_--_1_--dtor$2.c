/*
 * XREFs of _AudioEffectsWatcherFactory::GetWatcher_::_1_::dtor$2 @ 0x1800D348B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioEffectsWatcherFactory::GetWatcher_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)(a2 + 48));
}
