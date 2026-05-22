/*
 * XREFs of _dynamic_atexit_destructor_for__MPCManagerClientFactory::m_spThreadReference__ @ 0x180058BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__MPCManagerClientFactory::m_spThreadReference__()
{
  return wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::~com_ptr_t<IWeakReference,wil::err_exception_policy>((__int64 *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 312LL));
}
