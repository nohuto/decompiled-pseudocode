/*
 * XREFs of ??$ToAsyncOperation@U?$IAsyncOperation@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@Windows@@@VisualCapture@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@U?$IAsyncOperation@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18010AB58
 * Callers:
 *     ?CaptureAsync@Partner@Visual@Composition@UI@Windows@@UEAAJPEAUIVisual@345@PEAUICompositionGraphicsDevice@345@HHW4DirectXPixelFormat@DirectX@Graphics@5@W4DirectXAlphaMode@9Graphics@5@PEAPEAU?$IAsyncOperation@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@5@@Z @ 0x18010AF80 (-CaptureAsync@Partner@Visual@Composition@UI@Windows@@UEAAJPEAUIVisual@345@PEAUICompositionGraphi.c)
 *     ?CaptureAsync@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJPEAUIVisual@345@USizeInt32@Graphics@5@W4DirectXPixelFormat@DirectX@85@W4DirectXAlphaMode@DirectX@85@MPEAPEAU?$IAsyncOperation@PEAUICompositionSurface@Composition@UI@Windows@@@Foundation@5@@Z @ 0x180156B40 (-CaptureAsync@Api@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJPEAUIVisual@345@USizeIn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualCapture::ToAsyncOperation<Windows::Foundation::IAsyncOperation<Windows::UI::Composition::ICompositionSurface *>>(
        Microsoft::WRL2::NestableRuntimeClass *this,
        __int64 *a2)
{
  __int64 result; // rax

  if ( this )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(a2);
    *a2 = (__int64)this + 136;
    return Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(this);
  }
  return result;
}
