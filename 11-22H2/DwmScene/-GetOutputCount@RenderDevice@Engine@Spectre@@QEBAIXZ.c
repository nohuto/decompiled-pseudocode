/*
 * XREFs of ?GetOutputCount@RenderDevice@Engine@Spectre@@QEBAIXZ @ 0x18002666C
 * Callers:
 *     ?UpdateRenderTarget@RenderDevice@Engine@Spectre@@UEAAXPEAXMMMM@Z @ 0x180027360 (-UpdateRenderTarget@RenderDevice@Engine@Spectre@@UEAAXPEAXMMMM@Z.c)
 *     ?CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180032CC0 (-CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@.c)
 *     ?DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180033380 (-DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     _anonymous_namespace_::GetFirstRenderOutput @ 0x18003431C (_anonymous_namespace_--GetFirstRenderOutput.c)
 *     ?GetGpuProfiler@CommandList@Engine@Spectre@@QEBA?BV?$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@@XZ @ 0x1800393A8 (-GetGpuProfiler@CommandList@Engine@Spectre@@QEBA-BV-$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@.c)
 *     ?SetAntialiasingQuality@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXW4AntialiasingQuality@34@@Z @ 0x1800C7260 (-SetAntialiasingQuality@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAAXW4AntialiasingQuality@34@@Z.c)
 * Callees:
 *     ?VerifyExclusiveLock@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A2F0 (-VerifyExclusiveLock@Lockable@Engine@Spectre@@QEBAXXZ.c)
 */

__int64 __fastcall Spectre::Engine::RenderDevice::GetOutputCount(Spectre::Engine::RenderDevice *this)
{
  Spectre::Engine::Lockable::VerifyExclusiveLock((Spectre::Engine::RenderDevice *)((char *)this + 24));
  return (__int64)(*((_QWORD *)this + 32) - *((_QWORD *)this + 31)) >> 4;
}
