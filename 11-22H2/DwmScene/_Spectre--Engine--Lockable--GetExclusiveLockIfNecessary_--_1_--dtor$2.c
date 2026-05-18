/*
 * XREFs of _Spectre::Engine::Lockable::GetExclusiveLockIfNecessary_::_1_::dtor$2 @ 0x1800E4EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 */

void __fastcall Spectre::Engine::Lockable::GetExclusiveLockIfNecessary_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>(*(_QWORD *)(a2 + 72));
  }
}
