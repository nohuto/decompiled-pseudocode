/*
 * XREFs of ?RenderThread@Display@Engine@Spectre@@AEAAXXZ @ 0x1800581C0
 * Callers:
 *     <none>
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??0?$unique_lock@Vmutex@std@@@std@@QEAA@AEAVmutex@1@@Z @ 0x18002B36C (--0-$unique_lock@Vmutex@std@@@std@@QEAA@AEAVmutex@1@@Z.c)
 *     ??1?$unique_lock@Vmutex@std@@@std@@QEAA@XZ @ 0x18002B860 (--1-$unique_lock@Vmutex@std@@@std@@QEAA@XZ.c)
 *     ??4?$atomic@_N@std@@QEAA_N_N@Z @ 0x180040168 (--4-$atomic@_N@std@@QEAA_N_N@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NXZ @ 0x180042CE8 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NXZ.c)
 *     ??B?$atomic@_N@std@@QEBA_NXZ @ 0x1800573E0 (--B-$atomic@_N@std@@QEBA_NXZ.c)
 *     ?RenderInternal@Display@Engine@Spectre@@AEAAXXZ @ 0x180057BA4 (-RenderInternal@Display@Engine@Spectre@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::Display::RenderThread(Spectre::Engine::Display *this)
{
  std::_Mutex_base *v2; // rbx
  char *v3; // rbp
  char *v4; // rsi
  char v5; // r15
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _Mtx_t v15[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (Spectre::Engine::Display *)((char *)this + 128);
  v3 = (char *)this + 425;
  v4 = (char *)this + 120;
  do
  {
    std::_Mutex_base::lock(v2);
    v5 = std::atomic<bool>::operator bool((__int64)v3);
    if ( std::atomic<bool>::operator bool((__int64)v4) )
    {
      std::atomic<bool>::operator=(v6, 0LL, v7, v8);
      Spectre::Engine::Display::RenderInternal(this, v9, v10, v11);
      _Mtx_unlock(v2);
    }
    else
    {
      _Mtx_unlock(v2);
      std::unique_lock<std::mutex>::unique_lock<std::mutex>((__int64)v15, v2);
      while ( !std::_Atomic_storage<bool,1>::load((__int64)v4) && std::atomic<bool>::operator bool((__int64)v3) )
        _Cnd_wait((Spectre::Engine::Display *)((char *)this + 208), v15[0]);
      std::unique_lock<std::mutex>::~unique_lock<std::mutex>((__int64)v15);
    }
  }
  while ( v5 );
  LOBYTE(v12) = 1;
  std::atomic<bool>::operator=((__int64)this + 426, v12, v13, v14);
  _Cnd_signal((Spectre::Engine::Display *)((char *)this + 352));
}
