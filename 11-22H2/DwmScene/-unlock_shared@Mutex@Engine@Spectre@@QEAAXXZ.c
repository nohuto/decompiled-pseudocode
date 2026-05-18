/*
 * XREFs of ?unlock_shared@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A5B8
 * Callers:
 *     ??1?$shared_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180029F20 (--1-$shared_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?GetSharedLockIfNecessary@Lockable@Engine@Spectre@@QEBA?AV?$shared_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A1C4 (-GetSharedLockIfNecessary@Lockable@Engine@Spectre@@QEBA-AV-$shared_lock@VMutex@Engine@Spectre@@@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Spectre::Engine::Mutex::unlock_shared(Spectre::Utils::SharedMutex *this)
{
  Spectre::Engine::Mutex::doUnlock<&public: void Spectre::Utils::SharedMutex::unlock_shared(void)>(this);
}
