/*
 * XREFs of ?this_thread_owns@Mutex@Engine@Spectre@@QEBA_N_N@Z @ 0x18002A578
 * Callers:
 *     ?HasExclusiveLock@Lockable@Engine@Spectre@@QEBA_NXZ @ 0x18002A260 (-HasExclusiveLock@Lockable@Engine@Spectre@@QEBA_NXZ.c)
 *     ?HasSharedLock@Lockable@Engine@Spectre@@QEBA_NXZ @ 0x18002A2B4 (-HasSharedLock@Lockable@Engine@Spectre@@QEBA_NXZ.c)
 *     ?this_thread_owns@Mutex@Engine@Spectre@@QEBA_NXZ @ 0x18002A538 (-this_thread_owns@Mutex@Engine@Spectre@@QEBA_NXZ.c)
 * Callees:
 *     ?FindThisMutex@Mutex@Engine@Spectre@@AEBA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@@std@@@std@@@std@@_N@Z @ 0x180029F98 (-FindThisMutex@Mutex@Engine@Spectre@@AEBA-AV-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_t.c)
 *     ?GetMutexesLockedByCurrentThread@Mutex@Engine@Spectre@@CAAEAV?$vector@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@V?$allocator@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@@2@@std@@XZ @ 0x18002A13C (-GetMutexesLockedByCurrentThread@Mutex@Engine@Spectre@@CAAEAV-$vector@U-$pair@PEBVMutex@Engine@S.c)
 */

bool __fastcall Spectre::Engine::Mutex::this_thread_owns(Spectre::Engine::Mutex *this, char a2)
{
  _QWORD *ThisMutex; // rbx
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  ThisMutex = Spectre::Engine::Mutex::FindThisMutex((__int64)this, &v4, a2);
  return *ThisMutex != Spectre::Engine::Mutex::GetMutexesLockedByCurrentThread()[1];
}
