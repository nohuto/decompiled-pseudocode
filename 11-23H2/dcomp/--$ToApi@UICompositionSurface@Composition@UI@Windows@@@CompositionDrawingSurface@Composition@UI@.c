/*
 * XREFs of ??$ToApi@UICompositionSurface@Composition@UI@Windows@@@CompositionDrawingSurface@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@UICompositionSurface@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801542F8
 * Callers:
 *     ?GetSurfaceUnsafe@BackCompat@GlobalVisualCapture@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSurface@345@@Z @ 0x1801547E0 (-GetSurfaceUnsafe@BackCompat@GlobalVisualCapture@Composition@UI@Windows@@UEAAJPEAPEAUICompositio.c)
 *     ?GetResults@AsyncOperation@VisualCapture@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSurface@345@@Z @ 0x180154E30 (-GetResults@AsyncOperation@VisualCapture@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSurface.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionDrawingSurface::ToApi<Windows::UI::Composition::ICompositionSurface>(
        Microsoft::WRL2::NestableRuntimeClass *this,
        __int64 *a2)
{
  __int64 result; // rax

  if ( this )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(a2);
    *a2 = ((unsigned __int64)this + 208) & ((unsigned __int128)-(__int128)((unsigned __int64)this + 192) >> 64);
    return Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(this);
  }
  return result;
}
