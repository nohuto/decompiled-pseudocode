/*
 * XREFs of ?GetPresentLock@RenderOutput@Engine@Spectre@@UEAA?AV?$unique_lock@Vmutex@std@@@std@@XZ @ 0x18002C2C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$unique_lock@Vmutex@std@@@std@@QEAA@AEAVmutex@1@@Z @ 0x18002B36C (--0-$unique_lock@Vmutex@std@@@std@@QEAA@AEAVmutex@1@@Z.c)
 */

__int64 __fastcall Spectre::Engine::RenderOutput::GetPresentLock(__int64 a1, __int64 a2)
{
  std::unique_lock<std::mutex>::unique_lock<std::mutex>(a2, (std::_Mutex_base *)(a1 + 304));
  return a2;
}
