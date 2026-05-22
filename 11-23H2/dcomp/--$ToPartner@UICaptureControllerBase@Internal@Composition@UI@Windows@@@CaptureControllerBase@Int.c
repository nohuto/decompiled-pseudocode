/*
 * XREFs of ??$ToPartner@UICaptureControllerBase@Internal@Composition@UI@Windows@@@CaptureControllerBase@Internal@Composition@UI@Windows@@SAXPEAV01234@V?$ComPtrRef@V?$ComPtr@UICaptureControllerBase@Internal@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18010E0F8
 * Callers:
 *     ?CreateCaptureController@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICaptureControllerBase@1345@@Z @ 0x18010EAD0 (-CreateCaptureController@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICaptureControl.c)
 *     ?get_Controller@Partner@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJPEAPEAUICaptureControllerBase@3456@@Z @ 0x1801807C0 (-get_Controller@Partner@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJPEAPEAUICaptur.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::CaptureControllerBase::ToPartner<Windows::UI::Composition::Internal::ICaptureControllerBase>(
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
