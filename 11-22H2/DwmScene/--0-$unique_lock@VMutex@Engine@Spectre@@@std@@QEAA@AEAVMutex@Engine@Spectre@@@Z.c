/*
 * XREFs of ??0?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@AEAVMutex@Engine@Spectre@@@Z @ 0x180029DF8
 * Callers:
 *     ?GetExclusiveLock@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x180029FF0 (-GetExclusiveLock@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre@@@std@@XZ.c)
 *     ?CreateMaterial@ShaderFamily@Engine@Spectre@@QEAA?AV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@XZ @ 0x1800600C8 (-CreateMaterial@ShaderFamily@Engine@Spectre@@QEAA-AV-$shared_ptr@VMaterial@Engine@Spectre@@@std@.c)
 *     ?OnMaterialDeleted@ShaderFamily@Engine@Spectre@@QEAAXV?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@Z @ 0x180060EFC (-OnMaterialDeleted@ShaderFamily@Engine@Spectre@@QEAAXV-$weak_ptr@VMaterial@Engine@Spectre@@@std@.c)
 * Callees:
 *     ?lock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A4F0 (-lock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 */

__int64 __fastcall std::unique_lock<Spectre::Engine::Mutex>::unique_lock<Spectre::Engine::Mutex>(
        __int64 a1,
        Spectre::Engine::Mutex *a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 8) = 0;
  Spectre::Engine::Mutex::lock(a2);
  result = a1;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
