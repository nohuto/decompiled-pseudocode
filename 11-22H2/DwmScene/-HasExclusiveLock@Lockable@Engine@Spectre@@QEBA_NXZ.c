/*
 * XREFs of ?HasExclusiveLock@Lockable@Engine@Spectre@@QEBA_NXZ @ 0x18002A260
 * Callers:
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?GetSharedLockIfNecessary@Lockable@Engine@Spectre@@QEBA?AV?$shared_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A1C4 (-GetSharedLockIfNecessary@Lockable@Engine@Spectre@@QEBA-AV-$shared_lock@VMutex@Engine@Spectre@@@.c)
 *     ?HasReadAccess@Lockable@Engine@Spectre@@QEBA_NXZ @ 0x18002A270 (-HasReadAccess@Lockable@Engine@Spectre@@QEBA_NXZ.c)
 *     ?HasWriteAccess@Lockable@Engine@Spectre@@QEBA_NXZ @ 0x18002A2C4 (-HasWriteAccess@Lockable@Engine@Spectre@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Engine::Lockable::HasExclusiveLock(Spectre::Engine::Lockable *this)
{
  return Spectre::Engine::Mutex::this_thread_owns(this, 1);
}
