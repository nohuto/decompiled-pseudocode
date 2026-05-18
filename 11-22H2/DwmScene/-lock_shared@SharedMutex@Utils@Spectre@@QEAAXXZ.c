/*
 * XREFs of ?lock_shared@SharedMutex@Utils@Spectre@@QEAAXXZ @ 0x1800E0E04
 * Callers:
 *     ??$doLock@$1?lock_shared@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z @ 0x180029B5C (--$doLock@$1-lock_shared@SharedMutex@Utils@Spectre@@QEAAXXZ@Mutex@Engine@Spectre@@AEAAX_N@Z.c)
 * Callees:
 *     ??0?$unique_lock@Vmutex@std@@@std@@QEAA@AEAVmutex@1@@Z @ 0x18002B36C (--0-$unique_lock@Vmutex@std@@@std@@QEAA@AEAVmutex@1@@Z.c)
 *     ??1?$unique_lock@Vmutex@std@@@std@@QEAA@XZ @ 0x18002B860 (--1-$unique_lock@Vmutex@std@@@std@@QEAA@XZ.c)
 */

void __fastcall Spectre::Utils::SharedMutex::lock_shared(std::_Mutex_base **this)
{
  std::_Mutex_base *v1; // rbx
  int v2; // eax
  _Mtx_t v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *this;
  std::unique_lock<std::mutex>::unique_lock<std::mutex>((__int64)v3, *this);
  while ( 1 )
  {
    if ( !*((_BYTE *)v1 + 228) )
    {
      v2 = *((_DWORD *)v1 + 56);
      if ( v2 != -1 )
        break;
    }
    _Cnd_wait((std::_Mutex_base *)((char *)v1 + 152), v3[0]);
  }
  *((_DWORD *)v1 + 56) = v2 + 1;
  std::unique_lock<std::mutex>::~unique_lock<std::mutex>((__int64)v3);
}
