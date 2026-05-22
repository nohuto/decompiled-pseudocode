/*
 * XREFs of ?IsValid@CompositionGraphicsDevice@Composition@UI@Windows@@QEAA_NXZ @ 0x180061C34
 * Callers:
 *     ?CreateVirtualDrawingSurface@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@64@W4DirectXAlphaMode@864@PEAPEAVCompositionVirtualDrawingSurface@234@@Z @ 0x18003A518 (-CreateVirtualDrawingSurface@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJUSizeInt32@G.c)
 *     ?CreateSurface@CompositionGraphicsDevice@Composition@UI@Windows@@AEAAJAEBUSizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@64@W4DirectXAlphaMode@864@_N3PEAPEAVCompositionDrawingSurface@234@@Z @ 0x18006157C (-CreateSurface@CompositionGraphicsDevice@Composition@UI@Windows@@AEAAJAEBUSizeInt32@Graphics@4@W.c)
 *     ?UseUnderlyingSurface@DrawingSurfaceBase@Composition@UI@Windows@@IEAAJPEAPEAUIDCompositionSurface@@@Z @ 0x180061BA4 (-UseUnderlyingSurface@DrawingSurfaceBase@Composition@UI@Windows@@IEAAJPEAPEAUIDCompositionSurfac.c)
 *     ?Resize@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@@Z @ 0x18010A52C (-Resize@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@@Z.c)
 *     ?CreateMipmapSurface@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@64@W4DirectXAlphaMode@864@PEAPEAVCompositionMipmapSurface@234@@Z @ 0x180156F8C (-CreateMipmapSurface@CompositionGraphicsDevice@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall Windows::UI::Composition::CompositionGraphicsDevice::IsValid(
        Windows::UI::Composition::CompositionGraphicsDevice *this)
{
  return (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 26) + 32LL) + 312LL))(*(_QWORD *)(*((_QWORD *)this + 26) + 32LL)) >= 0;
}
