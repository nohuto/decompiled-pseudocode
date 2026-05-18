/*
 * XREFs of ??4?$atomic@Vid@thread@std@@@std@@QEAA?AVid@thread@1@V231@@Z @ 0x180029F40
 * Callers:
 *     ?GetExclusiveLock@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x180029FF0 (-GetExclusiveLock@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre@@@std@@XZ.c)
 * Callees:
 *     ?store@?$_Atomic_storage@Vid@thread@std@@$03@std@@QEAAXVid@thread@2@@Z @ 0x18002A508 (-store@-$_Atomic_storage@Vid@thread@std@@$03@std@@QEAAXVid@thread@2@@Z.c)
 */

_DWORD *__fastcall std::atomic<std::thread::id>::operator=(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // r10
  _DWORD *result; // rax
  int v5; // r9d

  std::_Atomic_storage<std::thread::id,4>::store(a1, (unsigned int)a3, a3, (unsigned int)a3);
  result = v3;
  *v3 = v5;
  return result;
}
