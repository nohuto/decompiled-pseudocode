/*
 * XREFs of ?CopyTexture@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VTexture@Engine@Spectre@@@std@@0@Z @ 0x18003914C
 * Callers:
 *     ?ResolveMultisampledInput@ImageProcessingManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@@Z @ 0x1800739CC (-ResolveMultisampledInput@ImageProcessingManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VTexture@En.c)
 *     ?ResolveReadableTexture@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAA_NAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@W4ShaderAccessMode@DeviceDepthBuffer@34@@Z @ 0x1800D6F10 (-ResolveReadableTexture@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAA_NAEBV-$shared_ptr@VCommandLi.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Spectre::Engine::CommandList::CopyTexture(_QWORD **a1, __int64 a2, __int64 a3)
{
  (*(void (__fastcall **)(_QWORD *, _QWORD **))(*a1[12] + 8LL))(a1[12], a1);
  ((void (__fastcall *)(_QWORD **, __int64, __int64))(*a1)[31])(a1, a2, a3);
  return ((__int64 (__fastcall *)(_QWORD **))(*a1)[37])(a1);
}
