/*
 * XREFs of _Spectre::Engine::Mutex::GetMutexesLockedByCurrentThread_::_2_::_dynamic_atexit_destructor_for__mutexes__ @ 0x1800F2560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void Spectre::Engine::Mutex::GetMutexesLockedByCurrentThread_::_2_::_dynamic_atexit_destructor_for__mutexes__()
{
  std::vector<std::pair<Spectre::Engine::Mutex const *,bool>>::_Tidy(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                     + (unsigned int)tls_index) + 312LL);
}
