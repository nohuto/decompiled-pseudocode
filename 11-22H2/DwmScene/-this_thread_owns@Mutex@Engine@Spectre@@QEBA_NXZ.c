/*
 * XREFs of ?this_thread_owns@Mutex@Engine@Spectre@@QEBA_NXZ @ 0x18002A538
 * Callers:
 *     ??$doLock@$1?lock@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z @ 0x180029A9C (--$doLock@$1-lock@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z.c)
 *     ??$doLock@$1?lock_shared@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z @ 0x180029B5C (--$doLock@$1-lock_shared@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z.c)
 *     ??$doUnlock@$1?unlock@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z @ 0x180029C1C (--$doUnlock@$1-unlock@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z.c)
 *     ??$doUnlock@$1?unlock_shared@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z @ 0x180029CEC (--$doUnlock@$1-unlock_shared@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z.c)
 * Callees:
 *     ?this_thread_owns@Mutex@Engine@Spectre@@QEBA_N_N@Z @ 0x18002A578 (-this_thread_owns@Mutex@Engine@Spectre@@QEBA_N_N@Z.c)
 */

char __fastcall Spectre::Engine::Mutex::this_thread_owns(Spectre::Engine::Mutex *this)
{
  char v2; // bl

  v2 = 0;
  if ( Spectre::Engine::Mutex::this_thread_owns(this, 1) || Spectre::Engine::Mutex::this_thread_owns(this, 0) )
    return 1;
  return v2;
}
