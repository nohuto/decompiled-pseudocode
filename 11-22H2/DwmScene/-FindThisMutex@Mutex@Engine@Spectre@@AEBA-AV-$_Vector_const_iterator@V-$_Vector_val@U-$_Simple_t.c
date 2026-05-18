/*
 * XREFs of ?FindThisMutex@Mutex@Engine@Spectre@@AEBA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@@std@@@std@@@std@@_N@Z @ 0x180029F98
 * Callers:
 *     ??$doUnlock@$1?unlock@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z @ 0x180029C1C (--$doUnlock@$1-unlock@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z.c)
 *     ??$doUnlock@$1?unlock_shared@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z @ 0x180029CEC (--$doUnlock@$1-unlock_shared@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z.c)
 *     ?this_thread_owns@Mutex@Engine@Spectre@@QEBA_N_N@Z @ 0x18002A578 (-this_thread_owns@Mutex@Engine@Spectre@@QEBA_N_N@Z.c)
 * Callees:
 *     ?GetMutexesLockedByCurrentThread@Mutex@Engine@Spectre@@CAAEAV?$vector@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@V?$allocator@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@@2@@std@@XZ @ 0x18002A13C (-GetMutexesLockedByCurrentThread@Mutex@Engine@Spectre@@CAAEAV-$vector@U-$pair@PEBVMutex@Engine@S.c)
 */

_QWORD *__fastcall Spectre::Engine::Mutex::FindThisMutex(__int64 a1, _QWORD *a2, char a3)
{
  __int64 *MutexesLockedByCurrentThread; // rax
  __int64 i; // r9
  _QWORD *result; // rax

  MutexesLockedByCurrentThread = (__int64 *)Spectre::Engine::Mutex::GetMutexesLockedByCurrentThread();
  for ( i = *MutexesLockedByCurrentThread;
        i != MutexesLockedByCurrentThread[1] && (*(_QWORD *)i != a1 || *(_BYTE *)(i + 8) != a3);
        i += 16LL )
  {
    ;
  }
  result = a2;
  *a2 = i;
  return result;
}
