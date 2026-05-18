/*
 * XREFs of ?lock@SharedMutex@Utils@Spectre@@QEAAXXZ @ 0x1800E0D84
 * Callers:
 *     ??$doLock@$1?lock@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z @ 0x180029A9C (--$doLock@$1-lock@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z.c)
 * Callees:
 *     ??0?$unique_lock@Vmutex@std@@@std@@QEAA@AEAVmutex@1@@Z @ 0x18002B36C (--0-$unique_lock@Vmutex@std@@@std@@QEAA@AEAVmutex@1@@Z.c)
 *     ??1?$unique_lock@Vmutex@std@@@std@@QEAA@XZ @ 0x18002B860 (--1-$unique_lock@Vmutex@std@@@std@@QEAA@XZ.c)
 */

void __fastcall Spectre::Utils::SharedMutex::lock(std::_Mutex_base **this)
{
  std::_Mutex_base *v1; // rbx
  _Mtx_t v2[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *this;
  std::unique_lock<std::mutex>::unique_lock<std::mutex>((__int64)v2, *this);
  while ( *((_BYTE *)v1 + 228) )
    _Cnd_wait((std::_Mutex_base *)((char *)v1 + 152), v2[0]);
  *((_BYTE *)v1 + 228) = 1;
  while ( *((_DWORD *)v1 + 56) )
    _Cnd_wait((std::_Mutex_base *)((char *)v1 + 80), v2[0]);
  std::unique_lock<std::mutex>::~unique_lock<std::mutex>((__int64)v2);
}
