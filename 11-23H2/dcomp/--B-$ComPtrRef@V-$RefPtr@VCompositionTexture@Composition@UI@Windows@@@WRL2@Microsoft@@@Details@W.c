/*
 * XREFs of ??B?$ComPtrRef@V?$RefPtr@VCompositionTexture@Composition@UI@Windows@@@WRL2@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAVCompositionTexture@Composition@UI@Windows@@XZ @ 0x1800A35F0
 * Callers:
 *     ?MarshalSurface@CompositionSurfaceBrush@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@234@PEAUICompositionSurface@234@@Z @ 0x1800304E0 (-MarshalSurface@CompositionSurfaceBrush@Composition@UI@Windows@@EEAAJPEAVSurfaceBindPoint@234@PE.c)
 *     ?NotifyUnderlyingContentChange@SurfaceBindPoint@Composition@UI@Windows@@QEAAXXZ @ 0x18004B320 (-NotifyUnderlyingContentChange@SurfaceBindPoint@Composition@UI@Windows@@QEAAXXZ.c)
 *     ?AttachSurface@SurfaceBindPoint@Composition@UI@Windows@@AEAAJPEAUICompositionSurface@234@@Z @ 0x180090AD0 (-AttachSurface@SurfaceBindPoint@Composition@UI@Windows@@AEAAJPEAUICompositionSurface@234@@Z.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionTexture>>::operator Windows::UI::Composition::CompositionTexture * *(
        Microsoft::WRL2::NestableRuntimeClass ***a1)
{
  Microsoft::WRL2::NestableRuntimeClass **v1; // rbx

  v1 = *a1;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(*a1);
  return v1;
}
