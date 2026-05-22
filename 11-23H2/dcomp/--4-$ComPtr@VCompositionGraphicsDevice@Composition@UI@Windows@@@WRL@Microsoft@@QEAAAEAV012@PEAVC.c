/*
 * XREFs of ??4?$ComPtr@VCompositionGraphicsDevice@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAVCompositionGraphicsDevice@Composition@UI@Windows@@@Z @ 0x18008603C
 * Callers:
 *     ?RuntimeClassInitialize@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionGraphicsDevice@234@USizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@84@W4DirectXAlphaMode@DirectX@84@@Z @ 0x18003A738 (-RuntimeClassInitialize@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJPEAVCompos.c)
 *     ?RuntimeClassInitialize@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionGraphicsDevice@234@USizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@84@W4DirectXAlphaMode@DirectX@84@_N5@Z @ 0x1800614E4 (-RuntimeClassInitialize@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEAVCompositor@23.c)
 *     ?RuntimeClassInitialize@CompositionMipmapSurface@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionGraphicsDevice@234@USizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@84@W4DirectXAlphaMode@DirectX@84@@Z @ 0x180193FEC (-RuntimeClassInitialize@CompositionMipmapSurface@Composition@UI@Windows@@QEAAJPEAVCompositor@234.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::CompositionGraphicsDevice>::operator=(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        Microsoft::WRL2::NestableRuntimeClass *a2)
{
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx

  if ( *a1 != a2 )
  {
    if ( a2 )
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a2);
    v4 = *a1;
    *a1 = a2;
    if ( v4 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  }
  return a1;
}
