/*
 * XREFs of ?SetRenderingMode@Display@Engine@Spectre@@QEAAXW4RenderingMode@123@@Z @ 0x180058314
 * Callers:
 *     ?RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z @ 0x1800195D8 (-RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z.c)
 * Callees:
 *     ??0?$unique_lock@Vmutex@std@@@std@@QEAA@AEAVmutex@1@@Z @ 0x18002B36C (--0-$unique_lock@Vmutex@std@@@std@@QEAA@AEAVmutex@1@@Z.c)
 *     ??1?$unique_lock@Vmutex@std@@@std@@QEAA@XZ @ 0x18002B860 (--1-$unique_lock@Vmutex@std@@@std@@QEAA@XZ.c)
 *     ?DeleteRenderThread@Display@Engine@Spectre@@AEAAXAEAV?$unique_lock@Vmutex@std@@@std@@@Z @ 0x1800578BC (-DeleteRenderThread@Display@Engine@Spectre@@AEAAXAEAV-$unique_lock@Vmutex@std@@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall Spectre::Engine::Display::SetRenderingMode(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  _Mtx_t v5[3]; // [rsp+20h] [rbp-18h] BYREF

  std::unique_lock<std::mutex>::unique_lock<std::mutex>((__int64)v5, (std::_Mutex_base *)(a1 + 128));
  if ( *(_DWORD *)(a1 + 36) )
  {
    *(_DWORD *)(a1 + 36) = 0;
    Spectre::Engine::Display::DeleteRenderThread(a1, v5, v2, v3);
  }
  return std::unique_lock<std::mutex>::~unique_lock<std::mutex>((__int64)v5);
}
