/*
 * XREFs of ?GetSharedLock@Lockable@Engine@Spectre@@QEBA?AV?$shared_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A19C
 * Callers:
 *     ?GetSharedLockIfNecessary@Lockable@Engine@Spectre@@QEBA?AV?$shared_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A1C4 (-GetSharedLockIfNecessary@Lockable@Engine@Spectre@@QEBA-AV-$shared_lock@VMutex@Engine@Spectre@@@.c)
 *     ?RenderInternal@Display@Engine@Spectre@@AEAAXXZ @ 0x180057BA4 (-RenderInternal@Display@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     ?lock_shared@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A4FC (-lock_shared@Mutex@Engine@Spectre@@QEAAXXZ.c)
 */

__int64 __fastcall Spectre::Engine::Lockable::GetSharedLock(Spectre::Engine::Mutex *a1, __int64 a2)
{
  *(_QWORD *)a2 = a1;
  *(_BYTE *)(a2 + 8) = 1;
  Spectre::Engine::Mutex::lock_shared(a1);
  return a2;
}
