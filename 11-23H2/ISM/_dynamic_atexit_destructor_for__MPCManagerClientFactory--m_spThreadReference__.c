/*
 * XREFs of _dynamic_atexit_destructor_for__MPCManagerClientFactory::m_spThreadReference__ @ 0x18006FFA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__MPCManagerClientFactory::m_spThreadReference__()
{
  return wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>((__int64 *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 312LL));
}
