/*
 * XREFs of ?GetMutexesLockedByCurrentThread@Mutex@Engine@Spectre@@CAAEAV?$vector@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@V?$allocator@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@@2@@std@@XZ @ 0x18002A13C
 * Callers:
 *     ??$doLock@$1?lock@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z @ 0x180029A9C (--$doLock@$1-lock@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z.c)
 *     ??$doLock@$1?lock_shared@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z @ 0x180029B5C (--$doLock@$1-lock_shared@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z.c)
 *     ??$doUnlock@$1?unlock@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z @ 0x180029C1C (--$doUnlock@$1-unlock@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z.c)
 *     ??$doUnlock@$1?unlock_shared@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z @ 0x180029CEC (--$doUnlock@$1-unlock_shared@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z.c)
 *     ?FindThisMutex@Mutex@Engine@Spectre@@AEBA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@@std@@@std@@@std@@_N@Z @ 0x180029F98 (-FindThisMutex@Mutex@Engine@Spectre@@AEBA-AV-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_t.c)
 *     ?this_thread_owns@Mutex@Engine@Spectre@@QEBA_N_N@Z @ 0x18002A578 (-this_thread_owns@Mutex@Engine@Spectre@@QEBA_N_N@Z.c)
 * Callees:
 *     __tlregdtor @ 0x18000C828 (__tlregdtor.c)
 */

_QWORD *Spectre::Engine::Mutex::GetMutexesLockedByCurrentThread()
{
  __int64 v0; // rdx
  int v1; // eax
  _QWORD *v2; // rbx

  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  v1 = *(_DWORD *)(v0 + 304);
  v2 = (_QWORD *)(v0 + 312);
  if ( (v1 & 1) == 0 )
  {
    *(_DWORD *)(v0 + 304) = v1 | 1;
    *v2 = 0LL;
    *(_QWORD *)(v0 + 320) = 0LL;
    *(_QWORD *)(v0 + 328) = 0LL;
    _tlregdtor((__int64)Spectre::Engine::Mutex::GetMutexesLockedByCurrentThread_::_2_::_dynamic_atexit_destructor_for__mutexes__);
  }
  return v2;
}
