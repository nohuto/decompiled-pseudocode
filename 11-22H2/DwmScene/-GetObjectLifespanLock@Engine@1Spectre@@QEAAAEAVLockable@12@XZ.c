/*
 * XREFs of ?GetObjectLifespanLock@Engine@1Spectre@@QEAAAEAVLockable@12@XZ @ 0x1800346DC
 * Callers:
 *     ?LockEngineIfNecessary@RenderDevice@Engine@Spectre@@AEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x180026D3C (-LockEngineIfNecessary@RenderDevice@Engine@Spectre@@AEAA-AV-$unique_lock@VMutex@Engine@Spectre@@.c)
 *     ?CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180032CC0 (-CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@.c)
 *     ?DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180033380 (-DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?DetachDevice@Engine@1Spectre@@QEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18003395C (-DetachDevice@Engine@1Spectre@@QEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?RenderInternal@Display@Engine@Spectre@@AEAAXXZ @ 0x180057BA4 (-RenderInternal@Display@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct Spectre::Engine::Lockable *__fastcall Spectre::Engine::Engine::GetObjectLifespanLock(
        Spectre::Engine::Engine *this)
{
  return (Spectre::Engine::Engine *)((char *)this + 1104);
}
