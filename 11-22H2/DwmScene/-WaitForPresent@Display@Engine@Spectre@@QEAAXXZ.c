/*
 * XREFs of ?WaitForPresent@Display@Engine@Spectre@@QEAAXXZ @ 0x1800583DC
 * Callers:
 *     ?WaitForAsyncDisplayPresents@Engine@1Spectre@@IEAAXXZ @ 0x180037E8C (-WaitForAsyncDisplayPresents@Engine@1Spectre@@IEAAXXZ.c)
 * Callees:
 *     ??0?$unique_lock@Vmutex@std@@@std@@QEAA@AEAVmutex@1@@Z @ 0x18002B36C (--0-$unique_lock@Vmutex@std@@@std@@QEAA@AEAVmutex@1@@Z.c)
 *     ??1?$unique_lock@Vmutex@std@@@std@@QEAA@XZ @ 0x18002B860 (--1-$unique_lock@Vmutex@std@@@std@@QEAA@XZ.c)
 *     ??B?$atomic@_N@std@@QEBA_NXZ @ 0x1800573E0 (--B-$atomic@_N@std@@QEBA_NXZ.c)
 */

void __fastcall Spectre::Engine::Display::WaitForPresent(Spectre::Engine::Display *this)
{
  _Mtx_t v2[3]; // [rsp+20h] [rbp-18h] BYREF

  std::unique_lock<std::mutex>::unique_lock<std::mutex>((__int64)v2, (Spectre::Engine::Display *)((char *)this + 128));
  while ( std::atomic<bool>::operator bool((__int64)this + 424) )
    _Cnd_wait((Spectre::Engine::Display *)((char *)this + 280), v2[0]);
  std::unique_lock<std::mutex>::~unique_lock<std::mutex>((__int64)v2);
}
