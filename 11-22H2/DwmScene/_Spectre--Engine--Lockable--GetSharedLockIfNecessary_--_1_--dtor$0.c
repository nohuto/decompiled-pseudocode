/*
 * XREFs of _Spectre::Engine::Lockable::GetSharedLockIfNecessary_::_1_::dtor$0 @ 0x1800E4F0D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180029F20 (--1-$shared_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 */

void __fastcall Spectre::Engine::Lockable::GetSharedLockIfNecessary_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::shared_lock<Spectre::Engine::Mutex>::~shared_lock<Spectre::Engine::Mutex>(*(_QWORD *)(a2 + 88));
  }
}
