/*
 * XREFs of ?Shutdown@RenderDevice@Engine@Spectre@@QEAAXXZ @ 0x180027148
 * Callers:
 *     ??1RenderDevice@Engine@Spectre@@UEAA@XZ @ 0x180025BA0 (--1RenderDevice@Engine@Spectre@@UEAA@XZ.c)
 *     ?DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180033380 (-DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::RenderDevice::Shutdown(Spectre::Engine::RenderDevice *this)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF

  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::RenderDevice *)((char *)this + 24));
  if ( !*((_BYTE *)this + 3977) )
  {
    (*(void (__fastcall **)(Spectre::Engine::RenderDevice *))(*(_QWORD *)this + 248LL))(this);
    *((_BYTE *)this + 3977) = 1;
  }
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v2);
}
