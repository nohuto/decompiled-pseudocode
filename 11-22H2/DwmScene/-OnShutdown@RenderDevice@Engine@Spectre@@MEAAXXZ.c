/*
 * XREFs of ?OnShutdown@RenderDevice@Engine@Spectre@@MEAAXXZ @ 0x180026E80
 * Callers:
 *     ?OnShutdown@RenderDeviceGeneric@Engine@Spectre@@EEAAXXZ @ 0x180053560 (-OnShutdown@RenderDeviceGeneric@Engine@Spectre@@EEAAXXZ.c)
 *     ?OnShutdown@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C6A50 (-OnShutdown@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 * Callees:
 *     ?IsActive@RenderDevice@Engine@Spectre@@QEBA_NXZ @ 0x180026CE4 (-IsActive@RenderDevice@Engine@Spectre@@QEBA_NXZ.c)
 *     ?clear@?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@QEAAXXZ @ 0x1800278B8 (-clear@-$vector@V-$function@$$A6AXXZ@std@@V-$allocator@V-$function@$$A6AXXZ@std@@@2@@std@@QEAAXX.c)
 *     ?clear@?$vector@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@2@@std@@QEAAXXZ @ 0x1800278E4 (-clear@-$vector@V-$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VFra.c)
 *     ?Release@ResourceManager@Engine@Spectre@@QEAAXXZ @ 0x180070388 (-Release@ResourceManager@Engine@Spectre@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::RenderDevice::OnShutdown(Spectre::Engine::RenderDevice *this)
{
  __int64 v2; // rcx

  if ( Spectre::Engine::RenderDevice::IsActive(this) )
  {
    std::vector<std::function<void (void)>>::clear(v2 + 3856);
    Spectre::Engine::ResourceManager::Release((Spectre::Engine::RenderDevice *)((char *)this + 608));
    Spectre::Engine::ResourceManager::Release((Spectre::Engine::RenderDevice *)((char *)this + 832));
    Spectre::Engine::ResourceManager::Release((Spectre::Engine::RenderDevice *)((char *)this + 1056));
    std::vector<std::shared_ptr<Spectre::Engine::FrameBuffer>>::clear((char *)this + 248);
    (*(void (__fastcall **)(Spectre::Engine::RenderDevice *))(*(_QWORD *)this + 256LL))(this);
    *((_BYTE *)this + 3976) = 0;
  }
}
